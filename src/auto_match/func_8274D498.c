extern void fn_826C09B0(void *p);
extern void fn_826829A0(void *p, void *a, void *b);
extern char lbl_82013530[];
extern char lbl_82013584[];
typedef struct { void *vt; char pad[0x1c]; int x30; int x34; } Sub;
typedef struct { void *vt; int pad[3]; Sub sub; } S;
S *fn_8274D498(S *p, void *a, void *b)
{
    fn_826C09B0(p);
    { void **pv = &p->vt; *pv = lbl_82013584; }
    { void **pv = &p->sub.vt; *pv = lbl_82013530; }
    p->sub.x30 = 0;
    p->sub.x34 = 0;
    fn_826829A0(&p->sub, a, b);
    return p;
}
