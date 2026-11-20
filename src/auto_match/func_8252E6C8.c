typedef struct Device_82623D60 {
    char pad0[0x30];
    int vertexCursor; /* 0x30 */
    char pad34[0x3554 - 0x34];
    int vertexStart; /* 0x3554 */
} Device_82623D60;

typedef struct Vertex_8252E6C8 {
    float x;
    float y;
    float u;
    float v;
} Vertex_8252E6C8;

extern Vertex_8252E6C8 *fn_8263FB88(Device_82623D60 *device, int primitive, int count, int stride);

static __forceinline int BeginVertices(Device_82623D60 *device, int primitive, int count, int stride,
                                       Vertex_8252E6C8 **vertices)
{
    Vertex_8252E6C8 *data = fn_8263FB88(device, primitive, count, stride);

    *vertices = data;
    return data != 0 ? 0 : 0x8007000E;
}

static __forceinline void EndVertices(Device_82623D60 *device)
{
    device->vertexCursor = device->vertexStart;
}

/* Draws one triangle covering a width x height rectangle, texture coordinates 0 to 2. */
void fn_8252E6C8(Device_82623D60 *device, int width, int height)
{
    Vertex_8252E6C8 *tri;

    if (BeginVertices(device, 4, 3, sizeof(Vertex_8252E6C8), &tri) >= 0) {
        tri[0].x = 0.0f;
        tri[0].y = 0.0f;
        tri[0].u = 0.0f;
        tri[0].v = 0.0f;
        tri[1].x = (float)width * 2.0f;
        tri[1].y = 0.0f;
        tri[1].u = 2.0f;
        tri[1].v = 0.0f;
        tri[2].x = 0.0f;
        tri[2].y = (float)height * 2.0f;
        tri[2].u = 0.0f;
        tri[2].v = 2.0f;
        EndVertices(device);
    }
}
