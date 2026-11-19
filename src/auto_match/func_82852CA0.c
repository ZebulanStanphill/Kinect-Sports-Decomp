typedef struct PrimitiveInfo_82852CA0 {
    unsigned int verticesPerPrimitive; /* 0x0 */
    unsigned int extraVertices;        /* 0x4 */
} PrimitiveInfo_82852CA0;

typedef struct Batch_82852CA0 {
    unsigned int pad0;          /* 0x00 */
    unsigned int primitiveType; /* 0x04 */
    unsigned int count;         /* 0x08 */
    void *vertexDeclaration;    /* 0x0c */
    unsigned int indexedMask;   /* 0x10 */
} Batch_82852CA0;

typedef struct Renderer_82852CA0 {
    unsigned int pad0; /* 0x000 */
    void *device;      /* 0x004 */
    unsigned char pad8[0xf4];
    unsigned int stream; /* 0x0fc */
    unsigned char pad100[0x1c];
    int wireframe; /* 0x11c */
} Renderer_82852CA0;

extern PrimitiveInfo_82852CA0 lbl_82195F48[19];

extern void fn_82639030(void *device, int solid);
extern void fn_8263A120(void *device, void *vertexDeclaration);
extern void fn_82640A98(void *device, unsigned int primitiveType, int start, int base, unsigned int count);
extern void fn_82640F10(void *device, unsigned int primitiveType, int start, int base, unsigned int count);

static __forceinline void Draw_82852CA0(void *device, unsigned int primitiveType, int start, int base,
                                        Batch_82852CA0 *batch, int indexed)
{
    if (indexed) {
        unsigned int count;
        if (primitiveType == 4) {
            count = batch->count / 3 * 3;
            fn_82640F10(device, primitiveType, start, base, count);
        } else {
            count = lbl_82195F48[primitiveType].verticesPerPrimitive * (batch->count - 2) +
                    lbl_82195F48[primitiveType].extraVertices;
            fn_82640F10(device, primitiveType, start, base, count);
        }
    } else {
        fn_82640A98(device, primitiveType, start, base, batch->count);
    }
}

void fn_82852CA0(Renderer_82852CA0 *self, Batch_82852CA0 *batch)
{
    fn_82639030(self->device, self->wireframe == 0);
    fn_8263A120(self->device, batch->vertexDeclaration);
    Draw_82852CA0(self->device, batch->primitiveType, 0, 0, batch, (1 << self->stream) & batch->indexedMask);
}
