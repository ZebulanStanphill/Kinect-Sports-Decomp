typedef struct Stream_82CEB998 {
    char pad0[0xc];
    int pos;  /* 0xc */
    int size; /* 0x10 */
} Stream_82CEB998;

int fn_82CEB998(Stream_82CEB998 *self, int offset, unsigned int whence)
{
    int pos = -1;
    int result;

    switch (whence) {
    case 0:
        pos = offset;
        break;
    case 1:
        pos = self->pos + offset;
        break;
    case 2:
        pos = self->size - offset;
        break;
    }
    result = 0;
    if (pos < 0) {
        pos = 0;
        result = 1;
    } else if (pos > self->size) {
        pos = self->size;
        result = 1;
    }
    self->pos = pos;
    return result;
}
