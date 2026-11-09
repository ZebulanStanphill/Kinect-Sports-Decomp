typedef struct Inner_82D50B88 Inner_82D50B88;

typedef struct {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotC;
    void *slot10;
    void *slot14;
    int (*read)(Inner_82D50B88 *self, int arg, int size);
} InnerVtbl_82D50B88;

struct Inner_82D50B88 {
    InnerVtbl_82D50B88 *vt;
};

typedef struct {
    char pad0[0x14];
    Inner_82D50B88 *inner;
    int count;
    char pad20[0x54];
    char buf[0x70];
} Self_82D50B88;

int fn_82D50B88(Self_82D50B88 *s, int arg, int size)
{
    int avail = size - 0x70;
    int r = s->inner->vt->read(s->inner, arg, avail);
    if (r < 0) {
        return -1;
    }
    if (r > avail) {
        return -1;
    }
    if (s->inner == (Inner_82D50B88 *)s->buf) {
        s->count = 0;
        return r + 0x70;
    }
    s->count = r;
    return 0x70;
}
