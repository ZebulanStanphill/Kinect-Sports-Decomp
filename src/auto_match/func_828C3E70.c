typedef struct Obj Obj;
typedef struct { void (*Destroy)(Obj *, int); } ObjVtbl;
struct Obj { ObjVtbl *vt; };

typedef struct Node Node;
struct Node { Node *next; Node *prev; int key; Obj *value; };

extern void fn_828A0E20(Node **it);

void fn_828C3E70(char *self)
{
    Node *it = (*(Node **)(self + 0x1c4))->next;
    while (it != *(Node **)(self + 0x1c4)) {
        Obj *o = it->value;
        fn_828A0E20(&it);
        if (o != 0)
            o->vt->Destroy(o, 1);
    }
}
