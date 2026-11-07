typedef struct Node_82FF7968 Node_82FF7968;

typedef struct Vec_82FF7968 {
    void *begin;
    void *end;
    void *cap;
} Vec_82FF7968;

typedef struct Triple_82FF7968 {
    int a;
    int b;
    int c;
} Triple_82FF7968;

struct Node_82FF7968 {
    Node_82FF7968 *next;
    Vec_82FF7968 vec;
    int unk10;
    Triple_82FF7968 triple;
};

typedef struct List_82FF7968 {
    Node_82FF7968 *head;
    Node_82FF7968 *tail;
    int count;
} List_82FF7968;

typedef struct Iter_82FF7968 {
    Node_82FF7968 *cur;
    Node_82FF7968 *prev;
} Iter_82FF7968;

extern void *lbl_831BC768;
extern void fn_82FA5190(void *heap, void *p);

static __forceinline Iter_82FF7968 erase(List_82FF7968 *list, Iter_82FF7968 it)
{
    Iter_82FF7968 next;
    next.cur = it.cur->next;
    next.prev = it.prev;
    if (it.cur == list->head) {
        list->head = it.cur->next;
    } else {
        it.prev->next = it.cur->next;
    }
    if (it.cur == list->tail) {
        list->tail = it.prev;
    }
    list->count--;
    return next;
}

static __forceinline void destroyTriple(Triple_82FF7968 *t)
{
    t->a = 0;
    t->b = 0;
    t->c = 0;
}

static __forceinline void destroyVec(Vec_82FF7968 *v)
{
    if (v->begin != 0) {
        v->end = v->begin;
        fn_82FA5190(lbl_831BC768, v->begin);
        v->begin = 0;
        v->end = 0;
        v->cap = 0;
    }
}

void fn_82FF7968(void *owner, List_82FF7968 *list)
{
    Iter_82FF7968 it;
    Node_82FF7968 *node;

    it.cur = list->head;
    it.prev = 0;
    while (it.cur != 0) {
        node = it.cur;
        it = erase(list, it);
        destroyTriple(&node->triple);
        destroyVec(&node->vec);
        fn_82FA5190(lbl_831BC768, node);
    }
    list->head = 0;
    list->tail = 0;
    list->count = 0;
}
