typedef struct Obj_82BEE168 {
    int pad[5];
    void *thread;   /* 0x14 */
} Obj_82BEE168;

typedef struct Args_82BEE168 {
    unsigned int a;
    unsigned int b;
} Args_82BEE168;

extern void *(*lbl_831751D0)(unsigned int size);
extern void (*lbl_831751CC)(void *p);
extern void fn_82BEE060(void);
extern void *fn_82A1E0C0(void *attr, unsigned int stack, void *start, void *param,
                         unsigned int flags, unsigned long *tid);
extern int fn_82A1E2C0(void *h);

int fn_82BEE168(Obj_82BEE168 *o, unsigned int a, unsigned int b)
{
    Args_82BEE168 *p;
    void *h;
    unsigned long tid;

    if (o->thread == 0) {
        tid = 0;
        p = (Args_82BEE168 *)lbl_831751D0(8);
        if (p == 0) {
            return 0;
        }
        p->a = a;
        p->b = b;
        h = fn_82A1E0C0(0, 0, (void *)fn_82BEE060, p, 4, &tid);
        o->thread = h;
        if (h == 0) {
            lbl_831751CC(p);
            return 0;
        }
        fn_82A1E2C0(h);
        return 1;
    }
    return 0;
}
