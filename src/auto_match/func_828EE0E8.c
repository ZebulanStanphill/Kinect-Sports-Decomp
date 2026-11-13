typedef struct {
    unsigned char b[8];
} Bytes8_828EE0E8;

typedef struct {
    unsigned char pad0[0x148];
    unsigned char b148;              /* 0x148 */
    unsigned char b149;              /* 0x149 */
    unsigned char b14a;              /* 0x14a */
    unsigned char b14b;              /* 0x14b */
    unsigned char b14c;              /* 0x14c */
    unsigned char b14d;              /* 0x14d */
    unsigned char b14e;              /* 0x14e */
    unsigned char b14f;              /* 0x14f */
    int i150;             /* 0x150 */
    int i154;             /* 0x154 */
    unsigned char pad158[0x1e1 - 0x158];
    unsigned char b1e1;              /* 0x1e1 */
    unsigned char b1e2;              /* 0x1e2 */
    unsigned char pad1e3;
    int i1e4;             /* 0x1e4 */
    Bytes8_828EE0E8 id;   /* 0x1e8 */
    unsigned char a1f0[0x10];        /* 0x1f0 */
    unsigned char a200[0x24];        /* 0x200 */
    int i224;             /* 0x224 */
    unsigned char b228;              /* 0x228 */
    unsigned char b229;              /* 0x229 */
} Obj_828EE0E8;

extern void fn_828EC900(Obj_828EE0E8 *p);
extern void *memcpy(void *dst, const void *src, unsigned int n);

void fn_828EE0E8(Obj_828EE0E8 *p, int a2, const Bytes8_828EE0E8 *id,
                 const void *blk16, const void *blk24,
                 unsigned char a6, unsigned char a7, unsigned char a8, unsigned char a9, unsigned char a10, unsigned char a11, unsigned char a12, unsigned char a13,
                 int a14, int a15, unsigned char a16, unsigned char a17)
{
    p->i1e4 = a2;
    p->b148 = a6;
    p->b149 = a7;
    p->b1e1 = 0;
    p->b1e2 = 1;
    p->i224 = 1;
    p->b14a = a8;
    p->b14c = a9;
    p->b14b = a10;
    p->b14d = a11;
    p->b14e = a12;
    p->b14f = a13;
    p->i150 = a14;
    p->i154 = a15;
    p->id = *id;
    memcpy(p->a1f0, blk16, 0x10);
    memcpy(p->a200, blk24, 0x24);
    p->b228 = a16;
    p->b229 = a17;
    fn_828EC900(p);
}
