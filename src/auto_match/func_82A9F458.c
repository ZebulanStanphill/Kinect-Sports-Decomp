typedef struct {
    unsigned int bits;
    int handle;
    unsigned int a;
    unsigned int b;
} entry_82A9F458;

typedef struct {
    entry_82A9F458 *data;
    unsigned int size;
    unsigned int capacity;
} vec_82A9F458;

typedef struct {
    unsigned char pad[0x48];
    vec_82A9F458 *entries;
    unsigned char pad4c[0x14];
    int dev;
    unsigned char pad64[0x2c];
    int hr;
} obj_82A9F458;

typedef struct {
    unsigned char pad[0x18];
    int key;
} info_82A9F458;

typedef struct {
    unsigned char pad[0x14];
    info_82A9F458 *info;
} src_82A9F458;

extern void fn_82A9A278(vec_82A9F458 *v, unsigned int n, int *hr);
extern unsigned int fn_82A9ECB8(obj_82A9F458 *self, int key);
extern int fn_82958638(int dev, int arg, int a, int b, int *out);

void fn_82A9F458(obj_82A9F458 *param_1, unsigned int index, src_82A9F458 *src, int arg,
                 int unused, unsigned int a, unsigned int b)
{
    int *hr = &param_1->hr;
    vec_82A9F458 *v;
    entry_82A9F458 *e;

    if (*hr < 0) {
        return;
    }
    v = param_1->entries;
    if (v->size <= index) {
        unsigned int n = index + 1;
        if (n > v->capacity) {
            fn_82A9A278(v, n, hr);
        }
        v->size = n;
        if (*hr < 0) {
            return;
        }
    }
    if (src != 0) {
        e = &param_1->entries->data[index];
        e->a = a;
        e->b = b;
        e->bits = fn_82A9ECB8(param_1, src->info->key) & 0x7fffffff | e->bits & 0x80000000;
        *hr = fn_82958638(param_1->dev, arg, 1, 0, &e->handle);
    }
}
