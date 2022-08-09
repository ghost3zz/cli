#pragma once

#ifndef CLEARCOMMAND_H
#define CLEARCOMMAND_H
#endif

#include <stdlib.h>

/**
 * @brief Execute command
 * 
 * @param argc - argument count
 * @param argv - argument array
 */
void clear_command(int argc, char *argv[])
{
    // clear screen
    system("clear");
}