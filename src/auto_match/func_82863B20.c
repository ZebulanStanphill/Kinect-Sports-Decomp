typedef struct { float v[3]; } Vec3_82863B20;
typedef struct {
    unsigned int f0;
    unsigned int kind;
    float scale;
    int rest[7];
} Glob_82863B20;

typedef struct Mesh_82863B20 {
    int f0;
    void *data;
    unsigned short count;
} Mesh_82863B20;

extern Glob_82863B20 lbl_832116B4;
extern void fn_82862238(void *data, unsigned short count, unsigned int kind, float scale, int idx, Vec3_82863B20 *out);
extern void fn_828106A0(Vec3_82863B20 *v);
extern void fn_82810208(const Vec3_82863B20 *a, const Vec3_82863B20 *b, Vec3_82863B20 *out);
extern float fn_8280A5D8(float v);
extern void fn_828102A8(const Vec3_82863B20 *v, Vec3_82863B20 *out, float s);

void fn_82863B20(Mesh_82863B20 *mesh, Vec3_82863B20 *out)
{
    Vec3_82863B20 p;
    int i;
    float n;
    fn_828106A0(out);
    for (i = 0; i < mesh->count; i++) {
        fn_82862238(mesh->data, mesh->count, lbl_832116B4.kind, lbl_832116B4.scale, i, &p);
        fn_82810208(out, &p, out);
    }
    n = mesh->count;
    fn_828102A8(out, out, fn_8280A5D8(n));
}
