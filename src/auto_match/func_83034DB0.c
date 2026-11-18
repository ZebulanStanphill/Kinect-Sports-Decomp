typedef struct Pair_83034DB0 {
    unsigned int key;
} Pair_83034DB0;

typedef struct Node_83034DB0 {
    struct Node_83034DB0 *next;
    Pair_83034DB0 pair;
} Node_83034DB0;

typedef struct List_83034DB0 {
    Node_83034DB0 *head;
} List_83034DB0;

typedef struct Object_83034DB0 {
    int pad0;
    List_83034DB0 *list;
} Object_83034DB0;

typedef struct Item_83034DB0 {
    char pad0[0xc];
    unsigned int key;
} Item_83034DB0;

extern unsigned char fn_83034D00(Object_83034DB0 *self, Item_83034DB0 *item);
extern void *fn_83019B78(List_83034DB0 *list, unsigned int key);

static __forceinline Pair_83034DB0 *List_find(List_83034DB0 *l, unsigned int key)
{
    Node_83034DB0 *n;

    for (n = l->head; n != 0; n = n->next) {
        if (n->pair.key == key) {
            return &n->pair;
        }
    }
    return 0;
}

int fn_83034DB0(Object_83034DB0 *self, Item_83034DB0 *item)
{
    int result = 1;
    List_83034DB0 *list;
    unsigned int key;
    if (fn_83034D00(self, item) == 0) {
        result = 2;
    } else {
        list = self->list;
        key = item->key;
        if (List_find(list, key) != 0) {
            result = 1;
        } else if (fn_83019B78(list, key) == 0) {
            result = 2;
        }
    }
    return result;
}
