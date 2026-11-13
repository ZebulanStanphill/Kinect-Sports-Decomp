extern long _InterlockedDecrement(long *);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern char lbl_83219D50[];
extern void fn_82A3FBE0(void *self, int flag);
typedef struct Obj_82A3FEE0 {
    char pad[0xc];
    long refs;
} Obj_82A3FEE0;
void fn_82A3FEE0(Obj_82A3FEE0 *p)
{
    if ((unsigned long)_InterlockedDecrement(&p->refs) == 0) {
        RtlEnterCriticalSection(lbl_83219D50 + 0x54);
        fn_82A3FBE0(p, 0);
        RtlLeaveCriticalSection(lbl_83219D50 + 0x54);
    }
}
