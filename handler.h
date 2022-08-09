#pragma once

#ifndef HANDLER_H
#define HANDLER_H
#endif

#include "cli.h"

#ifndef CODE_EQUALS
#define CODE_EQUALS(input, code) (strcmp(input, code) == 0)
#endif

// commands enum
enum command
{
    test,
    clear
};

// public accessible
typedef enum command command;

// functions
command to_enum(const char *input);
void run_command(const char *input, int argc, char *argv[]);