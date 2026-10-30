typedef struct { void *lock; int kind; } LockEntry;
extern LockEntry lbl_831BB940[];
extern int fn_82F71B90(int);
extern void _amsg_exit(int);
extern void RtlEnterCriticalSection(void *);

void _lock(int locknum)
{
    if (lbl_831BB940[locknum].lock == 0) {
        if (!fn_82F71B90(locknum))
            _amsg_exit(0x11);
    }
    RtlEnterCriticalSection(lbl_831BB940[locknum].lock);
}
