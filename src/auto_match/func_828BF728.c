typedef struct { int a, b; unsigned int flags; } Sub;
typedef struct {
    void *vt;
    char pad[0x4c];
    void *vt2;
    char pad2[0x2c];
    Sub sub;
    int x8c, x90, x94;
    int pad98;
    unsigned char b9c, pad9d, b9e;
} T;

extern char lbl_82023648[];
extern char lbl_82023640[];
extern void fn_828BDDA0(T *p);
extern void fn_828B5608(Sub *s);

T *fn_828BF728(T *p)
{
    Sub *s;
    fn_828BDDA0(p);
    p->vt = lbl_82023648;
    p->vt2 = lbl_82023640;
    s = &p->sub;
    fn_828B5608(s);
    s->flags = 0x8000000;
    p->x8c = 0;
    p->x90 = 0;
    p->x94 = 0;
    p->b9c = 0;
    p->b9e = 0;
    return p;
}
