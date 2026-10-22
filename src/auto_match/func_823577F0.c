typedef struct {
    void *p;
    void *rc;
} Ref;

extern void fn_822315A0(void *rc);
extern void fn_8226D6A0(void *p);
extern void fn_82356F98(Ref *out);
extern void fn_823F2E20(int *a, Ref *r);

void fn_823577F0(int *a, void **b)
{
    Ref r;
    if (*a != 0) {
        fn_82356F98(&r);
        fn_823F2E20(a, &r);
        if (r.rc != 0) {
            fn_822315A0(r.rc);
        }
    }
    if (*b != 0) {
        fn_8226D6A0(*b);
        *b = 0;
    }
}
