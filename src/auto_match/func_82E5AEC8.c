void *memset(void *dst, int c, unsigned int n);

extern char lbl_82154D80[];

typedef struct {
    void *vt;
    int f04;
    unsigned int f08;
    int f0c;
    unsigned short f10;
    unsigned char b12;
    unsigned char b13;
    unsigned char block[0x50];
    int f64;
    int f68;
} Obj_82E5AEC8;

Obj_82E5AEC8 *fn_82E5AEC8(Obj_82E5AEC8 *p)
{
    p->f04 = 0;
    p->f08 = 0;
    p->f10 = 0;
    p->b12 = 0;
    memset(p->block, 0, sizeof(p->block));
    p->f64 = 0;
    p->f68 = 0;
    p->f0c = 0;
    p->vt = lbl_82154D80;
    p->f08 |= 1;
    return p;
}
