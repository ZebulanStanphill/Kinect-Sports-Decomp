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

extern Node *fn_825735B8(char *list, int key);
extern Entity *fn_825764F0(char *list, int key, Entity *ent);

void fn_825334E0(Obj *o, char *mgr, int key)
{
    Node *n;
    Entity *e;

    if (o->enabled != 0) {
        n = fn_825735B8(mgr + 0x128, key);
        while (n != 0) {
            n->vt->notify(n, 5, 0);
            if (n->ent != 0)
                n->ent->flag = 1;
            e = fn_825764F0(mgr + 0x128, key, n->ent);
            n = e != 0 ? e->node : 0;
        }
    }
}
