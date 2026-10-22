extern void *fn_82B7BD28(int, int);
extern void fn_82B7BEB0(int, int *);
extern void fn_82BA08F8(int, int, int);
extern int *fn_82BC4BC0(int *, int);
extern void fn_82BC4CB0(int *);
extern void fn_82BC5080(int *, int);

void *fn_82BA3FB0(int param_1)
{
    int heap;
    int *p;
    int *obj;

    if (*(void **)(param_1 + 0x98) == 0) {
        heap = *(int *)(*(int *)(param_1 + 0xc) + 0x5b0);
        p = (int *)fn_82B7BD28(heap, 0x2c);
        *p = heap;
        p = p + 1;
        if (p != 0) {
            obj = fn_82BC4BC0(p, param_1);
        } else {
            obj = 0;
        }
        fn_82BC5080(obj, *(int *)(param_1 + 0xa4));
        fn_82BA08F8(param_1, obj[6], obj[7]);
        fn_82BC4CB0(obj);
        fn_82B7BEB0(obj[-1], obj - 1);
    }
    return *(void **)(param_1 + 0x98);
}
