typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvsl(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vperm(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vupkd3d(__vector4 v, int type);

typedef struct Key_8255EDD0 {
    char rotation[0xc];
    unsigned short translation[4];  /* 0x0c, half4 */
    unsigned short scale[4];        /* 0x14, half4 */
} Key_8255EDD0;

typedef struct Pose_8255EDD0 {
    Key_8255EDD0 *begin;
    Key_8255EDD0 *end;
    char pad8[0x8];
    unsigned char weights[1];       /* 0x10 */
} Pose_8255EDD0;

typedef struct Bone_8255EDD0 {
    __vector4 rotation;
    __vector4 translation;
    __vector4 scale;
} Bone_8255EDD0;

typedef struct Skeleton_8255EDD0 {
    char pad0[0x2e];
    unsigned short base;            /* 0x2e */
    char pad30[0x2];
    unsigned short rows;            /* 0x32 */
    char pad34[0x50];
    float *weights;                 /* 0x84 */
} Skeleton_8255EDD0;

int fn_8255EF20(void *self);
void fn_8255EFC8(void *self, int lock);
Bone_8255EDD0 *fn_827F3BA8(void *self);
Skeleton_8255EDD0 *fn_827F3C20(void *self);
unsigned int fn_827FA1E8(Skeleton_8255EDD0 *skeleton);
__vector4 *fn_8255EAC0(__vector4 *out, const Key_8255EDD0 *key);

static __forceinline __vector4 LoadHalf4(const void *p)
{
    __vector4 permute, lo, hi;
    permute = __lvsl(p, 0);
    hi = *(const __vector4 *)((const char *)p + 7);
    lo = *(const __vector4 *)p;
    permute = __vsldoi(permute, permute, 8);
    return __vupkd3d(__vperm(lo, hi, permute), 5);
}

static __forceinline const unsigned int *Min(const unsigned int *a, const unsigned int *b)
{
    return *b < *a ? b : a;
}

void fn_8255EDD0(void *self, Pose_8255EDD0 *pose)
{
    int lock = fn_8255EF20(self);
    Bone_8255EDD0 *bone = fn_827F3BA8(self);
    Key_8255EDD0 *key;
    Key_8255EDD0 *end;
    Skeleton_8255EDD0 *skeleton;
    float *out;
    unsigned int n;
    unsigned int size;
    unsigned int count;
    unsigned int i;

    for (key = pose->begin, end = pose->end; key != end; key++, bone++) {
        __vector4 t;
        bone->rotation = *fn_8255EAC0(&t, key);
        bone->translation = LoadHalf4(key->translation);
        bone->scale = LoadHalf4(key->scale);
    }
    skeleton = fn_827F3C20(self);
    out = &skeleton->weights[skeleton->rows * 12 + skeleton->base];
    n = fn_827FA1E8(skeleton);
    size = pose->end - pose->begin;
    count = *Min(&size, &n);
    for (i = 0; i < count; i++)
        out[i] = (float)pose->weights[i];
    fn_8255EFC8(self, lock);
}
