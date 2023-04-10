#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int main(int argc, char* argv[]) {
    int fd;
    Elf64_Ehdr header;

    /* Make sure the user provided a filename argument */
    if (argc < 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    /* Open the file for reading */
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: Unable to open file: %s\n", argv[1]);
        return 98;
    }

    /* Read the ELF header */
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        fprintf(stderr, "Error: Unable to read ELF header\n");
        close(fd);
        return 98;
    }

    /* Make sure the file is an ELF file */
    if (header.e_ident[EI_MAG0] != ELFMAG0 || 
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
        close(fd);
        return 98;
    }

    /* Print out the ELF header information */
    printf("Magic:   %02x %02x %02x %02x\n",
           header.e_ident[EI_MAG0],
           header.e_ident[EI_MAG1],
           header.e_ident[EI_MAG2],
           header.e_ident[EI_MAG3]);
    printf("Class:   %d\n", header.e_ident[EI_CLASS]);
    printf("Data:    %d\n", header.e_ident[EI_DATA]);
    printf("Version: %d\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:  %d\n", header.e_ident[EI_OSABI]);
    printf("ABI Ver: %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:    %d\n", header.e_type);
    printf("Entry:   %lx\n", (unsigned long)header.e_entry);

    /* Close the file and exit */
    close(fd);
    return 0;
}

