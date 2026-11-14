typedef struct Stream_826E9C58 Stream_826E9C58;

typedef struct StreamVtbl_826E9C58 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    int (*Tell)(Stream_826E9C58 *self);
} StreamVtbl_826E9C58;

struct Stream_826E9C58 {
    StreamVtbl_826E9C58 *vt;
    int pad4;
    int pad8;
    int padc;
    void *file;                     /* 0x10 */
};

extern int fn_82F6C060(void *file, int offset, int whence);

int fn_826E9C58(Stream_826E9C58 *self, int offset, unsigned int origin)
{
    int whence = 0;

    switch (origin) {
    case 0:
        whence = 0;
        break;
    case 1:
        whence = 1;
        break;
    case 2:
        whence = 2;
        break;
    }
    if (whence == 0 && offset == self->vt->Tell(self))
        return self->vt->Tell(self);
    if (fn_82F6C060(self->file, offset, whence) != 0)
        return -1;
    return self->vt->Tell(self);
}
