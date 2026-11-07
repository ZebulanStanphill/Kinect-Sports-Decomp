struct Poly_8285D6E8;
struct List_8285D6E8;
struct Plane_8285D6E8 {
    char data[0x20];
};
struct Vec3_8285D6E8 {
    float x, y, z;
};
struct Vec4_8285D6E8 {
    float x, y, z, w;
};

extern "C" {
void fn_83061508(List_8285D6E8 *l);
void fn_83061F30(List_8285D6E8 *l);
void fn_83060570(List_8285D6E8 *l, Vec3_8285D6E8 *v);
void fn_8305F2E8(Poly_8285D6E8 *p);
void fn_8305F258(Poly_8285D6E8 *p);
void fn_8305D5F0(Poly_8285D6E8 *p);
void fn_8305E0F8(Poly_8285D6E8 *p, List_8285D6E8 *l);
void fn_8305EB60(Poly_8285D6E8 *p, int n);
void fn_8305D660(Poly_8285D6E8 *p, int a, int b);
void fn_83066690(Plane_8285D6E8 *out, float a, float b, float c, float d);
int fn_83066810(Plane_8285D6E8 *plane, Poly_8285D6E8 *p, float tol, int flags);
void fn_8305F320(Poly_8285D6E8 *out, Plane_8285D6E8 *plane, Poly_8285D6E8 *p, int flags, float tol);
int fn_8285D6E8(Vec4_8285D6E8 *planes, unsigned char numPlanes, Vec3_8285D6E8 *verts, unsigned short numVerts, float tol);
}

struct List_8285D6E8 {
    char data[0x30];
    List_8285D6E8() { fn_83061508(this); }
    ~List_8285D6E8() { fn_83061F30(this); }
};

struct Poly_8285D6E8 {
    char data[0x50];
    Poly_8285D6E8() { fn_8305F2E8(this); }
    ~Poly_8285D6E8() { fn_8305F258(this); }
};

int fn_8285D6E8(Vec4_8285D6E8 *planes, unsigned char numPlanes, Vec3_8285D6E8 *verts, unsigned short numVerts, float tol)
{
    int result = 2;
    List_8285D6E8 list;
    Poly_8285D6E8 poly;
    Plane_8285D6E8 plane;

    fn_8305D5F0(&poly);
    fn_8305E0F8(&poly, &list);
    fn_8305EB60(&poly, numVerts);
    for (unsigned short i = 0; i < numVerts; i++) {
        fn_83060570(&list, &verts[i]);
        fn_8305D660(&poly, i, i);
    }
    for (unsigned short j = 0; j < numPlanes; j++) {
        Vec4_8285D6E8 *p = &planes[j];
        fn_83066690(&plane, p->x, p->y, p->z, -p->w);
        int r = fn_83066810(&plane, &poly, tol, 0);
        if (r == 1) {
            return 0;
        }
        if (r == 3) {
            if (j >= numPlanes - 1) {
                return 1;
            }
            fn_8305F320(&poly, &plane, &poly, 0, tol);
            result = 1;
        }
    }
    return result;
}
