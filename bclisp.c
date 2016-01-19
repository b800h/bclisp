#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

#include "mpc.h"

mpc_parser_t* Adjective = mpc_or(4,
	mpc_sym("wow"), mpc_sym("many"),
	mpc_sym("so"), mpc_sym("such")
);

mpc_parser_t* Noun = mpc_or(5,
	mpc_sym("lisp"), mpc_sym("language"),
	mpc_sym("book"), mpc_sym("build"),
	mpc_sym("c")
);

int main(int argc, char** argv) {
	
	/* Output version and exit info */
	puts("bclisp version 0.0.0.1\n");
	puts("Press Ctrl-c to Exit\n");
	
	while (1) {
	
		char* input = readline("bclisp> ");
		add_history(input);
		printf("User input %s received\n", input); 
		free(input);
	}
	return 0;
}
