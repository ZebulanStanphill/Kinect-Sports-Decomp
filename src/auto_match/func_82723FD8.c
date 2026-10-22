typedef struct Item {
    int pad0;
    int refs;
} Item;

typedef struct Holder {
    char pad0[0x14];
    Item *item;
} Holder;

typedef struct Data {
    char pad0[0x114];
    int holder;
} Data;

typedef struct Target {
    char pad0[0xb00];
    unsigned int flags;
} Target;

typedef struct Self Self;
typedef struct SelfVtbl {
    void *f[16];
    Target *(*f40)(Self *self);
} SelfVtbl;

struct Self {
    SelfVtbl *vt;
    char pad4[0x9c];
    Data *data;
};

extern char lbl_820E975C[];
extern void fn_827A2EC8(Item *it, char *s, int n);
extern void fn_827A2F40(Item *it, int n);
extern void fn_8267C498(Item *it);

void fn_82723FD8(Self *self)
{
    Item *it;
    Target *t;

    if (self->data->holder != 0) {
        it = ((Holder *)self->data->holder)->item;
        if (it != 0) {
            it->refs++;
            fn_827A2EC8(it, lbl_820E975C, -1);
            fn_827A2F40(it, 0);
        }
        t = self->vt->f40(self);
        if (t != 0) {
            t->flags |= 0x400;
        }
        if (it != 0) {
            fn_8267C498(it);
        }
    }
}
