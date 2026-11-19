typedef struct Device_82623D60 {
    char pad0[0x30];
    int vertexCursor; /* 0x30 */
    char pad34[0x3554 - 0x34];
    int vertexStart; /* 0x3554 */
} Device_82623D60;

typedef struct Vertex_82623D60 {
    float x;
    float y;
    float z;
    float u;
    float v;
} Vertex_82623D60;

extern Device_82623D60 *lbl_8320A898;

extern Vertex_82623D60 *fn_8263FB88(Device_82623D60 *device, int primitive, int count, int stride);

static __forceinline int BeginVertices(Device_82623D60 *device, int primitive, int count, int stride,
                                       Vertex_82623D60 **vertices)
{
    Vertex_82623D60 *data = fn_8263FB88(device, primitive, count, stride);

    *vertices = data;
    return data != 0 ? 0 : 0x8007000E;
}

static __forceinline void EndVertices(Device_82623D60 *device)
{
    device->vertexCursor = device->vertexStart;
}

/* Draws a quad from (-size[0], -size[1]) to (size[0], size[1]) with texture coordinates up to (u, v). */
void fn_82623D60(float u, float v, float *size)
{
    Vertex_82623D60 *quad;
    float right = size[0];
    float bottom = size[1];
    float left = -right;
    float top = -bottom;

    if (BeginVertices(lbl_8320A898, 0xd, 4, sizeof(Vertex_82623D60), &quad) >= 0) {
        quad[0].x = left;
        quad[0].y = top;
        quad[0].z = 0.0f;
        quad[0].u = 0.0f;
        quad[0].v = v;
        quad[1].x = right;
        quad[1].y = top;
        quad[1].z = 0.0f;
        quad[1].u = u;
        quad[1].v = v;
        quad[2].x = right;
        quad[2].y = bottom;
        quad[2].z = 0.0f;
        quad[2].u = u;
        quad[2].v = 0.0f;
        quad[3].x = left;
        quad[3].y = bottom;
        quad[3].z = 0.0f;
        quad[3].u = 0.0f;
        quad[3].v = 0.0f;
        EndVertices(lbl_8320A898);
    }
}
