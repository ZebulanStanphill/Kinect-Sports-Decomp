#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

/* std::set<int> (Visual C++ 2010 <xtree>) */
struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int value;
    char color;
    char isnil;
};

struct Pairib {
    Node *first;
    bool second;
};

struct Set {
    int comp;
    Node *head;
    unsigned int size;
    int pad;
};

extern "C" {
void fn_822EB2D0(Pairib *ret, Set *self, Node *node);
void fn_822F81C0(Pairib *ret, Set *self, const int *val);
}

#define INSERT(self_, val_) \
    do { \
        Set *self = (self_); \
        Pairib r; \
        Node *n = std::_Allocate(1, (Node *)0); \
        n->left = self->head; \
        n->parent = self->head; \
        n->right = self->head; \
        n->color = 0; \
        n->isnil = 0; \
        new (&n->value) int(val_); \
        fn_822EB2D0(&r, self, n); \
    } while (0)

struct Obj {
    Set s0;
    Set s1;
    Set s2;
    Set s3;
};

struct RefCount {
    void **vtbl;
    int uses;
    int weaks;
    Obj storage;
};

struct SP {
    Obj *ptr;
    RefCount *rep;
};

struct Player {
    struct { char pad[0x184]; int i184; } *p0;
    char pad4[0x24 - 4];
    float f24;
    float f28;
    float f2c;
};

struct PlayerPtr {
    Player *ptr;
    void *rep;
    ~PlayerPtr();
};

struct Inner {
    char pad[0x844];
    int i844;
};

struct Ctx {
    char pad[0xc];
    int id;
    Inner *inner;
};

struct Tune {
    char pad[0x80];
    int i80;
    int i84;
    float f88;
    float f8c;
    float f90;
    float f94;
    float f98;
    float f9c;
};

extern "C" {
extern void *lbl_821AE6D4[];
extern float lbl_831C9CE0[];
extern Tune lbl_831CCDA8;
void fn_822EAEE0(Obj *self);
PlayerPtr fn_822E5FA8(int id);
void fn_822315A0(void *rep);
}

inline PlayerPtr::~PlayerPtr()
{
    if (rep != 0)
        fn_822315A0(rep);
}


static inline int Check(const Player *p)
{
    return p->p0->i184 != 0 && p->f28 > lbl_831C9CE0[0x3ac / 4];
}

static inline void Add(Set *s, int v)
{
    Pairib r;
    fn_822F81C0(&r, s, &v);
}

extern "C" SP *fn_822F7198(SP *ret, Ctx *ctx)
{
    RefCount *mem = (RefCount *)fn_8265C9E0(sizeof(RefCount));
    RefCount *rc;
    if (mem != 0) {
        Obj *s;
        mem->uses = 1;
        mem->weaks = 1;
        mem->vtbl = lbl_821AE6D4;
        s = &mem->storage;
        if (s != 0)
            fn_822EAEE0(s);
        rc = mem;
    } else {
        rc = 0;
    }
    Obj *o = &rc->storage;
    ret->rep = rc;
    ret->ptr = o;
    INSERT(&o->s0, 1);
    INSERT(&ret->ptr->s0, 0);
    Add(&ret->ptr->s1, 0);
    Add(&ret->ptr->s1, 1);
    Add(&ret->ptr->s1, 2);
    Add(&ret->ptr->s1, 3);
    if (ctx->inner->i844 == 4) {
        Add(&ret->ptr->s1, 4);
        Add(&ret->ptr->s1, 5);
    }
    if (Check(fn_822E5FA8(ctx->id).ptr)) {
        Add(&ret->ptr->s2, 3);
    } else {
        int moved = 0;
        if (fn_822E5FA8(ctx->id).ptr->f28 > lbl_831CCDA8.f88) {
            Add(&ret->ptr->s2, 3);
            moved = 1;
        } else if (fn_822E5FA8(ctx->id).ptr->f28 < lbl_831CCDA8.f8c) {
            Add(&ret->ptr->s2, 1);
            moved = 1;
        }
        if (fn_822E5FA8(ctx->id).ptr->f2c > lbl_831CCDA8.f90) {
            Add(&ret->ptr->s2, 5);
            moved = 1;
        } else if (fn_822E5FA8(ctx->id).ptr->f2c < lbl_831CCDA8.f94) {
            Add(&ret->ptr->s2, 0);
            moved = 1;
        }
        if (!moved || lbl_831CCDA8.i80 != 0) {
            Add(&ret->ptr->s2, 2);
            Add(&ret->ptr->s2, 4);
        }
    }
    {
        int moved = 0;
        if (fn_822E5FA8(ctx->id).ptr->f24 < lbl_831CCDA8.f98) {
            Add(&ret->ptr->s3, 0);
            moved = 1;
        } else if (fn_822E5FA8(ctx->id).ptr->f24 > lbl_831CCDA8.f9c) {
            Add(&ret->ptr->s3, 1);
            moved = 1;
        }
        if (!moved || lbl_831CCDA8.i84 != 0)
            Add(&ret->ptr->s3, 2);
    }
    return ret;
}
