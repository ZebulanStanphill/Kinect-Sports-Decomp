typedef struct Listener_8267AC88 Listener_8267AC88;

typedef struct List_8267AC88 {
    Listener_8267AC88 **items;
    unsigned int count;
} List_8267AC88;

typedef struct Holder_8267AC88 {
    unsigned char isList;
    void *p;
} Holder_8267AC88;

extern void fn_8267AA50(List_8267AC88 *list, unsigned int index);
extern void fn_8267BE38(void *p);

#define LIST(s) ((List_8267AC88 *)(s)->p)
#define ONE(s) ((Listener_8267AC88 *)(s)->p)

static __forceinline void List_destroy_8267AC88(List_8267AC88 *list)
{
    if (list != 0) {
        fn_8267BE38(list->items);
        fn_8267BE38(list);
    }
}

void fn_8267AC88(Holder_8267AC88 *self, Listener_8267AC88 *l)
{
    if (self->isList) {
        List_8267AC88 *list = LIST(self);
        unsigned int i;
        for (i = 0; i < LIST(self)->count; i++) {
            if (list->items[i] == l) {
                fn_8267AA50(list, i);
                list = LIST(self);
                if (list->count == 1) {
                    Listener_8267AC88 *one = list->items[0];
                    List_destroy_8267AC88(LIST(self));
                    self->p = one;
                    self->isList = 0;
                    return;
                }
            }
        }
    } else if (ONE(self) == l) {
        self->p = 0;
    }
}
