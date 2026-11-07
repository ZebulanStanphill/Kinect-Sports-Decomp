typedef struct Vec_8302FEC0 {
    unsigned int *begin;
    unsigned int *end;
} Vec_8302FEC0;

typedef struct Node_8302FEC0 {
    struct Node_8302FEC0 *next;
    unsigned int key;
    Vec_8302FEC0 vec;
} Node_8302FEC0;

typedef struct Obj_8302FEC0 {
    char pad[0xc4];
    Node_8302FEC0 *head;
} Obj_8302FEC0;

extern unsigned int *fn_82FF5D28(Vec_8302FEC0 *v);

static __forceinline Vec_8302FEC0 *FindVec_8302FEC0(Obj_8302FEC0 *o, unsigned int key)
{
    Node_8302FEC0 *n;
    for (n = o->head; n != 0; n = n->next) {
        if (n->key == key) {
            return &n->vec;
        }
    }
    return 0;
}

static __forceinline int VecFind_8302FEC0(Vec_8302FEC0 *v, unsigned int val)
{
    unsigned int *it;
    for (it = v->begin; it != v->end && *it != val; ++it) {
    }
    return it != v->end ? (int)it : 0;
}

char fn_8302FEC0(Obj_8302FEC0 *o, unsigned int key, unsigned int val)
{
    Vec_8302FEC0 *v;
    unsigned int *slot;
    char result;

    if (val == 0) {
        return 0x1f;
    }
    result = 0x39;
    v = FindVec_8302FEC0(o, key);
    if (v != 0) {
        if (VecFind_8302FEC0(v, val) == 0) {
            slot = fn_82FF5D28(v);
            if (slot != 0) {
                *slot = val;
            }
            result = (slot == 0) + 1;
        }
    }
    return result;
}
