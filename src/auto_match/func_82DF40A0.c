typedef struct Inner_82DF40A0 {
    int pad0;
    int pad4;
    int active;
} Inner_82DF40A0;

typedef struct Flags_82DF40A0 {
    unsigned char hi : 5;
    unsigned char enabled : 1;
    unsigned char lo : 2;
} Flags_82DF40A0;

typedef struct Obj_82DF40A0 {
    int pad0;
    int pad4;
    int link;
    Flags_82DF40A0 flags;
    unsigned char pad_d[3];
    Inner_82DF40A0 *inner;
} Obj_82DF40A0;

extern void fn_82D89B48(Inner_82DF40A0 *inner, void *link);
extern void fn_82D8A058(Inner_82DF40A0 *inner, void *link);

static __forceinline unsigned char isActive_82DF40A0(Inner_82DF40A0 *p)
{
    return p != 0 && p->active != 0;
}

void fn_82DF40A0(Obj_82DF40A0 *self, unsigned char enable)
{
    Inner_82DF40A0 *inner;

    if (enable != self->flags.enabled) {
        inner = self->inner;
        if (isActive_82DF40A0(inner)) {
            if (enable != 0) {
                fn_82D8A058(inner, &self->link);
            } else {
                fn_82D89B48(inner, &self->link);
            }
        }
        if (enable != 0) {
            self->flags.enabled = 1;
        } else {
            self->flags.enabled = 0;
        }
    }
}
