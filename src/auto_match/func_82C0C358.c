typedef struct Arg_82C0C358 {
    unsigned int v[9];
} Arg_82C0C358;

typedef struct Obj_82C0C358 Obj_82C0C358;

typedef struct Vtbl_82C0C358 {
    void *slot[9];
    void (*fn24)(Obj_82C0C358 *self, Arg_82C0C358 *arg);
} Vtbl_82C0C358;

struct Obj_82C0C358 {
    Vtbl_82C0C358 *vt;
};

void *memset(void *dst, int val, unsigned int size);

void fn_82C0C358(Obj_82C0C358 *param_1)
{
    Arg_82C0C358 arg;

    memset(&arg, 0, sizeof(arg));
    param_1->vt->fn24(param_1, &arg);
}
