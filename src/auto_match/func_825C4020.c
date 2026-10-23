extern void fn_82522ED8(void *p);
extern char lbl_821C1424[];
extern char lbl_821C8ED0[];

typedef struct Obj Obj;
typedef struct ObjVt {
    void *s0;
    void *s1;
    void *s2;
    void (*Delete)(Obj *o, int flag);
} ObjVt;
struct Obj {
    ObjVt *vt;
};

typedef struct Node {
    Obj *obj;
    struct Node *next;
} Node;

typedef struct Triple {
    int a, b, c;
} Triple;

typedef struct Self {
    void *vt;
    int f4;
    Node *head;
    Triple t;
} Self;

void fn_825C4020(Self *self)
{
    Triple *t;
    Node *n;
    Node *next;

    self->vt = lbl_821C8ED0;
    t = &self->t;
    if (t != 0) {
        t->a = 0;
        t->b = 0;
        t->c = 0;
    }
    n = self->head;
    while (n != 0) {
        if (n->obj != 0) {
            n->obj->vt->Delete(n->obj, 1);
            n->obj = 0;
        }
        next = n->next;
        fn_82522ED8(n);
        n = next;
    }
    self->head = 0;
    self->vt = lbl_821C1424;
}
