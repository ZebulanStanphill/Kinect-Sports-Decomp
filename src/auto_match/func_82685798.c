typedef struct Flagged {
    char pad[0x19];
    unsigned char dead;
} Flagged;

typedef struct LNode LNode;
struct LNode {
    LNode *prev;
    LNode *next;
    char pad[8];
    Flagged *obj;
};

typedef struct {
    char pad[0x38];
    LNode head;
    char pad2[0x84 - 0x38 - sizeof(LNode)];
    int count;
} Obj;

extern void fn_82685698(Obj *o, LNode *n);

void fn_82685798(Obj *o)
{
    LNode *h = &o->head;
    if (h->next != h && !o->head.next->obj->dead) {
        fn_82685698(o, o->head.next);
        o->count++;
    }
}
