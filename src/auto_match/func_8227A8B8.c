typedef struct Node { struct Node *next; int pad; int value; } Node;
typedef struct { char pad[0xe4]; int e4; char pad2[0xf0 - 0xe8]; } EntA;
typedef struct { char pad[0x10]; unsigned char b; char pad2[3]; } EntB;
typedef struct {
    char pad[0x40];
    EntA *a;
    int na;
    char pad2[0x54 - 0x48];
    EntB *b;
} Sub;
typedef struct { int x[2]; int y[2]; } Pair;
typedef struct {
    char pad[0x10];
    Node *head;
    char pad2[0x28 - 0x14];
    Pair pairs[7];
    int npairs;
    char pad3[0xf0 - 0x9c];
    Sub *sub;
} Obj;

extern void fn_8227A990(Obj *o, int v);
extern void fn_8227AC58(Obj *o, void *a, void *b);

void fn_8227A8B8(Obj *o)
{
    Sub *s = o->sub;
    Node *n;
    int i;

    for (i = 0; i < s->na; i++) {
        s->a[i].e4 = 0x80000000;
    }
    i = 0;
    do {
        s->b[i].b = 0;
        i++;
    } while (i < 32);
    for (n = o->head->next; n != o->head; n = n->next) {
        fn_8227A990(o, n->value);
    }
    for (i = 0; i < o->npairs; i++) {
        fn_8227AC58(o, o->pairs[i].x, o->pairs[i].y);
    }
}
