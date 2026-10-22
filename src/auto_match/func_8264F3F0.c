typedef struct Ring {
    unsigned int base;
    unsigned int f4;
    unsigned int f8;
    unsigned int *cur;
    unsigned int *end;
    unsigned int owner;
} Ring;

extern unsigned int *fn_82643B08(Ring *r);
extern void fn_82643AC0(Ring *r);
extern int KeInsertQueueDpc(void *dpc, unsigned int a, unsigned int b);

void fn_8264F3F0(unsigned int param_1, unsigned int param_2, unsigned int param_3, Ring *r, unsigned int param_5)
{
    unsigned int *p;
    unsigned int addr;
    unsigned int phys;

    r->owner = param_1;
    r->f4 = 0;
    r->f8 = 0x80;
    r->cur = 0;
    r->end = 0;
    r->base = 0;
    fn_82643B08(r);
    p = r->cur;
    if (p + 2 > r->end) {
        p = fn_82643B08(r);
    }
    p[1] = param_2;
    p[0] = param_3 | param_5;
    r->cur = p + 2;
    fn_82643AC0(r);
    addr = r->base;
    if (addr == 0) {
        phys = 0;
    } else {
        phys = (((addr >> 20) + 0x200) & 0x1000) + (addr & 0x1fffffff) - 0x40000000;
    }
    KeInsertQueueDpc((char *)param_1 + *(int *)(param_1 + 0x2c3c) * 0x6c + 0x2c60, phys, 0);
}
