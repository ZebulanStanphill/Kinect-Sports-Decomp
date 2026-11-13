typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vertex_82D2A940 {
    char pad0[0x10];
    __vector4 position;            /* 0x10 */
} Vertex_82D2A940;

typedef struct Triangle_82D2A940 {
    char pad0[0x8];
    Vertex_82D2A940 *vertices[3];  /* 0x08 */
} Triangle_82D2A940;

typedef struct Obj_82D2A940 {
    int pad0;
    Triangle_82D2A940 *triangle;   /* 0x04 */
} Obj_82D2A940;

extern void fn_8307EBA0(const __vector4 *points, int count, void *out);

void *fn_82D2A940(void *out, Obj_82D2A940 *obj)
{
    __vector4 points[3];
    Triangle_82D2A940 *t = obj->triangle;

    points[0] = t->vertices[0]->position;
    points[1] = t->vertices[1]->position;
    points[2] = t->vertices[2]->position;
    fn_8307EBA0(points, 3, out);
    return out;
}
