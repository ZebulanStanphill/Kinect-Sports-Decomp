extern void fn_828BDDA0(void *p);
extern char lbl_82027360[];
extern char lbl_82027368[];
typedef struct { void *vt; char pad[0x2c]; int x80; int x84; int x88; int x8c; } Sub;
typedef struct { void *vt; int pad[19]; Sub sub; } S;

S *fn_828E57F8(S *p)
{
    fn_828BDDA0(p);
    { void **pv = &p->vt; *pv = lbl_82027368; }
    { void **pv = &p->sub.vt; *pv = lbl_82027360; }
    p->sub.x80 = 0;
    p->sub.x84 = 0;
    p->sub.x88 = 0;
    p->sub.x8c = 0;
    return p;
}
