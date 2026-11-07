typedef struct Base_82A42808 Base_82A42808;

typedef struct BaseVtbl_82A42808 {
    void *slot0[3];
    void *(*destroy)(Base_82A42808 *self, unsigned int flags);
} BaseVtbl_82A42808;

struct Base_82A42808 {
    BaseVtbl_82A42808 *vt;
};

typedef struct Obj_82A42808 {
    int unk0[4];
    Base_82A42808 base;
} Obj_82A42808;

extern char lbl_83219D50[];
extern void fn_82A3FE48(void *lock);
extern void fn_82A3FEE0(void *lock);
extern void *fn_82A3FF60(void *heap, unsigned int size, unsigned int tag, int flags);
extern Obj_82A42808 *fn_82A4BA58(void *mem);
extern int fn_82A4AB90(Obj_82A42808 *obj);
extern void fn_82A4F4E0(void *mem);

int fn_82A42808(Obj_82A42808 **out)
{
    int hr;
    void *mem;
    Obj_82A42808 *obj;

    fn_82A3FE48(lbl_83219D50);
    if (out == 0) {
        hr = 0x80004003;
    } else {
        mem = fn_82A3FF60(lbl_83219D50, 0x184, 0x20970006, 0);
        if (mem != 0) {
            obj = fn_82A4BA58(mem);
        } else {
            obj = 0;
        }
        if (obj == 0) {
            hr = 0x8007000e;
        } else {
            hr = fn_82A4AB90(obj);
            if (hr >= 0) {
                *out = obj;
            } else {
                fn_82A4F4E0(obj->base.vt->destroy(&obj->base, 0));
            }
        }
    }
    fn_82A3FEE0(lbl_83219D50);
    return hr;
}
