#include "stdext/xmemory.h"

struct Name {
    char buf[0x18];
};

extern "C" void *memcpy(void *, const void *, unsigned int);

struct Value {
    Name name;
    unsigned int hash;
    int x;
    Value() {}
    Value(const Value &o) { memcpy(this, &o, sizeof(Value)); }
};

struct Pair {
    int first;
    Value second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair val;
    char color;
    char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

struct PairIb {
    Node *where;
    bool second;
};

struct Inner {
    char pad[0x8c0];
    char *res;
};

struct Owner {
    char pad[0x3e4];
    Inner *inner;
};

struct Obj {
    void *vtbl;
    Tree map;
    int f10;
    int f14;
};

extern "C" {
extern void *lbl_821BAA38[];
PairIb *fn_82457D28(PairIb *ret, Tree *tree, Pair *val);
unsigned int fn_82555A88(void *self, const char *name);
}

extern "C" Obj *fn_824573D0(Obj *self, const Name *name, int f14, Owner *owner)
{
    Tree *map = &self->map;
    Value v;
    Pair p;
    self->vtbl = lbl_821BAA38;
    map->size = 0;
    map->head = std::_Allocate(1, (Node *)0);
    map->head->left = map->head;
    map->head->parent = map->head;
    map->head->right = map->head;
    map->head->color = 1;
    map->head->isnil = 1;
    self->f14 = f14;
    v.name = *name;
    v.x = 0;
    v.hash = fn_82555A88(owner->inner->res + 0x98, "|REFERENCE_RopesZBack|");
    p.first = 0;
    p.second = v;
    {
        PairIb r;
        fn_82457D28(&r, map, &p);
    }
    v.name = *name;
    v.x = 0;
    v.hash = fn_82555A88(owner->inner->res + 0x98, "|REFERENCE_RopesXPlus|");
    p.first = 3;
    p.second = v;
    {
        PairIb r;
        fn_82457D28(&r, map, &p);
    }
    v.name = *name;
    v.x = 0;
    v.hash = fn_82555A88(owner->inner->res + 0x98, "|REFERENCE_RopesZPlus|");
    p.first = 2;
    p.second = v;
    {
        PairIb r;
        fn_82457D28(&r, map, &p);
    }
    v.name = *name;
    v.x = 0;
    v.hash = fn_82555A88(owner->inner->res + 0x98, "|REFERENCE_RopesNegativeX|");
    p.first = 1;
    p.second = v;
    {
        PairIb r;
        fn_82457D28(&r, map, &p);
    }
    return self;
}
