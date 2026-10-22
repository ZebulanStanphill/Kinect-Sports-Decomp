typedef struct Pt { int x, y; } Pt;
typedef struct Node { int a; Pt pt; } Node;
typedef struct List { Node *head; } List;
typedef struct Obj { int pad0; List list; int pad[4]; unsigned int count; int pad2[2]; int base; } Obj;
extern void fn_82FB36E8(List *l, Node *n, int z);

static void get(Node *h, Pt *out) { out->x = h->pt.x; out->y = h->pt.y; }
int fn_82FB3578(Obj *o, int n, Pt *out)
{
    if (o->count != 0) {
        Node *h = o->list.head; get(h, out);
        if (out->x < o->base + n) {
            if (o->list.head != 0) fn_82FB36E8(&o->list, o->list.head, 0);
            return 0x2d;
        }
    }
    return 0x11;
}
