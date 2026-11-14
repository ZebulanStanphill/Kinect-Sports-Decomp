extern void *fn_8265C9E0(unsigned int size);
extern void fn_82886518(void *obj, int a, int b);
extern void *fn_82897BD0(void *p);
extern void *fn_8289F350(void *self, void *key);
extern void *fn_828B5580(void *dst, void *src);
extern void fn_828B55B0(void *p);
extern void fn_828BE158(void *self, void *obj, void *info, int flag);
extern void *fn_828C6CD0(void *mem, void *arg);

typedef struct Temp_8288B6C0 {
    int a;
    int b;
} Temp_8288B6C0;

void fn_8288B6C0(void *self, void *param_2, void *param_3)
{
    void *found;
    void *mem;
    void *obj;
    Temp_8288B6C0 tmp;

    found = fn_8289F350(self, param_3);
    if (found != 0) {
        mem = fn_8265C9E0(0xa8);
        if (mem != 0) {
            obj = fn_828C6CD0(mem, fn_828B5580(&tmp, param_2));
        } else {
            obj = 0;
        }
        fn_82886518(obj, -1, -1);
        fn_828BE158(self, obj, fn_82897BD0(found), 0);
    }
    fn_828B55B0(param_2);
}
