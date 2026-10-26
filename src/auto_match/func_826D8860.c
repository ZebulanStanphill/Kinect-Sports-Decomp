extern unsigned int lbl_8200C58C;
extern void fn_826C6248(void *p);
typedef struct S { void *vt; int sub; } S;

S *fn_826D8860(S *p)
{
    if (p != 0) {
        p->vt = &lbl_8200C58C;
        fn_826C6248(&p->sub);
        return p;
    }
    return 0;
}
