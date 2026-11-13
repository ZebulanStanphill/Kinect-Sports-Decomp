typedef struct { char pad0[0x24]; void *heap; } Ctx_825B18F0;
extern unsigned int fn_82A1F220(void *p, unsigned int flags);
extern void fn_82522838(void);
extern void fn_8259C4C0(void *p);
extern Ctx_825B18F0 *fn_8259C458(void);
extern unsigned int fn_82A277E0(void *heap, unsigned int flags, void *p);
extern unsigned int lbl_832767CC;

unsigned int fn_825B18F0(void *p, unsigned int flags)
{
    if (flags & 0x80000000) {
        return fn_82A1F220(p, flags);
    }
    if (lbl_832767CC == 0) {
        fn_82522838();
    }
    fn_8259C4C0(p);
    {
        Ctx_825B18F0 *c = fn_8259C458();
        return fn_82A277E0(c->heap, 0, p) - 4;
    }
}
