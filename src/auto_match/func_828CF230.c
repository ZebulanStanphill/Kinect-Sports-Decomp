typedef struct Arg_828CF230 {
    int pad0;
    void *key;
} Arg_828CF230;

typedef struct Entry_828CF230 {
    char pad[0x4c];
    int target;
} Entry_828CF230;

extern Entry_828CF230 *fn_8289F3A8(void *scope, void *key);
extern void *fn_82897B18(void *v);
extern int fn_82897620(int target, void *v);

int fn_828CF230(void *self, void *scope, Arg_828CF230 *arg, void *value)
{
    Entry_828CF230 *e;
    int target;
    void *key = arg->key;
    int result = 0;

    e = fn_8289F3A8(scope, key);
    if (e != 0 && (target = e->target) != 0) {
        result = fn_82897620(target, fn_82897B18(value));
    }
    return result;
}
