/* MMURTL system call header file */
#ifndef _TIME_H
#define _TIME_H

typedef long time_t;

struct timeval {
        time_t          tv_sec;         /* seconds */
        suseconds_t     tv_usec;        /* and microseconds */
};

#endif
