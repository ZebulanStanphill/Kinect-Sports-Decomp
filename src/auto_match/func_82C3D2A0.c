typedef struct Surface_82C3D2A0 {
    char pad0[0x20];
    unsigned int height; /* 0x20 */
    unsigned int pitch;  /* 0x24 */
    char pad28[0x1c];
    void *decoder;              /* 0x44 */
    unsigned __int64 timestamp; /* 0x48 */
    char pad50[0x1c];
    unsigned int frameCount; /* 0x6c */
} Surface_82C3D2A0;

typedef struct Reader_82C3D2A0 {
    char pad0[0x20];
    Surface_82C3D2A0 *surface; /* 0x20 */
} Reader_82C3D2A0;

extern int fn_82C4D608(void *decoder, int mode, char *luma, char *chromaU, char *chromaV, unsigned int height,
                       unsigned int chromaHeight, unsigned int chromaPitch);
extern int fn_82C3CD98(int status);

int fn_82C3D2A0(Reader_82C3D2A0 *self, char *buffer, unsigned int frame, unsigned int *outFrame,
                unsigned int *outSkipped, unsigned __int64 *outTimestamp, int *outValid)
{
    Surface_82C3D2A0 *surface = self->surface;
    unsigned int pitch;
    unsigned int height;
    unsigned int halfHeight;
    int status;

    if (surface->frameCount > frame) {
        return 0x80500006;
    }
    pitch = surface->pitch;
    if ((pitch & 1) != 0) {
        return 0x80500006;
    }
    height = surface->height;
    halfHeight = height >> 1;
    status = fn_82C4D608(surface->decoder, 1, buffer, buffer + surface->pitch * height,
                         buffer + surface->pitch * height + ((surface->pitch * halfHeight) >> 1), height,
                         halfHeight, halfHeight);
    switch (status) {
    case 0:
        *outFrame = surface->frameCount;
        *outSkipped = 0;
        break;
    case 2:
        status = 0;
        *outFrame = 0;
        *outSkipped = 0;
        break;
    }
    *outTimestamp = surface->timestamp;
    if (outValid != 0) {
        *outValid = 1;
    }
    return fn_82C3CD98(status);
}
