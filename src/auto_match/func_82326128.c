typedef struct Ref_82326128 {
    unsigned int *p;
    unsigned int *rc;
} Ref_82326128;
extern void fn_822315A0(unsigned int *rc);
extern Ref_82326128 *fn_822C8A18(Ref_82326128 *out, void *a, const char *s);
extern Ref_82326128 *fn_82522588(Ref_82326128 *out, Ref_82326128 *in);
extern void fn_822FB198(unsigned int *p, void *b);

void fn_82326128(void *param_1, void *param_2)
{
    Ref_82326128 a;
    Ref_82326128 b;
    Ref_82326128 *r;

    r = fn_82522588(&a, fn_822C8A18(&b, param_1, "idle"));
    fn_822FB198(r->p, param_2);
    if (a.rc != 0) {
        fn_822315A0(a.rc);
    }
    if (b.rc != 0) {
        fn_822315A0(b.rc);
    }
}
