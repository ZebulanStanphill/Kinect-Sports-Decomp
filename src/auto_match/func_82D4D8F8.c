typedef struct Vec4_82D4D8F8 {
    float v[4];
} Vec4_82D4D8F8;

typedef struct Triangle_82D4D8F8 {
    int a;
    int b;
    int c;
    int material;
} Triangle_82D4D8F8;

typedef struct Mesh_82D4D8F8 {
    char pad0[0x8];
    Vec4_82D4D8F8 *vertices;
    char pad1[0x8];
    Triangle_82D4D8F8 *triangles;
    int numTriangles;
} Mesh_82D4D8F8;

typedef struct Result_82D4D8F8 {
    char ok;
} Result_82D4D8F8;

extern float lbl_83182A98;
extern Result_82D4D8F8 *fn_82D6F590(Result_82D4D8F8 *out, Vec4_82D4D8F8 *v0,
                                    Vec4_82D4D8F8 *v1, Vec4_82D4D8F8 *v2,
                                    float tolerance);

int fn_82D4D8F8(Mesh_82D4D8F8 *mesh, int start)
{
    int i;
    for (i = start + 1; i < mesh->numTriangles; i++) {
        Result_82D4D8F8 res;
        Vec4_82D4D8F8 *verts = mesh->vertices;
        if (fn_82D6F590(&res, &verts[mesh->triangles[i].a], &verts[mesh->triangles[i].b], &verts[mesh->triangles[i].c], lbl_83182A98)->ok == 0) {
            return i;
        }
    }
    return -1;
}
