typedef struct Src_82405B70 Src_82405B70;
typedef struct {
    void *s0;
    unsigned int (*f4)(Src_82405B70 *);
    unsigned int (*f8)(Src_82405B70 *);
} SrcVT_82405B70;
struct Src_82405B70 {
    SrcVT_82405B70 *vt;
};
typedef struct Handler_82405B70 Handler_82405B70;
typedef struct {
    void *s0, *s1;
    void (*f8)(Handler_82405B70 *, unsigned int *);
    void (*fc)(Handler_82405B70 *, unsigned int *);
} HandlerVT_82405B70;
struct Handler_82405B70 {
    HandlerVT_82405B70 *vt;
};
typedef struct {
    Handler_82405B70 *h;
    int pad;
} Entry_82405B70;
typedef struct {
    char pad0[0x14];
    Src_82405B70 *src;
    int state;
    Entry_82405B70 *entries;
    char pad1[0x30 - 0x20];
    int index;
} Obj_82405B70;

void fn_82405B70(Obj_82405B70 *self, unsigned int *id)
{
    if (self->state == 4) {
        Handler_82405B70 *h;
        if (*id == self->src->vt->f4(self->src)) {
            h = self->entries[self->index].h;
            h->vt->f8(h, id);
        } else {
            if (*id != self->src->vt->f8(self->src))
                return;
            h = self->entries[self->index].h;
            h->vt->fc(h, id);
        }
    }
}
