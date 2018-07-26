// Initial Command
	// ./capsl 134 +5 %6 -7
	// argv = address
	// *argv = ./capsl
	// **argv = .
	// argv++ = & ./capsl

	// argv = & 134		*argv = 134		**argv = 1
	// from now on reset to here between each line

	// argv++ = & 134					// argv = & +5		*argv = +5
	// ++argv = & +5					// argv = & +5		*argv = +5

	// *argv++ = 134					// argv = & +5		*argv = +5
	// *++argv = +5						// argv = & +5		*argv = +5
	// ++*argv = 34						// argv = & 134		*argv = 34

	// **argv++ = 1						// argv = & +5		*argv = +5
	// **++argv = +						// argv = & +5		*argv = +5
	// *++*argv = 3						// argv = & 134		*argv = 34
	// ++**argv = 2						// argv = & 134		*argv = 234

	// all of these should be true:
	// **argv == '1' && *argv[0] == '1' && argv[0][1] == '3' && **(argv+1) == '+'
