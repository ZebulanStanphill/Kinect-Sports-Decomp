typedef struct IUnknown_82F38718 IUnknown_82F38718;
typedef struct IUnknownVt_82F38718 {
    long (*QueryInterface)(IUnknown_82F38718 *self, void *iid, void **out);
    unsigned long (*AddRef)(IUnknown_82F38718 *self);
} IUnknownVt_82F38718;
struct IUnknown_82F38718 { IUnknownVt_82F38718 *vt; };

typedef struct Obj_82F38718 { int pad0; int pad4; char items[4]; } Obj_82F38718;

extern long fn_82F382F0(Obj_82F38718 *self, int a, int b, unsigned int *index);
extern void fn_82F377E8(void *items, unsigned int index, IUnknown_82F38718 ***it);

long fn_82F38718(Obj_82F38718 *self, int a, int b, IUnknown_82F38718 **out)
{
    long hr;
    unsigned int index;
    IUnknown_82F38718 **it;

    if (out == 0) {
        return 0x80070057;
    }
    hr = fn_82F382F0(self, a, b, &index);
    if (hr >= 0) {
        fn_82F377E8(self->items, index, &it);
        if ((*out = *it) != 0) {
            (*out)->vt->AddRef(*out);
        } else {
            hr = 0x8000ffff;
        }
    } else {
        *out = 0;
    }
    return hr;
}
