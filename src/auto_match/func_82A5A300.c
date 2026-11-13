extern long _InterlockedDecrement(long *);
extern void fn_82A4F4E0(void *);
typedef struct { unsigned char state; char pad[0xf]; long refs; } Obj_82A5A300;
int fn_82A5A300(Obj_82A5A300 *p)
{
    unsigned long n = _InterlockedDecrement(&p->refs);
    if (n == 0) {
        p->state = 0xf;
        fn_82A4F4E0(p);
    }
    return 1;
}
