typedef struct Entry_82693108 {
    unsigned int a;
    unsigned int b;
} Entry_82693108;

typedef struct Obj_82693108 {
    unsigned int h;
    Entry_82693108 e[1];
} Obj_82693108;

extern unsigned char fn_82693008(Entry_82693108 *e, unsigned int h);
extern void fn_82693078(Entry_82693108 *e, unsigned int h);

int fn_82693108(Obj_82693108 *p, unsigned int addr, unsigned int size)
{
    unsigned int first = addr >> 20;
    unsigned int last = (addr + size - 1) >> 20;
    unsigned int i;
    unsigned int j;

    for (i = first; i <= last; i++) {
        if (fn_82693008(&p->e[i], p->h) == 0) {
            for (j = i; j > first; j--) {
                fn_82693078(&p->e[j - 1], p->h);
            }
            return 0;
        }
    }
    return 1;
}
