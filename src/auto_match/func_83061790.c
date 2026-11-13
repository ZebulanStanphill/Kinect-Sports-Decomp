typedef struct Vertex_83061790 {
    float v[6];
} Vertex_83061790;

typedef struct Mesh_83061790 {
    char pad[0x2c];
    Vertex_83061790 *verts;
} Mesh_83061790;

extern int fn_8305D680(void *poly);
extern int fn_8305D670(void *poly, int i);
extern void fn_83061680(Vertex_83061790 *a, Vertex_83061790 *b, void *poly);

void fn_83061790(Mesh_83061790 *self, void *poly)
{
    int i;

    for (i = 0; i < fn_8305D680(poly); i++) {
        int next = i == fn_8305D680(poly) - 1 ? 0 : i + 1;
        fn_83061680(&self->verts[fn_8305D670(poly, i)], &self->verts[fn_8305D670(poly, next)], poly);
    }
}
