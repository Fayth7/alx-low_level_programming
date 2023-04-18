#!/bin/bash

max_pid=$(cat /proc/sys/kernel/pid_max)
echo "The maximum value of a process ID is $max_pid"
