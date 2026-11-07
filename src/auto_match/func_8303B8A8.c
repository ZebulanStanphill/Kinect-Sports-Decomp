typedef struct Obj_8303B8A8 { void *vt; int base[6]; int x1c; float x20; } Obj_8303B8A8;
extern void *fn_82FA5060(void *, unsigned int);
extern void fn_8302B7D0(Obj_8303B8A8 *, int, int);
extern void fn_8302BB20(Obj_8303B8A8 *);
extern char lbl_8217D418[];
extern void *lbl_831BC768;
Obj_8303B8A8 *fn_8303B8A8(int a, int b)
{
    Obj_8303B8A8 *p = (Obj_8303B8A8 *)fn_82FA5060(lbl_831BC768, 0x24);
    if (p != 0) {
        fn_8302B7D0(p, a, b);
        p->x1c = 0;
        p->vt = lbl_8217D418;
        p->x20 = 0.0f;
        fn_8302BB20(p);
        return p;
    }
    return 0;
}
