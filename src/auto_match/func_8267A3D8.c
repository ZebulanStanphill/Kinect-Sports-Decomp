typedef struct Buffer_8267A3D8 {
    char pad0[8];
    int size;               /* 0x08 */
} Buffer_8267A3D8;

typedef struct Stream_8267A3D8 {
    char pad0[8];
    Buffer_8267A3D8 *buffer;    /* 0x08 */
    int pos;                    /* 0x0c */
} Stream_8267A3D8;

int fn_8267A3D8(Stream_8267A3D8 *self, int offset, unsigned int origin)
{
    switch (origin) {
    case 0:
        self->pos = offset;
        break;
    case 1:
        self->pos += offset;
        break;
    case 2:
        self->pos = self->buffer->size - self->pos;
        break;
    }
    return self->pos;
}
