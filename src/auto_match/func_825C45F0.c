typedef struct Child {
    char pad[0x3c];
    struct Child *next;
} Child;

typedef struct Thing {
    void *key;
    Child *children;
} Thing;

typedef struct Node1 {
    void *key;
    int x4;
    struct Node1 *next;
} Node1;

typedef struct Node2 {
    Thing *val;
    struct Node2 *next;
} Node2;

typedef struct Owner {
    Node1 *list1;
    Node2 *list2;
} Owner;

extern void fn_82522ED8(void *p);
extern void fn_825FA960(void *p);

void fn_825C45F0(Owner *o, Thing *t)
{
    Node1 *prev1 = 0;
    Node1 *cur1 = o->list1;
    Node2 *prev2;
    Node2 *cur2;
    Thing *v;
    Child *c;
    Child *next;

    if (t->key != 0) {
        for (; cur1 != 0; cur1 = cur1->next) {
            if (cur1->key == t->key) {
                if (prev1 != 0)
                    prev1->next = cur1->next;
                else
                    o->list1 = cur1->next;
                fn_825FA960(cur1->key);
                cur1->key = 0;
                fn_82522ED8(cur1);
                break;
            }
            prev1 = cur1;
        }
    }

    prev2 = 0;
    for (cur2 = o->list2; cur2 != 0; cur2 = cur2->next) {
        if (cur2->val == t) {
            if (prev2 != 0)
                prev2->next = cur2->next;
            else
                o->list2 = cur2->next;
            v = cur2->val;
            for (c = v->children; c != 0; c = next) {
                next = c->next;
                fn_82522ED8(c);
            }
            v->children = 0;
            fn_82522ED8(v);
            cur2->val = 0;
            fn_82522ED8(cur2);
            return;
        }
        prev2 = cur2;
    }
}
