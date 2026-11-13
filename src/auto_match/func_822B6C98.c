typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Info_822B6C98 {
    char pad0[0x44];
    int slot;                      /* 0x44 */
} Info_822B6C98;

typedef struct Model_822B6C98 {
    char pad0[0x4c];
    Info_822B6C98 *info;           /* 0x4c */
    char pad50[0x870];
    void **parts;                  /* 0x8c0 */
} Model_822B6C98;

typedef struct Source_822B6C98 {
    char pad0[0x14];
    Model_822B6C98 *model;         /* 0x14 */
} Source_822B6C98;

extern void fn_8255E138(Model_822B6C98 *model, int index, __vector4 *out);

__vector4 *fn_822B6C98(__vector4 *out, Source_822B6C98 *source, int index)
{
    Model_822B6C98 *model = source->model;
    Info_822B6C98 *info = model->info;
    __vector4 result;

    result = __VMXGetReg(77);
    if (info != 0 && model->parts != 0 && model->parts[info->slot + 0x20] != 0) {
        fn_8255E138(model, index, &result);
    }
    *out = result;
    return out;
}
