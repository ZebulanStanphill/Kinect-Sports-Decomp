typedef union Interval_82A336E8 {
    struct {
        long high;
        unsigned long low;
    } parts;
    __int64 quad;
} Interval_82A336E8;

extern int KeDelayExecutionThread(int mode, unsigned char alertable, Interval_82A336E8 *interval);

/* SleepEx: sleeps for ms milliseconds (forever for 0xffffffff), returning
   WAIT_IO_COMPLETION when an APC woke an alertable wait */
unsigned long fn_82A336E8(unsigned long ms, unsigned char alertable)
{
    Interval_82A336E8 interval;
    int status;
    if (ms != 0xffffffff) {
        interval.quad = (__int64)ms * -10000;
    } else {
        interval.parts.low = 0;
        interval.parts.high = 0x80000000;
    }
    do {
        status = KeDelayExecutionThread(1, alertable, &interval);
    } while (alertable && status == 0x101);
    return status == 0xc0 ? 0xc0 : 0;
}
