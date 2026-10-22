typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *slots[0x34 / 4];
    int (*method)(Obj *self, void *arg);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

extern void fn_82E7E7E0(void *p);
extern void fn_82E7F0F8(void *p);

int fn_82EF4718(Obj *self, void *arg)
{
    int hr;

    if (arg == 0) {
        hr = 0x80004003;
    } else {
        fn_82E7F0F8(arg);
        hr = self->vtbl->method(self, arg);
        if (hr < 0) {
            fn_82E7E7E0(arg);
        }
    }
    return hr;
}
