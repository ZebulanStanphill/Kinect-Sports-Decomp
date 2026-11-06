typedef struct Node_82ABE2E0 {
    unsigned int flags;
    int pad04;
    struct Node_82ABE2E0 *next;
    int pad0c;
    void *used;
} Node_82ABE2E0;
typedef struct Obj_82ABE2E0 {
    void *a;
    Node_82ABE2E0 *list;
    unsigned int flags;
} Obj_82ABE2E0;

static __forceinline unsigned char inRange_82ABE2E0(unsigned int t)
{
    if (t >= 0x53 && t <= 0x5f) {
        return 1;
    }
    return 0;
}

static __forceinline unsigned char nodeOk_82ABE2E0(Node_82ABE2E0 *n)
{
    if ((n->flags & 0x40000000) == 0 && (n->flags & 0x0e000000) == 0) {
        return 1;
    }
    return 0;
}

static __forceinline int notNull_82ABE2E0(Node_82ABE2E0 *p)
{
    if (p) return 1;
    return 0;
}

unsigned char fn_82ABE2E0(Obj_82ABE2E0 *o)
{
    Node_82ABE2E0 *n;

    if (inRange_82ABE2E0((o->flags >> 7) & 0x7f)) {
        return 0;
    }
    if ((o->flags & 0x2000000) != 0 && (o->a != 0 || o->list != 0)) {
        return 0;
    }
    n = o->list;
    if (n == 0) {
        return 1;
    }
    for (; notNull_82ABE2E0(n); n = n->next) {
        if (n->used != 0 && !nodeOk_82ABE2E0(n)) {
            break;
        }
    }
    return n == 0;
}
