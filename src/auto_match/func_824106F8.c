typedef struct Node Node;
typedef struct Entity Entity;

typedef struct NodeVtbl {
    void *f0;
    void *f4;
    void (*notify)(Node *self, int msg, int arg);
} NodeVtbl;

struct Node {
    NodeVtbl *vt;
    Entity *ent;
};

struct Entity {
    char pad0[0x190];
    int flag;
    char pad194[0x1b0 - 0x194];
    Node *node;
};

typedef struct Obj {
    char pad0[0x93c];
    int enabled;
} Obj;

typedef struct Ctx_824106F8 {
    char pad0[0x8c0];
    char *mgr;
} Ctx_824106F8;

typedef struct Self_824106F8 {
    char pad0[0x28];
    Ctx_824106F8 *ctx;
    char pad2c[0x268 - 0x2c];
    int on;
} Self_824106F8;

extern Node *fn_825735B8(char *list, const char *key);
extern Entity *fn_825764F0(char *list, const char *key, Entity *ent);
extern void fn_825334E0(Obj *o, char *mgr, const char *key);

void fn_824106F8(Self_824106F8 *self, int on, Obj *o)
{
    if (on != 0) {
        fn_825334E0(o, self->ctx->mgr, "spinTrailLocator1");
    } else if (o->enabled != 0) {
        char *list = self->ctx->mgr + 0x128;
        Node *n = fn_825735B8(list, "spinTrailLocator1");
        while (n != 0) {
            Entity *e;
            n->vt->notify(n, 5, 0);
            if (n->ent != 0)
                n->ent->flag = 0;
            e = fn_825764F0(list, "spinTrailLocator1", n->ent);
            n = e != 0 ? e->node : 0;
        }
    }
    self->on = on;
}
