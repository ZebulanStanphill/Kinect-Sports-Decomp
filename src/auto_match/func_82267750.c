typedef struct {
    char pad0[0x24];
    int f24;
    int f28;
    int f2c;
    char pad30[0x234 - 0x30];
} Entry;

typedef struct {
    int f0;
    char pad4[0x20];
} ResHead;

typedef struct {
    char pad0[0x40];
    unsigned int id;
    char pad44[0xa0 - 0x44];
    unsigned int flags;
    char pada4[0x51c - 0xa4];
    int f51c;
    Entry *res;
    char pad524[0x540 - 0x524];
    int idx;
} Obj;

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    Obj *val;
} Node;

typedef struct {
    Node *head;
    int size;
    int pad8;
    char set[0xc];
    char *m18;
} Self;

typedef struct {
    int first;
    unsigned int second;
} Pair;

extern void fn_82266628(Obj *o, int a, int b);
extern void fn_82267EB0(void *set, Obj **key);
extern void fn_824BF8A8(void *p, Pair *pair);
extern void fn_8265CA20(void *p);
extern void fn_82672C20(int a, int b, int c, int d);
extern int lbl_831CEF4C[];

void fn_82267750(Self *self, unsigned int id)
{
    Node *node;
    Obj *obj;
    Obj *key;
    unsigned int oid;
    Entry *res;
    int idx;
    Pair pair;

    for (node = self->head->next; node != self->head; node = node->next) {
        obj = node->val;
        oid = obj->id;
        key = obj;
        if (oid == id) {
            res = obj->res;
            if (res != 0) {
                if (obj->f51c != 0) {
                    idx = obj->idx;
                    fn_82672C20(*(int *)res, lbl_831CEF4C[idx], 0, 0);
                    res[idx].f28 = 0;
                    res[idx].f2c = 0;
                    obj->res[obj->idx].f24 = 0;
                }
                obj->res = 0;
            }
            if (obj->flags & 2) {
                fn_82266628(obj, 6, 5);
            } else {
                fn_82266628(obj, 8, 7);
            }
            pair.first = 1;
            pair.second = id;
            fn_824BF8A8(self->m18 + 0x1c, &pair);
            if (node != self->head) {
                node->prev->next = node->next;
                node->next->prev = node->prev;
                fn_8265CA20(node);
                self->size--;
            }
            fn_82267EB0(self->set, &key);
            return;
        }
    }
}
