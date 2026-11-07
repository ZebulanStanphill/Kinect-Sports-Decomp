typedef struct Arr_82757CE8 {
    void **data;
    unsigned int count;
} Arr_82757CE8;

extern void fn_8267BE38(void *p);
extern void fn_82756300(Arr_82757CE8 *a, int b);
extern void fn_827564F0(void *p);

static __forceinline void Delete_82757CE8(void *o)
{
    if (o != 0) {
        fn_827564F0(o);
        fn_8267BE38(o);
    }
}

void fn_82757CE8(Arr_82757CE8 *a)
{
    unsigned int n;
    unsigned int i;

    n = a->count;
    for (i = 0; i < n; i++) {
        if (a->data[i] != 0) {
            Delete_82757CE8(a->data[i]);
        }
    }
    fn_82756300(a, 0);
}
