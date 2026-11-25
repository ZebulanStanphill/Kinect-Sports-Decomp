typedef struct Vec3_8305E188 {
    float x;
    float y;
    float z;
} Vec3_8305E188;

extern "C" Vec3_8305E188 *fn_8305F7A0(void *points, int index);

struct Polygon_8305E188 {
    char pad0[0x28];
    void *points; /* 0x28 */
    int *indices; /* 0x2c */
    int count;    /* 0x30 */

    __forceinline Vec3_8305E188 *GetVertex(int i)
    {
        return fn_8305F7A0(points, indices[i]);
    }

    int ComputeNormal(Vec3_8305E188 *normal);
};

extern "C" int fn_82810380(const Vec3_8305E188 *a, const Vec3_8305E188 *b, float tolerance);
extern "C" void fn_82810328(const Vec3_8305E188 *a, const Vec3_8305E188 *b, Vec3_8305E188 *out);
extern "C" void fn_82810B78(const Vec3_8305E188 *vector, Vec3_8305E188 *out);
extern "C" float fn_82810280(const Vec3_8305E188 *first, const Vec3_8305E188 *second);
extern "C" float fn_82809CB0(float v);
extern "C" void fn_82810240(const Vec3_8305E188 *first, const Vec3_8305E188 *second, Vec3_8305E188 *out);
extern "C" void fn_82810530(const Vec3_8305E188 *v, Vec3_8305E188 *out);

int Polygon_8305E188::ComputeNormal(Vec3_8305E188 *normal)
{
    Vec3_8305E188 start;
    Vec3_8305E188 end;
    Vec3_8305E188 side;
    Vec3_8305E188 edges[2];
    int numEdges;
    int next;
    int i;

    numEdges = 0;
    for (i = 0; i < count; i++) {
        if (numEdges >= 2) {
            break;
        }
        next = i + 1 != count ? i + 1 : 0;
        start = *GetVertex(i);
        end = *GetVertex(next);
        if (fn_82810380(&start, &end, 1e-05f) == 0) {
            fn_82810328(&end, &start, &edges[numEdges]);
            fn_82810B78(&edges[numEdges], &edges[numEdges]);
            if (numEdges != 0 && fn_82809CB0(fn_82810280(&edges[0], &edges[1])) >= 0.99999f) {
                continue;
            }
            numEdges++;
        }
    }
    if (numEdges < 2) {
        return 0;
    }
    fn_82810240(&edges[0], &edges[1], normal);
    fn_82810B78(normal, normal);
    fn_82810240(normal, &edges[0], &side);
    if (fn_82810280(&side, &edges[1]) < 0.0f) {
        fn_82810530(normal, normal);
    }
    return 1;
}
