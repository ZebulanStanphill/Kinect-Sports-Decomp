typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Vec_82510F40 {
    __forceinline Vec_82510F40() {}
    __forceinline Vec_82510F40(const Vec_82510F40 &o) { v = o.v; }
    __vector4 v;
};

typedef struct Skel_82510F40 {
    char pad0[0x44];
    int base;
} Skel_82510F40;

typedef struct Model_82510F40 {
    char pad0[0x4c];
    Skel_82510F40 *skel;
    Vec_82510F40 position;
    char pad60[0xf0 - 0x60];
    char boneData[0x8c0 - 0xf0];
    int *bones;
} Model_82510F40;

typedef struct Self_82510F40 {
    char pad0[0x8];
    Model_82510F40 *model;
} Self_82510F40;

extern "C" void *fn_825932A8(Model_82510F40 *model, unsigned short id);
extern "C" void fn_82574340(void *node, char *boneData, int bone, Vec_82510F40 *out);
extern "C" void fn_8255E0B0(Model_82510F40 *model, short index, Vec_82510F40 *out);

static __forceinline int RootBone_82510F40(Model_82510F40 *model)
{
    if (model->skel == 0) return 0;
    if (model->bones == 0) return 0;
    return model->bones[model->skel->base + 0x20];
}

extern "C" Vec_82510F40 fn_82510F40(Self_82510F40 *self, unsigned short id, short index)
{
    Vec_82510F40 v;
    void *node;

    if (id != 0) {
        node = fn_825932A8(self->model, id);
        fn_82574340(node, self->model->boneData, RootBone_82510F40(self->model), &v);
        return v;
    }
    if (index >= 0) {
        fn_8255E0B0(self->model, index, &v);
        return v;
    }
    return self->model->position;
}
