typedef long HRESULT;

typedef struct {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;

typedef struct IThing IThing;

typedef struct {
    char pad0[0x40];
    int (*GetData)(IThing *self, const GUID *id, void **data, unsigned int *size);
    char pad44[0x3c];
    void (*Apply)(IThing *self, void *target);
} IThingVtbl;

struct IThing {
    IThingVtbl *vtbl;
};

extern const GUID lbl_8214C710;

extern HRESULT fn_82E2EBE8(void *target, void *data, unsigned int size);
extern void fn_82E4FE40(void *data);

HRESULT fn_82E30388(void *target, IThing *thing)
{
    HRESULT hr;
    void *data;
    unsigned int size;

    hr = 0;
    data = 0;
    size = 0;
    if (thing == 0) {
        hr = 0x80004003;
    } else {
        if (thing->vtbl->GetData(thing, &lbl_8214C710, &data, &size) != 0 ||
            (hr = fn_82E2EBE8(target, data, size)) >= 0) {
            thing->vtbl->Apply(thing, target);
        }
    }
    fn_82E4FE40(data);
    return hr;
}
