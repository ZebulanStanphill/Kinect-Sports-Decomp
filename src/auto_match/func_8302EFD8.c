typedef struct Node { struct Node *next; int pad[5]; int h; } Node;
typedef struct Obj Obj;
typedef void (*Fn)(Obj *o, int a);
struct Obj { char **vt; char pad[0x100]; Node *head; char pad108[0xc]; unsigned int count; };
extern void fn_82FF5198(int heap, int h);
extern int lbl_83264304;

void fn_8302EFD8(Obj *p)
{
    Node *n;
    if (p->count > 0) {
        for (n = p->head; n != 0; n = n->next) {
            fn_82FF5198(lbl_83264304, n->h);
            (*(Fn *)((char *)p->vt + 0x98))(p, 3);
        }
    }
}
