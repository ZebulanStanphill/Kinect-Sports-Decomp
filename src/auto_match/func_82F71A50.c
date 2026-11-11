typedef struct { void *lock; int kind; } LockEntry;
extern LockEntry lbl_831BB940[];
extern void RtlLeaveCriticalSection(void *);

void _unlock(int locknum)
{
    RtlLeaveCriticalSection(lbl_831BB940[locknum].lock);
}
