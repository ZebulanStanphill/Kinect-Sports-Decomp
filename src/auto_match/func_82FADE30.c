extern void fn_82FAFD70(void *p);
extern char lbl_8216CD20[];
extern char lbl_8217C940[];
typedef struct { void *vt; char pad[0x80]; int x; int y; int z; int w; } Sub;
typedef struct { void *vt; int pad[6]; Sub sub; } S;

S *fn_82FADE30(S *p)
{
    fn_82FAFD70(p);
    { void **pv = &p->vt; *pv = lbl_8216CD20; }
    { void **pv = &p->sub.vt; *pv = lbl_8217C940; }
    p->sub.x = 0;
    p->sub.y = 0;
    p->sub.z = 0;
    p->sub.w = 0;
    return p;
}
