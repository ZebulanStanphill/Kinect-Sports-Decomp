typedef struct Inner_82D49CD8 Inner_82D49CD8;

typedef struct {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotC;
    void *slot10;
    void *slot14;
    int (*read)(Inner_82D49CD8 *self, int arg, int size);
} InnerVtbl_82D49CD8;

struct Inner_82D49CD8 {
    InnerVtbl_82D49CD8 *vt;
};

typedef struct {
    char pad0[0x18];
    Inner_82D49CD8 *inner;
    int count;
    char pad20[0x10];
    char buf[0x30];
} Self_82D49CD8;

int fn_82D49CD8(Self_82D49CD8 *s, int arg, int size)
{
    int avail = size - 0x30;
    int r = s->inner->vt->read(s->inner, arg, avail);
    if (r < 0) {
        return -1;
    }
    if (r > avail) {
        return -1;
    }
    if (s->inner == (Inner_82D49CD8 *)s->buf) {
        s->count = 0;
        return r + 0x30;
    }
    s->count = r;
    return 0x30;
}
