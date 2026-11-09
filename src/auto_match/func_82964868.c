extern void *fn_82963998(int size);
extern void *fn_829632A0(void *mem);
extern void fn_82BA02A8(void *obj);
extern int fn_82963D50(void *obj, int a);
extern int fn_829644B8(int a, void *obj);
extern void fn_829639F0(void *obj);

int fn_82964868(int param_1, int param_2)
{
    void *mem;
    void *obj;

    mem = fn_82963998(0x74);
    if (mem != 0) {
        obj = fn_829632A0(mem);
    } else {
        obj = 0;
    }
    if (obj == 0) {
        return -1;
    }
    if (fn_82963D50(obj, param_2) < 0) {
        fn_82BA02A8(obj);
        fn_829639F0(obj);
        return -1;
    }
    return fn_829644B8(param_1, obj);
}
