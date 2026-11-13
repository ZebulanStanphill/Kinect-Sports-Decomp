typedef struct Arr_82E570B0 {
    int items[0x1a];
    unsigned int count;    /* 0x68 */
} Arr_82E570B0;

typedef struct Obj_82E570B0 {
    int pad0[2];
    int lock[15];          /* 0x08 */
    Arr_82E570B0 arr;      /* 0x44 */
} Obj_82E570B0;

extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern int fn_82E56C80(Arr_82E570B0 *a, unsigned int idx);

static __forceinline int Arr_removeRange_82E570B0(Arr_82E570B0 *a, unsigned int idx, unsigned int n)
{
    unsigned int i;
    int hr;
    if (idx + n > a->count)
        return 0;
    for (i = 0; i < n; i++) {
        hr = fn_82E56C80(a, idx);
        if (hr < 0)
            break;
        a->count--;
    }
    return hr >= 0;
}

int fn_82E570B0(Obj_82E570B0 *self, unsigned int idx)
{
    int hr;
    void *lock = self->lock;
    fn_82E50CB8(lock);
    if (self->arr.count <= idx)
        hr = 0x80070057;
    else if (!Arr_removeRange_82E570B0(&self->arr, idx, 1))
        hr = 0x8000FFFF;
    else
        hr = 0;
    fn_82E50F10(lock);
    return hr;
}
