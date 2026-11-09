extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
extern void *fn_82BA02A8(void *obj);
extern int fn_829B37D8(void *obj, int a);
extern int fn_82964228(int a, void *obj);

int fn_82964760(int param_1, int param_2)
{
    void *mem;
    void *obj;

    mem = fn_8265C940(0x34, 0x24810000);
    if (mem != 0) {
        obj = fn_82BA02A8(mem);
    } else {
        obj = 0;
    }
    if (obj == 0) {
        return -1;
    }
    if (fn_829B37D8(obj, param_2) < 0) {
        fn_82BA02A8(obj);
        fn_8265C990(obj, 0x24810000);
        return -1;
    }
    return fn_82964228(param_1, obj);
}
