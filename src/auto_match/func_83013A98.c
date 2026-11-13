typedef struct Obj_83013A98 {
    void **vt;
} Obj_83013A98;
typedef Obj_83013A98 *(*Factory_83013A98)(void *context);
typedef struct Ent_83013A98 {
    unsigned int key;
    Factory_83013A98 create;
} Ent_83013A98;
typedef struct Vec_83013A98 {
    Ent_83013A98 *begin;
    Ent_83013A98 *end;
} Vec_83013A98;

extern Vec_83013A98 lbl_832645F0;
extern char lbl_831BC7FC[];

static __forceinline Factory_83013A98 *get_(Ent_83013A98 *it, Ent_83013A98 *end)
{
    int f = it != end;
    return f ? &it->create : 0;
}

int fn_83013A98(int type, int group, int arg3, int arg4, Obj_83013A98 **out, int arg6)
{
    unsigned int key = ((group << 12) + type) * 16 + 4;
    Ent_83013A98 *e;
    Factory_83013A98 *slot;
    for (e = lbl_832645F0.begin; e != lbl_832645F0.end && e->key != key; e++) {
    }
    slot = get_(e, lbl_832645F0.end);
    if (slot != 0) {
        Obj_83013A98 *o = (*slot)(lbl_831BC7FC);
        *out = o;
        if (o != 0) {
            if (((int (*)(Obj_83013A98 *, void *, int, int, int))o->vt[5])(o, lbl_831BC7FC, arg3, arg4, arg6) == 1)
                return 1;
            ((void (*)(Obj_83013A98 *, void *))(*out)->vt[1])(*out, lbl_831BC7FC);
            *out = 0;
        }
    }
    return 2;
}
