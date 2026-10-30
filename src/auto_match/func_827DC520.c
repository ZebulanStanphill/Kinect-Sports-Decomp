typedef struct Item_827DC520 Item_827DC520;
typedef struct { void *f0; void *f1; void *f2; void *f3; int (*getkey)(Item_827DC520 *); } VT_827DC520;
struct Item_827DC520 { VT_827DC520 *vt; };
typedef struct Node_827DC520 Node_827DC520;
struct Node_827DC520 { Node_827DC520 *next; int pad; int val8; Item_827DC520 *item; };
typedef struct { int pad; Node_827DC520 *head; } Cont_827DC520;
typedef struct {
    char pad0[0xb5c];
    Cont_827DC520 c;
    char pad1[0xbd4 - 0xb64];
    int x;
    char pad2[0xbfc - 0xbd8];
    int cs;
} Obj_827DC520;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_827D9E18(Item_827DC520 *);
extern int fn_827D9E40(Item_827DC520 *);
extern void fn_827E0658(Node_827DC520 **, Cont_827DC520 *, int *);
extern int fn_827E0250(Cont_827DC520 *, int *);
extern void fn_827E0438(Cont_827DC520 *, Node_827DC520 *, int);
extern void fn_827E8720(int *, Node_827DC520 **, Node_827DC520 *);
extern void fn_827DCBF8(int *, Node_827DC520 **);

void fn_827DC520(Obj_827DC520 *o, Item_827DC520 *item)
{
    Node_827DC520 *n;
    struct { int key; Node_827DC520 *it; } l;
    Cont_827DC520 *c;

    RtlEnterCriticalSection(&o->cs);
    fn_827D9E18(item);
    if (fn_827D9E40(item) == 0) {
        l.key = item->vt->getkey(item);
        c = &o->c;
        fn_827E0658(&l.it, c, &l.key);
        for (n = l.it; n != o->c.head; n = n->next) {
            l.it = (Node_827DC520 *)n->item;
            if (l.it == (Node_827DC520 *)item) {
                int r = fn_827E0250(c, &n->val8);
                fn_827E0438(c, n, r);
                fn_827E8720(&l.key, &c->head, n);
                fn_827DCBF8(&o->x, &l.it);
                break;
            }
        }
    }
    RtlLeaveCriticalSection(&o->cs);
}
