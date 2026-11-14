extern int fn_82D7E470(void **name);
extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BF2DC8(void *mem, void *name, int flags);
extern void fn_82BE5240(void *log, int code, const char *msg);
extern void (*lbl_831751CC)(void *p);
extern void *lbl_83175308;
extern void *lbl_8322B1DC;

void *fn_82BE7790(void)
{
    void *pair = 0;
    void *name = 0;
    void *mem;

    if (fn_82D7E470(&name) != 0) {
        mem = fn_82BE56B0(0x1c);
        if (mem != 0)
            pair = fn_82BF2DC8(mem, name, 1);
        lbl_831751CC(name);
    } else {
        mem = fn_82BE56B0(0x1c);
        pair = mem != 0 ? fn_82BF2DC8(mem, lbl_83175308, 1) : 0;
    }
    if (pair == 0 && lbl_8322B1DC != 0)
        fn_82BE5240(lbl_8322B1DC, 0x65, "Allocation failed for Locate Service pair");
    return pair;
}
