typedef struct Item_82AF5968 { char pad[8]; unsigned int type; } Item_82AF5968;
typedef struct Node_82AF5968 { int flags; int pad; struct Node_82AF5968 *next; int pad2; Item_82AF5968 *item; } Node_82AF5968;
typedef union Flags_82AF5968 {
    unsigned int word;
    struct { unsigned int pad : 8; unsigned int locked : 1; unsigned int rest : 23; } bits;
} Flags_82AF5968;
typedef struct Obj_82AF5968 { int pad; Node_82AF5968 *head; Flags_82AF5968 flags; } Obj_82AF5968;
typedef struct Ref_82AF5968 { Obj_82AF5968 *obj; int extra; } Ref_82AF5968;
typedef struct Mode_82AF5968 { unsigned int flags; int extra; } Mode_82AF5968;

static __forceinline int alive(Node_82AF5968 *n) { if (n) return 1; return 0; }

static __forceinline Item_82AF5968 *FindItem(Obj_82AF5968 *o)
{
    Node_82AF5968 *n = o->head;
    Item_82AF5968 *item;

    while (alive(n)) {
        item = n->item;
        if (item && (item->type & 0x3f80) == 0x3700 && (n->flags & 0xe000000u))
            return item;
        n = n->next;
    }
    return 0;
}

unsigned char fn_82AF5968(Ref_82AF5968 ref, Mode_82AF5968 mode)
{
    Obj_82AF5968 *o = ref.obj;

    return !(unsigned char)o->flags.bits.locked && (o->flags.word & 0x1c000) == 0x4000 && (mode.flags & 0x1e) == 0
        && FindItem(o) == 0;
}
