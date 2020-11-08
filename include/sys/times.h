/* MMURTL system call header file */
#ifndef _TIMES_H
#define _TIMES_H

typedef	unsigned long clock_t;

struct tms {
        clock_t tms_utime;              /* user time */
        clock_t tms_stime;              /* system time */
        clock_t tms_cutime;             /* user time, children */
        clock_t tms_cstime;             /* system time, children */
};

#endif
