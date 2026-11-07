typedef struct {
    void *obj;
    void *handle;
} Pair_8267A0E0;

extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);
extern void *fn_8281B530(unsigned int ctx, int key);
extern int fn_82A93C18(int a, int b, int c, int d, int e, int f, int g, int h,
                       int i, void *j, int k, int l);
extern void fn_82A93F70(void *obj, void *handle);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int lbl_831E7B50;
extern char lbl_831E7B5C[];

int fn_8267A0E0(int param_1, int param_2, int param_3, int param_4, int param_5,
                Pair_8267A0E0 *out)
{
    int result;
    void *obj;
    int key;

    result = 0;
    obj = fn_8265C9E0(0x34);
    out->obj = obj;
    if (obj == 0) {
        result = 8;
    } else {
        key = fn_82A93C18(param_1, param_2, param_3, param_4, param_5, 0, 0, -1,
                          0, obj, 0, 0);
        RtlEnterCriticalSection(lbl_831E7B5C);
        out->handle = fn_8281B530(lbl_831E7B50, key);
        RtlLeaveCriticalSection(lbl_831E7B5C);
        if (out->handle == 0) {
            result = 8;
            fn_8265CA20(out->obj);
            out->obj = 0;
        } else {
            fn_82A93F70(out->obj, out->handle);
        }
    }
    return result;
}
