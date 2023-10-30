#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);

void error_98(int file_to, char *buff, char *argv);
void error_99(int file_to, char *buff, char *argv);
void error_100(int file_to, char *buff);

#endif
