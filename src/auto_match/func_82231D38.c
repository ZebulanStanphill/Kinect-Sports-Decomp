extern void fn_828974A8(void *p);
extern void fn_8289D4C0(void *p);
extern int lbl_82197070[];
extern int lbl_82197100[];
extern int lbl_82196924[];

typedef struct { int *vt; } Sub;
typedef struct { int *vt; int pad[17]; Sub sub; } S;

static void sub_dtor(Sub *s) { s->vt = lbl_82197100; fn_8289D4C0(s); }
static void base_dtor(S *p) { p->vt = lbl_82197070; fn_828974A8(p); }

void fn_82231D38(S *p)
{
    p->vt = lbl_82196924;
    sub_dtor(&p->sub);
    base_dtor(p);
}
