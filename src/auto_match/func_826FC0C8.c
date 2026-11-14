typedef struct Rc_826FC0C8 {
    int count;
    void *owner;
} Rc_826FC0C8;

typedef struct Link_826FC0C8 {
    Rc_826FC0C8 *ref;
    char list[0x1c];
    unsigned char empty : 1;
    unsigned char wasEmpty : 1;
} Link_826FC0C8;

extern void fn_826F8818(void *list, Link_826FC0C8 *link);
extern Rc_826FC0C8 *fn_8267C5B0(void *target);
extern void fn_8267BE38(Rc_826FC0C8 *r);

static __forceinline void Release(Rc_826FC0C8 *r)
{
    if (r != 0 && --r->count == 0) {
        fn_8267BE38(r);
    }
}

void fn_826FC0C8(Link_826FC0C8 *self, void *target)
{
    fn_826F8818(self->list, self);
    self->wasEmpty = self->empty;
    if (target != 0) {
        Rc_826FC0C8 *r = fn_8267C5B0(target);
        Release(self->ref);
        self->ref = r;
    } else {
        Release(self->ref);
        self->ref = 0;
    }
    self->empty = target == 0;
}
