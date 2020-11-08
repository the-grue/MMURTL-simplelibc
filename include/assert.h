/*
 * assert macro for gcc for the MMURTL OS
 *
 */

#undef assert

#ifdef NDEBUG
	#define assert(x) ((void)0)
#else
	void Assert(char *);

	#define STRING(x) VALUE(x)
	#define VALUE(x) #x
	#define assert(test)	((test) ? (void)0 : Assert(__FILE__ ":" STRING(__LINE__) " " #test))
#endif

