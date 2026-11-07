typedef struct Obj_82E79B28 {
    char pad0[0x148];
    unsigned int f148;
    char pad14c[4];
    unsigned char f150;
    char pad151[0xf];
    unsigned int f160;
    char pad164[4];
    unsigned int f168;
    char pad16c[0xc];
    char sub178[0x68];
    unsigned int count1e0;
} Obj_82E79B28;

extern int fn_82E76C40(void);
extern int fn_82E78690(void *list, unsigned int index, char **out);
extern unsigned int fn_82E798F8(Obj_82E79B28 *p);

int fn_82E79B28(Obj_82E79B28 *p)
{
    unsigned int i;
    unsigned int n;
    int off;
    char *a;
    char *b;

    off = fn_82E76C40() + p->f150;
    for (i = 0; i < p->count1e0; i++) {
        *(int *)((fn_82E78690(p->sub178, i, &a) ? a : 0) + 0x13) = off;
        off = *(int *)((fn_82E78690(p->sub178, i, &b) ? b : 0) + 0x17) + off;
    }
    n = fn_82E798F8(p);
    if (p->f160 == 0) {
        if (p->f148 >= n) {
            p->f168 = p->f148 - n;
        } else {
            p->f168 = 0;
            return (int)0xc00d3a9a;
        }
    } else {
        p->f148 = n;
        p->f160 = n;
    }
    return 0;
}
