#pragma once

#ifndef CLI_H
#define CLI_H
#endif

#ifndef NO_EXIT
#define NO_EXIT(input) (strcmp(input, "exit") == 0) 
#endif

#ifndef MAX_STRING_SIZE
#define MAX_STRING_SIZE 500

// enter the CLI
void startup();
void enter_cli();

#endif