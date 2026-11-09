extern void *fn_8265C940(int size, unsigned int tag);
extern void fn_8265C990(void *mem, unsigned int tag);
extern void *fn_82BA02A8(void *obj);
extern int fn_829B3780(void *obj, int a, int b, int c, int d);
extern int fn_82964228(int owner, void *obj);

int fn_82964588(int owner, int a, int b, int c, int d)
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
    if (fn_829B3780(obj, a, b, c, d) < 0) {
        fn_82BA02A8(obj);
        fn_8265C990(obj, 0x24810000);
        return -1;
    }
    return fn_82964228(owner, obj);
}
