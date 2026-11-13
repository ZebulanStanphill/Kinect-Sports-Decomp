typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __vspltw(__vector4 v, unsigned int i);
void __debugbreak(void);

typedef struct Aabb_82D2CF18 {
    __vector4 min;
    __vector4 max;
} Aabb_82D2CF18;

typedef struct Error_82D2CF18 Error_82D2CF18;
struct Error_82D2CF18 {
    struct {
        void *slots[3];
        int (*message)(Error_82D2CF18 *e, int kind, unsigned int id, const char *text, const char *file, int line);
    } *vt;
};
typedef struct { unsigned char d[16]; } Stream_82D2CF18;
extern Error_82D2CF18 *lbl_8323B464;
extern void fn_82CEE578(Stream_82D2CF18 *s, char *buf, int size);
extern Stream_82D2CF18 *fn_82CEDB38(Stream_82D2CF18 *s, const char *text);
extern void fn_82CED958(Stream_82D2CF18 *s);

static __forceinline void SetAll_82D2CF18(__vector4 *v, float x)
{
    v->vector4_f32[0] = x;
    *v = __vspltw(*v, 0);
}

Aabb_82D2CF18 *fn_82D2CF18(Aabb_82D2CF18 *out)
{
    Stream_82D2CF18 s;
    char buf[0x200];
    fn_82CEE578(&s, buf, 0x200);
    fn_82CEDB38(&s, "Unsupported operation");
    if (lbl_8323B464->vt->message(lbl_8323B464, 3, 0xb6c47b76, buf,
            "d:\\build\\20090926_024535\\Source\\Common/Internal/GeometryProcessing/Mesh/hkgpMesh.inl", 0x15a) != 0) {
        __debugbreak();
    }
    fn_82CED958(&s);
    SetAll_82D2CF18(&out->min, 3.40282e+38f);
    SetAll_82D2CF18(&out->max, -3.40282e+38f);
    return out;
}
