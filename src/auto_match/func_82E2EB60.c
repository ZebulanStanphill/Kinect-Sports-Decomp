typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*fn0)(Obj *);
    void (*AddRef)(Obj *);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

extern int fn_82E2E068(void *list, Obj *item, int flag);
extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);

int fn_82E2EB60(char *self, Obj *item)
{
    int hr;

    if (item == 0) {
        return 0x80070057;
    }
    hr = 0;
    fn_82E50CB8(self + 0x54);
    if (fn_82E2E068(self + 0x16c, item, 0) == 0) {
        hr = 0x8007000e;
    } else {
        item->vtbl->AddRef(item);
    }
    fn_82E50F10(self + 0x54);
    return hr;
}
