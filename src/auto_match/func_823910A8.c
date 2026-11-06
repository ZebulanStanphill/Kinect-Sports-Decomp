typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Ptr_823910A8 {
    void *ptr;
    void *rep;
} Ptr_823910A8;

typedef struct Sink_823910A8 Sink_823910A8;

typedef struct SinkVtbl_823910A8 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void (*set)(Sink_823910A8 *self, void *obj, void *value);
} SinkVtbl_823910A8;

struct Sink_823910A8 {
    SinkVtbl_823910A8 *vt;
};

typedef struct Self_823910A8 {
    char pad[0x38];
    int list[4];
    void *active;
    char pad4c[0x68 - 0x4c];
    Sink_823910A8 *s68;
    int pad6c;
    Sink_823910A8 *s70;
    int pad74;
    Sink_823910A8 *s78;
    int pad7c;
    Sink_823910A8 *s80;
    int pad84;
    Sink_823910A8 *s88;
} Self_823910A8;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_822D7FE0(void *mem);
extern void fn_822D79D8(Ptr_823910A8 *p, void *obj);
extern void fn_828E9D90(void *obj);
extern void fn_828E9D40(void *obj);
extern void fn_82236590(Self_823910A8 *self, void *obj, int *list);
extern void fn_828E2B28(Self_823910A8 *self, Ptr_823910A8 *p);
extern void fn_822315A0(void *rep);

void fn_823910A8(Self_823910A8 *param_1, __vector4 param_2, __vector4 param_3, __vector4 param_4,
                 float param_5, int param_6)
{
    void *mem;
    void *obj;
    Ptr_823910A8 p;

    mem = fn_8265C9E0(0x28);
    if (mem != 0) {
        obj = fn_822D7FE0(mem);
    } else {
        obj = 0;
    }
    p.ptr = 0;
    p.rep = 0;
    fn_822D79D8(&p, obj);
    param_1->s68->vt->set(param_1->s68, p.ptr, &param_2);
    param_1->s70->vt->set(param_1->s70, p.ptr, &param_3);
    param_1->s78->vt->set(param_1->s78, p.ptr, &param_4);
    param_1->s80->vt->set(param_1->s80, p.ptr, &param_5);
    param_1->s88->vt->set(param_1->s88, p.ptr, &param_6);
    if (param_1->active != 0) {
        fn_828E9D90(p.ptr);
        fn_828E9D40(p.ptr);
        fn_82236590(param_1, p.ptr, param_1->list);
    }
    fn_828E2B28(param_1, &p);
    if (p.rep != 0) {
        fn_822315A0(p.rep);
    }
}
