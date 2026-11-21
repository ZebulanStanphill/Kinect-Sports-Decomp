typedef struct Buffer_825D95F0 {
    char pad0[0x18];
    unsigned int address; /* 0x18 */
    unsigned int size;    /* 0x1c */
} Buffer_825D95F0;

typedef struct Mesh_825D95F0 {
    char pad0[0x20];
    unsigned int format; /* 0x20 */
    int pad24;
    unsigned int vertexCount; /* 0x28 */
    int pad2c[2];
    unsigned int extraCount; /* 0x34 */
    char pad38[0xfc];
    Buffer_825D95F0 *buffer; /* 0x134 */
    void *view;              /* 0x138 */
    void *extra;             /* 0x13c */
    char pad140[0x80];
    unsigned char dirty; /* 0x1c0 */
} Mesh_825D95F0;

extern void *fn_82522D98(unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);
extern Buffer_825D95F0 *fn_82630040(unsigned int size, unsigned int align, int flags);
extern void *fn_8262F8D8(void *buffer, int type, int a, unsigned int address, int b, unsigned int base,
                         unsigned int size, int c, int flags);
extern void fn_8262FBD8(void *buffer, unsigned int address, int flags);
extern void fn_8262FEC8(void *buffer);

static __forceinline long CreateBuffer(unsigned int size, Buffer_825D95F0 **out)
{
    Buffer_825D95F0 *buffer = fn_82630040(size, 0, 0);

    *out = buffer;
    return buffer != 0 ? 0 : 0x8007000E;
}

void fn_825D95F0(Mesh_825D95F0 *mesh)
{
    unsigned int size;
    long hr;

    if (mesh->dirty == 0)
        return;
    switch (mesh->format) {
    case 0:
        size = mesh->vertexCount * 0x28;
        break;
    case 1:
        size = mesh->vertexCount * 0x20;
        break;
    case 2:
        size = mesh->vertexCount * 0x20;
        break;
    case 3:
        hr = CreateBuffer(mesh->vertexCount * 0x28, &mesh->buffer);
        if (hr < 0)
            return;
        mesh->extra = 0;
        goto map;
    default:
        return;
    }
    hr = CreateBuffer(size, &mesh->buffer);
    if (hr < 0)
        return;
    mesh->extra = fn_82522D98(mesh->extraCount * 0x58);
map:
    if (mesh->extra == 0) {
        fn_8262FEC8(mesh->buffer);
        mesh->buffer = 0;
        return;
    }
    mesh->view = fn_8262F8D8(mesh->buffer, 10, 0, mesh->buffer->address & ~3, 0, mesh->buffer->address & ~3,
                             mesh->buffer->size & 0x3fffffc, 0, 0x3000000);
    switch (mesh->format) {
    case 0:
        memset(mesh->view, 0, mesh->vertexCount * 0x28);
        break;
    case 1:
        memset(mesh->view, 0, mesh->vertexCount * 0x20);
        break;
    case 2:
        memset(mesh->view, 0, mesh->vertexCount * 0x20);
        break;
    case 3:
        memset(mesh->view, 0, mesh->vertexCount * 0x28);
        break;
    }
    fn_8262FBD8(mesh->buffer, mesh->buffer->address & ~3, 0);
    mesh->dirty = 0;
}
