typedef struct Node_82CF7020 {
    struct Node_82CF7020 *next;
} Node_82CF7020;

typedef struct List_82CF7020 {
    Node_82CF7020 *head;
    int count;
} List_82CF7020;

struct Obj_82CF7020;

typedef struct Vt_82CF7020 {
    void *slots[2];
    void (*Release)(struct Obj_82CF7020 *self, Node_82CF7020 *item, int ctx);
    void *slots2[4];
    void (*Process)(struct Obj_82CF7020 *self, Node_82CF7020 **items, int n, int ctx);
} Vt_82CF7020;

typedef struct Obj_82CF7020 {
    Vt_82CF7020 *vt;
} Obj_82CF7020;

typedef struct Owner_82CF7020 {
    int field_0;
    Obj_82CF7020 *obj;
    int capacity;
} Owner_82CF7020;

static __forceinline Node_82CF7020 *Pop_82CF7020(List_82CF7020 *l)
{
    Node_82CF7020 *n = l->head;
    if (n != 0) {
        l->count--;
        l->head = n->next;
        return n;
    }
    return 0;
}

static __forceinline void Push_82CF7020(List_82CF7020 *l, Node_82CF7020 *n)
{
    l->count++;
    n->next = l->head;
    l->head = n;
}

void fn_82CF7020(Owner_82CF7020 *p, int idx, Node_82CF7020 *item)
{
    List_82CF7020 *list;
    int remaining;
    int keep;
    int ctx;
    int n;
    int i;
    Node_82CF7020 *items[4];

    ctx = ((int *)p)[idx + 0x25];
    if (p->capacity == 0) {
        p->obj->vt->Release(p->obj, item, ctx);
        return;
    }
    list = (List_82CF7020 *)((char *)p + idx * 8 + 0xc);
    keep = p->capacity / 2;
    remaining = list->count;
    while (remaining > keep) {
        n = remaining - keep > 4 ? 4 : remaining - keep;
        for (i = 0; i < n; i++) {
            items[i] = Pop_82CF7020(list);
        }
        remaining -= n;
        p->obj->vt->Process(p->obj, items, n, ctx);
    }
    Push_82CF7020(list, item);
}
