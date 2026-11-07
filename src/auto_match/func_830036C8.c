typedef struct Pair_830036C8 {
    unsigned int key;
    unsigned short count;
} Pair_830036C8;

typedef struct Vec_830036C8 {
    Pair_830036C8 *begin;
    Pair_830036C8 *end;
} Vec_830036C8;

typedef struct Target_830036C8 Target_830036C8;
typedef struct TargetVtbl_830036C8 {
    void *s[30];
    void (*notify)(Target_830036C8 *self, unsigned int key, unsigned short flags, int arg);
} TargetVtbl_830036C8;
struct Target_830036C8 { TargetVtbl_830036C8 *vt; };

typedef struct Holder_830036C8 {
    int f0;
    Target_830036C8 *target;
} Holder_830036C8;

typedef struct Obj_830036C8 {
    unsigned char pad0[0x10];
    Target_830036C8 *owner;
    Target_830036C8 *parent;
    unsigned short refs;
    unsigned char pad1a[0x23];
    unsigned char flags3d;
    unsigned char pad3e[6];
    Holder_830036C8 *holder;
    Vec_830036C8 keys;
} Obj_830036C8;

extern void fn_82FAF408(Vec_830036C8 *v, unsigned int key);

static __forceinline unsigned short *Find(Vec_830036C8 *v, unsigned int key)
{
    Pair_830036C8 *p;
    int found;
    for (p = v->begin; p != v->end && p->key != key; p++) {
    }
    found = p != v->end;
    return found ? &p->count : 0;
}
void fn_830036C8(Obj_830036C8 *o, unsigned int key, unsigned short flags)
{
    unsigned short *cnt;

    o->refs--;
    if (key != 0 && ((o->flags3d & 0x20) != 0 || (int)o->owner == 0)) {
        cnt = Find(&o->keys, key);
        if (cnt != 0 && --*cnt == 0) {
            fn_82FAF408(&o->keys, key);
        }
        key = 0;
    }
    if ((flags & 1) != 0 && o->parent != 0) {
        flags &= ~1;
        o->parent->vt->notify(o->parent, key, 3, 0);
    }
    if ((flags & 2) != 0 && o->holder != 0 && o->holder->target != 0) {
        flags &= ~2;
        o->holder->target->vt->notify(o->holder->target, key, 3, 0);
    }
    if (o->owner != 0) {
        o->owner->vt->notify(o->owner, key, flags, 0);
    }
}
