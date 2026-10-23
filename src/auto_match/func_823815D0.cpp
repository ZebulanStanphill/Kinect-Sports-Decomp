#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) { return p; }

struct Pair {
    int key;
    int val;
    Pair(int k, int v) : key(k), val(v) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair value;
    unsigned char color;
    unsigned char isnil;
};

struct It {
    Node *p;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

struct Entry {
    const char *a;
    const char *b;
    int c;
    int d;
};

struct Info {
    char pad0[8];
    unsigned int m8;
    char padc[4];
    int m10;
    char pad14[0x48 - 0x14];
    int m48;
};

struct Player {
    Info **arr;
    char pad4[0xc];
    int idx;
};

struct PlayerVec {
    Player **first;
    Player **last;
};

struct Game {
    char pad0[8];
    PlayerVec *players;
};

struct Ctl {
    char pad0[0x1c];
    Player *m1c;
    char pad20[4];
    int m24;
};

struct Obj {
    int m0;
    Game *game;
    Tree m8;
    char pad14[4];
    Tree m18;
};

extern "C" {
extern Entry lbl_831CB180[];
void fn_8249CC10(It *ret, Tree *t, It where, Node *node);
Ctl *fn_822ABA88(Info *info, int idx);
Ctl *fn_822CEE40(Ctl *c);
int fn_823818A0(Player *p, const char *name, const char *a, const char *b);
void *fn_822AA770(Player *p);
unsigned int fn_822AA7E0(Player *p);
int fn_822ACAD8(int v, const char *a, const char *b);
}

static inline unsigned char less(const int &a, const int &b) { return a < b; }

static inline Node *Buynode(Tree *t, int k, int v)
{
    Node *n = std::_Allocate(1, (Node *)0);
    n->left = t->head;
    n->parent = t->head;
    n->right = t->head;
    n->color = 0;
    n->isnil = 0;
    ::new ((void *)&n->value) Pair(k, v);
    return n;
}

static inline int *lookup(Tree *t, const int *key)
{
    Node *where = t->head;
    Node *p = t->head->parent;
    while (!p->isnil) {
        if (less(p->value.key, *key))
            p = p->right;
        else {
            where = p;
            p = p->left;
        }
    }
    It w;
    w.p = where;
    Node *res = where;
    if (where == t->head || less(*key, where->value.key)) {
        It r;
        fn_8249CC10(&r, t, w, Buynode(t, *key, 0));
        res = r.p;
    }
    return &res->value.val;
}

extern "C" inline int *fn_824A09E8(Tree *t, const int *key)
{
    Node *where = t->head;
    Node *p = t->head->parent;
    while (!p->isnil) {
        if (less(p->value.key, *key))
            p = p->right;
        else {
            where = p;
            p = p->left;
        }
    }
    It w;
    w.p = where;
    Node *res = where;
    if (where == t->head || less(*key, where->value.key)) {
        It r;
        fn_8249CC10(&r, t, w, Buynode(t, *key, 0));
        res = r.p;
    }
    return &res->value.val;
}

extern "C" void fn_823815D0(Obj *self, int idx, int val, int mode)
{
    const char *a = lbl_831CB180[mode].a;
    const char *b = lbl_831CB180[mode].b;
    int found = 0;
    Player *pl = self->game->players->first[idx];
    *lookup(&self->m18, &idx) = val;
    if (val >= 0) {
        Player *p2 = self->game->players->first[idx];
        Ctl *c = fn_822ABA88(p2->arr[p2->idx], val);
        if (c->m24 != 0) {
            Ctl *o = fn_822CEE40(c);
            if (o != 0 && o->m24 != 0)
                found = fn_823818A0(pl, "coop#", a, b);
            Game *g = self->game;
            Player *q = c->m1c->arr[c->m1c->idx]->m10 == 0 ? g->players->first[1] : g->players->first[0];
            if (found != 0
                || (fn_822AA770(q) != 0 && fn_823818A0(pl, "versus#", a, b) != 0)
                || fn_823818A0(pl, "human#", a, b) != 0)
                goto set;
        }
        Ctl *o = fn_822CEE40(c);
        if (o != 0 && o->m24 != 0) {
            found = fn_823818A0(pl, "humanteammate#", a, b);
        }
    } else {
        if (fn_822AA7E0(pl) == pl->arr[pl->idx]->m8) {
            found = fn_823818A0(pl, "coop#", a, b);
        }
    }
    if (found == 0 && fn_822ACAD8(pl->arr[pl->idx]->m48, a, b) == 0)
        return;
set:
    *fn_824A09E8(&self->m8, &idx) = mode;
}
