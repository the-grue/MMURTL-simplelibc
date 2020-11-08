int isatty(int file)
{
        /* MMURTL only uses 1 for stdin and 2 for stdout and stderr */
        /* per the stdio.h file used with CM32 so will use same here */
        if((file == 1) || (file == 2))
                return 1;
        else
                return 0;
}
