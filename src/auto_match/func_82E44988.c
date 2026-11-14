typedef struct Unk_82E44988 Unk_82E44988;
typedef struct UnkVt_82E44988 {
    int (*QueryInterface)(Unk_82E44988 *self, const void *iid, void **out);
    unsigned int (*AddRef)(Unk_82E44988 *self);
    unsigned int (*Release)(Unk_82E44988 *self);
} UnkVt_82E44988;
struct Unk_82E44988 { UnkVt_82E44988 *vt; };

typedef struct Obj_82E44988 {
    Unk_82E44988 base;
    Unk_82E44988 iface;
    Unk_82E44988 other;
} Obj_82E44988;

extern char lbl_82153E5C[];
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern Unk_82E44988 *fn_82E7E500(void *mem, Obj_82E44988 *owner, unsigned short index);

#define OBJ(p) ((Obj_82E44988 *)((char *)(p) - 4))

int fn_82E44988(Unk_82E44988 *self, int unused, unsigned int index, unsigned int flags, void **out)
{
    Unk_82E44988 *item;
    void *mem;
    int hr = 0;

    if (out == 0) { hr = 0x80070057; goto done; }
    *out = 0;
    if (flags != 0) { hr = 0x80070057; goto done; }
    if (index > 9999) { hr = 0x80070057; goto done; }
    if (index == 0) {
        *out = OBJ(self) ? &OBJ(self)->other : 0;
        OBJ(self)->base.vt->AddRef(&OBJ(self)->base);
    } else {
        mem = fn_82E50BE8(0x14, 0, 0, 0, 0);
        item = mem ? fn_82E7E500(mem, OBJ(self), (unsigned short)index) : 0;
        if (item == 0) {
            hr = 0x8007000E;
            goto done;
        }
        hr = item->vt->QueryInterface(item, lbl_82153E5C, out);
        item->vt->Release(item);
    }
done:
    return hr;
}
