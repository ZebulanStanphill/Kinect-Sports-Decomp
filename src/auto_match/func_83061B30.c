typedef struct Vertex_83061B30 {
    float v[6];
} Vertex_83061B30;

typedef struct Mesh_83061B30 {
    char pad[0x2c];
    Vertex_83061B30 *verts;
} Mesh_83061B30;

extern int fn_8305D680(void *poly);
extern int fn_8305D670(void *poly, int i);
extern void fn_83061A40(Vertex_83061B30 *a, Vertex_83061B30 *b, void *poly);

void fn_83061B30(Mesh_83061B30 *self, void *poly)
{
    int i;

    for (i = 0; i < fn_8305D680(poly); i++) {
        int next = i == fn_8305D680(poly) - 1 ? 0 : i + 1;
        fn_83061A40(&self->verts[fn_8305D670(poly, i)], &self->verts[fn_8305D670(poly, next)], poly);
    }
}
