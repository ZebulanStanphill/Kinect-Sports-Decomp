typedef struct {
    void *data;
    int size;
    unsigned int cap;
} Arr_82D05178;

extern void fn_82CE7E00(Arr_82D05178 *a, void *p);
extern void *fn_82CFBE40(unsigned int n);
extern void fn_82CFC050(void *dst, unsigned int n, void *src);

Arr_82D05178 *fn_82D04AB8(Arr_82D05178 *a, unsigned int n)
{
    if (n != 0) {
        void *p = fn_82CFBE40(n);
        fn_82CE7E00(a, p);
        fn_82CFC050(a->data, n, p);
    } else {
        fn_82CE7E00(a, 0);
    }
    return a;
}
