// Initial Command
	// ./capsl 134 +56
	// argv = address
	// *argv = ./capsl
	// **argv = .
	// argv++ = & ./capsl

	// argv = & 134		*argv = 134		**argv = 1
	// from now on reset to here between each line

	// argv++ = & 134					// argv = & +56		*argv = +56
	// ++argv = & +56					// argv = & +56		*argv = +56

	// *argv++ = 134					// argv = & +56		*argv = +56
	// *++argv = +56					// argv = & +56		*argv = +56
	// ++*argv = 34						// argv = & 134		*argv = 34

	// **argv++ = 1						// argv = & +56		*argv = +56
	// **++argv = +						// argv = & +56		*argv = +56
	// *++*argv = 3						// argv = & 134		*argv = 34
	// ++**argv = 2						// argv = & 134		*argv = 234

	// other combinations possible with multiple sets of ++

	// argv+1 = & +56
	// *argv+1 = 34		// same output as ++*argv (but does not affect argv)
	// **argv+1 = 52  (ascii code for 3 (51), plus 1)
		// **argv returns a char ('1'), but the +1 turns the return value into an int, thus the ascii code
	// *(argv+1) = +56	// same output as *++argv (but does not affect argv)
	// **(argv+1) = +	// same output as **++argv (but does not affect argv)
	// *(*argv+1) = 3	// same output as ++**argv (but does not affect argv)
	// *(argv+1)+1 = 56	// just for fun, same as ++*++argv

	// all of these should be true:
	// **argv == '1' && *argv[0] == '1' && argv[0][1] == '3' && **(argv+1) == '+'
