typedef struct { char pad[0x24]; int x24; } Val;
typedef struct Node { struct Node *next; struct Node *prev; int pad[2]; Val *val; } Node;
typedef struct { int pad; Node *head; } Bucket;
typedef struct { Bucket **arr; int pad[3]; int idx; } Obj;
extern void fn_82381BC0(Node **);

static Val *find(Node *head) { Node *it; for (it = head->next; it != head; fn_82381BC0(&it)) { if (it->val->x24 != 0) return it->val; } return 0; }
Val *fn_822AA770(Obj *o) { return find(o->arr[o->idx]->head); }
