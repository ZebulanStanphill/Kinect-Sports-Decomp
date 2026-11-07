typedef struct Node_82CF7138 {
    struct Node_82CF7138 *next;
} Node_82CF7138;

typedef struct List_82CF7138 {
    Node_82CF7138 *head;
    int count;
} List_82CF7138;

struct Obj_82CF7138;

typedef struct Vt_82CF7138 {
    void *slots[7];
    void (*Process)(struct Obj_82CF7138 *self, void **items, int n, int ctx);
} Vt_82CF7138;

typedef struct Obj_82CF7138 {
    Vt_82CF7138 *vt;
} Obj_82CF7138;

typedef struct Owner_82CF7138 {
    int field_0;
    Obj_82CF7138 *obj;
} Owner_82CF7138;

static __forceinline Node_82CF7138 *Pop_82CF7138(List_82CF7138 *l)
{
    Node_82CF7138 *n = l->head;
    if (n != 0) {
        l->count--;
        l->head = n->next;
        return n;
    }
    return 0;
}

void fn_82CF7138(Owner_82CF7138 *p, int idx)
{
    List_82CF7138 *list;
    int remaining;
    int ctx;
    int n;
    int i;
    void *items[4];

    list = (List_82CF7138 *)((char *)p + idx * 8 + 0xc);
    remaining = list->count;
    ctx = ((int *)p)[idx + 0x25];
    while (remaining > 0) {
        n = remaining > 4 ? 4 : remaining;
        for (i = 0; i < n; i++) {
            items[i] = Pop_82CF7138(list);
        }
        remaining -= n;
        p->obj->vt->Process(p->obj, items, n, ctx);
    }
}
