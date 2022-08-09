#pragma once

#ifndef TESTCOMMAND_H
#define TESTCOMMAND_H
#endif

#include <stdio.h>

/**
 * @brief Execute command
 * 
 * @param argc - argument count
 * @param argv - argument array
 */
void test_command(int argc, char *argv[])
{
    // print
    printf("This is the test command.\nThe arguments for this command were:\n");

    // print arguments
    for (int i = 0; i < argc; i++)
        printf("- %s\n", argv[i]);
}