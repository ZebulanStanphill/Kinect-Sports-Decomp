typedef unsigned int uint;

typedef struct Arr_82D05200 {
    void *data;
    int size;
    unsigned int cap;
} Arr_82D05200;

extern void fn_82CE7E00(Arr_82D05200 *a, void *p);
extern void *fn_82CFBE40(unsigned int n);
extern void fn_82CFC050(void *dst, unsigned int n, void *src);

Arr_82D05200 *fn_82D05200(Arr_82D05200 *a, uint *src)
{
    unsigned int n;

    a->data = a + 1;
    a->size = 0;
    a->cap = 0x80000020;
    n = *src & ~1u;
    if (n != 0) {
        void *p = fn_82CFBE40(n);
        fn_82CE7E00(a, p);
        fn_82CFC050(a->data, n, p);
    } else {
        fn_82CE7E00(a, 0);
    }
    return a;
}
