/*
 * signal header for gcc for MMURTL
 */

#ifndef _SIGNAL
#define _SIGNAL

#define SIG_ERR (void (*) ())-1
#define SIG_DFL (void (*) ())0
#define SIG_IGN (void (*) ())1

#define SIGABRT 2
#define SIGFPE  3
#define SIGILL  4
#define SIGINT  5
#define SIGSEGV 6
#define SIGTERM 7

#define SIGNALS 32      /* Plenty of room for growth  */

void * signal(int sig, void (*handler)(int));
int raise(int sig);

#endif
