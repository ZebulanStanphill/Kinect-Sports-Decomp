struct Unit_8288B2D8 { int pad[2]; unsigned n; int pad2; unsigned *data; unsigned get(unsigned i); };
typedef struct { int a, b; } Tmp;

extern "C" int **fn_8288CD40(void *out, int key, int *val);
extern "C" int fn_828A12E8(int a);
extern "C" void fn_828B55B0(Tmp *t);
extern "C" void fn_828B55C0(void *dst, Tmp *t);
extern "C" int fn_828B55F8(Tmp *t);
extern "C" void fn_828B5608(Tmp *t);
extern "C" void fn_828B57E8(Tmp *t, int a, int b);
extern "C" int fn_828E9D90(int b);
extern "C" int fn_828E9DA8(int b);
extern "C" int fn_828E9FF8(int b, int n);

extern "C" void fn_8288EA88(int self, int a, int b, int out, int *res)
{
    int n;
    int r;
    int key;
    int m;
    int **p;
    char it[4];
    Tmp t;

    n = *(int *)(self + 8);
    r = 0;
    if (n > 0) {
        if (n <= fn_828E9DA8(b) - fn_828E9D90(b)) {
            r = fn_828E9FF8(b, n);
        } else {
            r = 0;
        }
    }
    fn_828B5608(&t);
    fn_828B57E8(&t, a, b);
    *(int *)(out + 0x10) = 1;
    fn_828B55C0((void *)(out + 8), &t);
    key = fn_828B55F8(&t);
    m = fn_828A12E8(a) + 0x94;
    p = fn_8288CD40(it, m, &key);
    *res = ((Unit_8288B2D8 *)(*p)[0x10])->get(r);
    fn_828B55B0(&t);
}
