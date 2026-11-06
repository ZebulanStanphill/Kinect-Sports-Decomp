typedef struct Inner_826E6A78 {
    char pad0[0x48];
    int f48;
    int pos;
} Inner_826E6A78;

typedef struct Self_826E6A78 Self_826E6A78;
typedef struct SelfVt_826E6A78 {
    void *slots[14];
    int (*seek)(Self_826E6A78 *self, int offset, int origin);
} SelfVt_826E6A78;

struct Self_826E6A78 {
    SelfVt_826E6A78 *vt;
    int pad4;
    Inner_826E6A78 *inner;
};

int fn_826E6A78(Self_826E6A78 *self)
{
    Inner_826E6A78 *inner = self->inner;
    int pos;
    int size;

    if (inner == 0) {
        return 0;
    }
    if (inner->f48 != 0) {
        return 0;
    }
    pos = inner->pos;
    size = self->vt->seek(self, 0, 2);
    self->vt->seek(self, pos, 0);
    return size;
}
