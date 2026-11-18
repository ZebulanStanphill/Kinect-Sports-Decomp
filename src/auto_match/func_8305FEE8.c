typedef struct Vertex_8305FEE8 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vertex_8305FEE8;

typedef struct Mesh_8305FEE8 {
    Vertex_8305FEE8 *vertices; /* 0x00 */
    char pad4[0x14];
    int vertexCount; /* 0x18 */
} Mesh_8305FEE8;

extern double fn_82F68918(double value); /* floor */
extern double fn_82F6B2A8(double value); /* ceil */

void fn_8305FEE8(Mesh_8305FEE8 *mesh, float step)
{
    Mesh_8305FEE8 *self = mesh;
    float *components[3];
    float inverse;
    float scaled;
    float rounded;
    Vertex_8305FEE8 *vertex;
    int i;
    int j;

    for (i = 0; i < self->vertexCount; i++) {
        inverse = 1.0f / step;
        vertex = &self->vertices[i];
        components[0] = &vertex->x;
        components[1] = &vertex->y;
        components[2] = &vertex->z;
        for (j = 0; j < 3; j++) {
            scaled = *components[j] * inverse;
            rounded = (float)fn_82F68918(scaled);
            if (scaled - rounded >= 0.5f) {
                rounded = (float)fn_82F6B2A8(scaled);
            }
            *components[j] = rounded * step;
        }
    }
}
