#define __lwsync() __emit(0x7C2004AC)
long _InterlockedDecrement(long volatile *addend);

typedef struct Lock_82E66AA8 {
    long state;
} Lock_82E66AA8;

typedef struct Item_82E66AA8 Item_82E66AA8;
typedef struct ItemVtbl_82E66AA8 {
    void *f0;
    void *f4;
    void *f8;
    int (*Invoke)(Item_82E66AA8 *self, int arg, int a, int b);
} ItemVtbl_82E66AA8;
struct Item_82E66AA8 {
    ItemVtbl_82E66AA8 *vt;
};

typedef struct Obj_82E66AA8 {
    char pad0[0x214];
    int count;
    char pad218[4];
    Lock_82E66AA8 lock;
} Obj_82E66AA8;

extern int fn_82E66440(Lock_82E66AA8 *lock);
extern Item_82E66AA8 *fn_82E66A50(Obj_82E66AA8 *self, int key);

int fn_82E66AA8(Obj_82E66AA8 *self, int key, int arg)
{
    int hr;
    Item_82E66AA8 *item;

    if (fn_82E66440(&self->lock) == 0) {
        return 0xc00d3e85;
    }
    if (self->count <= 0) {
        hr = 0xc00d3e85;
    } else {
        item = fn_82E66A50(self, key);
        if (item == 0) {
            hr = 0xc00d36bb;
        } else {
            hr = item->vt->Invoke(item, arg, 0, 0);
        }
    }
    __lwsync();
    _InterlockedDecrement(&self->lock.state);
    return hr;
}
