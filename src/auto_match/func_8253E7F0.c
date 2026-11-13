typedef struct Node_8253E7F0 {
    int a;
    int b;
    int c;
    struct Node_8253E7F0 *next;
    signed char offset;
    char pad11[7];
    unsigned char kind;
} Node_8253E7F0;

typedef struct Actor_8253E7F0 {
    char pad[0xe8];
    unsigned char type;
} Actor_8253E7F0;

typedef struct Self_8253E7F0 {
    char pad[0x18];
    Actor_8253E7F0 *owner;
    int filter;
} Self_8253E7F0;

extern void fn_82D40798(Self_8253E7F0 *self, Node_8253E7F0 *a, Node_8253E7F0 *b);

static __forceinline Actor_8253E7F0 *actorOf(Node_8253E7F0 *n)
{
    while (n->next != 0) n = n->next;
    if (n->kind == 1)
        return (Actor_8253E7F0 *)((char *)n + n->offset);
    return 0;
}

static __forceinline char isIgnored(Actor_8253E7F0 *actor)
{
    return actor->type == 5 || actor->type == 4;
}

void fn_8253E7F0(Self_8253E7F0 *self, Node_8253E7F0 *a, Node_8253E7F0 *b)
{
    Actor_8253E7F0 *pa = actorOf(a);
    Actor_8253E7F0 *pb = actorOf(b);
    if (pa == 0 && pb == 0)
        return;
    if (pa != 0) {
        if (pa == self->owner)
            return;
        if (self->filter != 0 && isIgnored(pa))
            return;
    }
    if (pb != 0) {
        if (pb == self->owner)
            return;
        if (self->filter != 0 && isIgnored(pb))
            return;
    }
    fn_82D40798(self, a, b);
}
