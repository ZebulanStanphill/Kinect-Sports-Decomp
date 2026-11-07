typedef struct Arr_82E556C8 {
    void **data;
    unsigned int count;
} Arr_82E556C8;

typedef struct Obj_82E556C8 {
    int pad0[2];
    int lock[19];          /* 0x08 .. 0x53 */
    Arr_82E556C8 arr;      /* 0x54 data, 0x58 count */
} Obj_82E556C8;

extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern void fn_82E55008(void *e, int flag);
extern int fn_82EE2F38(Arr_82E556C8 *a, unsigned int idx, int flag);

int fn_82E556C8(Obj_82E556C8 *p, unsigned int idx)
{
    Obj_82E556C8 *self = p;
    int hr = 0;
    void *lock = self->lock;
    void *e;

    fn_82E50CB8(lock);
    if (self->arr.count <= idx) {
        hr = 0x80070057;
    } else {
        Arr_82E556C8 *a = &self->arr;
        if (idx < a->count) {
            e = a->data[idx];
            if (e != 0) {
                fn_82E55008(e, 1);
                if (fn_82EE2F38(a, idx, 1) != 0)
                    goto done;
            }
        }
        hr = 0x8000FFFF;
    }
done:
    fn_82E50F10(lock);
    return hr;
}
