#include "handler.h"

#include <string.h>

// commands
#include "commands/testcommand.h"
#include "commands/clearcommand.h"

/**
 * @brief Convert string to command
 * 
 * @param input - the inputted string
 * @return commands 
 */
command to_enum(const char *input)
{
    // code
    command command;

    // switch
    if (CODE_EQUALS(input, "test")) command = test;
    if (CODE_EQUALS(input, "clear")) command = clear;

    // return
    return command; 
}

/**
 * @brief Run a command
 * 
 * @param input - the inputted string
 * @param argc - argument count
 * @param argv - argument array
 */
void run_command(const char *input, int argc, char *argv[])
{
    // get command
    command command = to_enum(input);

    // switch command
    switch (command)
    {
        // execute
        case test:
            test_command(argc, argv);
            break;
        case clear:
            clear_command(argc, argv);
            break;
        default:
            printf("Unknown command.\n");
            break;
    }
}