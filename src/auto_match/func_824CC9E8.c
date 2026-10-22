typedef struct VObj VObj;
typedef struct {
    void (*dtor)(VObj *o, int flags);
} VTable;
struct VObj {
    VTable *vt;
};

typedef struct {
    char pad[0x20];
    void *h;
} Inner;

typedef struct {
    char pad[0x80];
    Inner *inner;
    char pad2[0x10];
    unsigned int id;
} Child;

typedef struct {
    char pad[0x44];
    int a;
    int b;
    int c;
    char pad2[0x8];
    int d;
} Stats;

typedef struct {
    void *vt;
    int f4[4];
    Child *child;
    int f18[2];
    VObj *other;
    int f24[3];
    int kind;
} Self;

extern char lbl_821C0B48[];
extern int fn_824CD030(void);
extern Stats *fn_8225F160(void);
extern unsigned int fn_82F513F8(void *h);
extern void fn_82F51178(void *h, int x);

void fn_824CC9E8(Self *self)
{
    Child *c;
    Stats *st;

    self->vt = lbl_821C0B48;
    if (fn_824CD030()) {
        int kind = self->kind;
        st = fn_8225F160();
        st->a--;
        if (kind == 0) {
            st->b--;
        } else {
            st->c--;
        }
    } else {
        st = fn_8225F160();
        st->d--;
    }
    c = self->child;
    if (c != 0) {
        if (fn_82F513F8(c->inner->h) == c->id) {
            fn_82F51178(c->inner->h, 0);
        }
        c->inner = 0;
        if (self->child != 0) {
            ((VObj *)self->child)->vt->dtor((VObj *)self->child, 1);
        }
        self->child = 0;
    }
    if (self->other != 0) {
        self->other->vt->dtor(self->other, 1);
    }
}
