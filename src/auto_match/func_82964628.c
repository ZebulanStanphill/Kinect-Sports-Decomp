extern void *fn_82964128(int size);
extern void *fn_82BA02A8(void *obj);
extern int fn_82963F20(void *obj, int a, int b, int c, float f);
extern int fn_82964300(int owner, void *obj);
extern void fn_82964180(void *obj);

int fn_82964628(int owner, int a, int b, int c, float f)
{
    void *mem;
    void *obj;

    mem = fn_82964128(0x80);
    if (mem != 0) {
        obj = fn_82BA02A8(mem);
    } else {
        obj = 0;
    }
    if (obj == 0) {
        return -1;
    }
    if (fn_82963F20(obj, a, b, c, f) < 0) {
        fn_82BA02A8(obj);
        fn_82964180(obj);
        return -1;
    }
    return fn_82964300(owner, obj);
}
