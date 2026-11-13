extern void fn_8267C8D8(void *p);
extern void fn_8267CB10(void *p);
extern void fn_8267D9C0(void *p);

typedef struct {
    char pad0[0x7c];
    int state;
    char *inner;
    char pad84[8];
    unsigned char flag;
} Obj_826DB798;

void fn_826DB798(int param_1, unsigned char immediate)
{
    int o = *(int *)(param_1 + 0x20);
    Obj_826DB798 *p;
    void *cs;

    if (o != 0) {
        p = (Obj_826DB798 *)o;
        if (immediate) {
            p->flag = 1;
        } else {
            cs = p->inner + 8;
            fn_8267C8D8(cs);
            p->state = 3;
            fn_8267CB10(p->inner + 0x1c);
            fn_8267D9C0(cs);
        }
    }
}
