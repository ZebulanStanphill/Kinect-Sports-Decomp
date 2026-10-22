/* The XDK's ppcintrinsics.h defines __lwsync() as this __emit. */
void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

extern unsigned int fn_82A1E650(unsigned int, int);
extern void *fn_82522DF8(unsigned int);
extern void fn_82A1BB18(void);
extern unsigned int fn_8259A230(void);
extern void fn_82BFE128(unsigned int, void *);
extern unsigned int lbl_8326C3A8;
extern unsigned int lbl_83296E18[];

typedef struct Message {
    int kind;
    unsigned int thread;
    unsigned int queue;
} Message;

static void post(Message *m)
{
    unsigned int *q = &m->queue;
    unsigned int v = *q;
    __lwsync();
    fn_82BFE128(lbl_83296E18[v], m);
}

void fn_82599418(void)
{
    if (fn_82A1E650(lbl_8326C3A8, 0) == 0) {
        Message *m = fn_82522DF8(0x40);
        m->kind = 10;
        fn_82A1BB18();
        m->thread = fn_8259A230();
        m->queue = 1;
        post(m);
    }
}
