extern void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)
extern void fn_82A1BB18(void);
extern int fn_8259A230(void);
extern void fn_82522ED8(unsigned int);
extern void fn_825E7EE8(unsigned int);
extern int fn_82BFE530(unsigned int, unsigned int *);
extern unsigned int lbl_83296E18[];

void fn_8258ACE8(void)
{
    unsigned int msg;
    unsigned int buf;
    int hr;
    int idx;

    for (;;) {
        fn_82A1BB18();
        idx = fn_8259A230();
        buf = 0;
        hr = fn_82BFE530(lbl_83296E18[idx], &buf);
        msg = hr >= 0 ? buf : 0;
        if (msg == 0)
            break;
        __lwsync();
        fn_825E7EE8(*(unsigned int *)(msg + 0xc));
        fn_82A1BB18();
        fn_8259A230();
        fn_82522ED8(msg);
    }
}
