#include "cli.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "startup.h"
#include "handler.h"

/**
 * @brief Startup function
 */
void startup()
{
    // check to clear screen
    if (CLEAR)
        system("clear");

    printf("%s\n", TITLE);
    printf("%s ", STARTER);
}

/**
 * @brief Enter the CLI
 */
void enter_cli()
{
    // define input
    char input[MAX_STRING_SIZE];

    // cli loop
    while (fgets(input, sizeof(input), stdin))
    {
        // remove nl
        input[strlen(input) - 1] = '\0';

        // check for exit
        if (NO_EXIT(input))
        {
            system("clear");
            exit(0);
        }


        // split into array
        char *tokens = strtok(input, " ");

        // create argv array
        char *argv[MAX_STRING_SIZE];

        int argc = 0;
        while (tokens != NULL)
        {
            // insert into array
            argv[argc] = strdup(tokens);
            tokens = strtok(NULL, " ");

            // up the length
            argc++;
        }

        // run command
        run_command(input, argc, argv);

        // print command starter
        printf("%s ", STARTER);
    }
}