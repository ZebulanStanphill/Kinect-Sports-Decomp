typedef struct R { void *p; } R;
typedef struct S { char pad[0x3a0]; R *r; } S;
extern void fn_83037590(R *r);
extern void fn_82FA5190(int heap, void *p);
extern int lbl_831BC770;

void fn_8300D240(S *s)
{
    if (s->r->p != 0)
        fn_83037590(s->r);
    fn_82FA5190(lbl_831BC770, s->r);
    s->r = 0;
}
