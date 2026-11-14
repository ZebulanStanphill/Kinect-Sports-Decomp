typedef struct Buffer_8267A390 {
    int pad0;
    char *data;
    unsigned int size;
} Buffer_8267A390;

typedef struct Stream_8267A390 {
    char pad0[8];
    Buffer_8267A390 *buffer;
    unsigned int pos;
} Stream_8267A390;

int fn_8267A390(Stream_8267A390 *self, int count)
{
    unsigned int pos = self->pos;
    if (pos + count > self->buffer->size)
        count = self->buffer->size - pos;
    self->pos = pos + count;
    return count;
}
