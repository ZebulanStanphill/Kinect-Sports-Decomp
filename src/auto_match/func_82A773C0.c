typedef struct Obj_82A773C0 Obj_82A773C0;

typedef struct Vtbl_82A773C0 {
    int (*QueryValue)(Obj_82A773C0 *self, const char *name, void *out);
} Vtbl_82A773C0;

struct Obj_82A773C0 {
    Vtbl_82A773C0 *vt;
};

extern char lbl_82089748[];
extern char lbl_82089DB0[];

int fn_82A773C0(char *self, Obj_82A773C0 *src)
{
    int hr;

    hr = src->vt->QueryValue(src, lbl_82089748, self + 0xfc);
    if (hr >= 0) {
        hr = src->vt->QueryValue(src, lbl_82089DB0, self + 0x100);
        hr = (hr != (int)0x80004002) ? hr : 0;
    }
    return hr;
}
