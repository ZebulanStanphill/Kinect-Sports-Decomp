typedef struct Obj { struct ObjVt *vt; } Obj;
typedef struct ObjVt { void (*f0)(Obj *); void (*f4)(Obj *); } ObjVt;
typedef struct Inner { char pad[0x1c]; int o; } Inner;
typedef struct Node { struct Node *next; Inner *in; } Node;
typedef struct S { char pad[0x54]; Node *head; } S;

void fn_82FB4460(S *s)
{
    Node *n;
    for (n = s->head; n != 0; n = n->next) {
        int o = n->in->o;
        if (o != 0)
            ((Obj *)o)->vt->f4((Obj *)o);
    }
}
