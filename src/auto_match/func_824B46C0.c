typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec_824B46C0 {
    __vector4 v;
} Vec_824B46C0;

typedef struct Entry_824B46C0 {
    Vec_824B46C0 pos;
    char pad10[0x40 - 0x10];
} Entry_824B46C0;

typedef struct Data_824B46C0 {
    char pad00[0x40];
    Entry_824B46C0 *entries;
} Data_824B46C0;

typedef struct Src_824B46C0 Src_824B46C0;
typedef struct SrcVt_824B46C0 {
    void (*f0)(Src_824B46C0 *self, int *a, int *id);
    void (*f4)(Src_824B46C0 *self, int id, Data_824B46C0 **out);
} SrcVt_824B46C0;
struct Src_824B46C0 {
    SrcVt_824B46C0 *vt;
};

Vec_824B46C0 fn_824B46C0(Src_824B46C0 *src, int index)
{
    int id;
    Data_824B46C0 *data;
    int a[2];
    Vec_824B46C0 r;

    src->vt->f0(src, a, &id);
    src->vt->f4(src, id, &data);
    r.v = data->entries[index].pos.v;
    return r;
}
