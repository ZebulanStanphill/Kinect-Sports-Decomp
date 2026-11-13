typedef struct Listener_8267A6B8 Listener_8267A6B8;
typedef struct ListenerVtbl_8267A6B8 {
    void *f0;
    void (*notify)(Listener_8267A6B8 *self, void *a, void *b);
} ListenerVtbl_8267A6B8;
struct Listener_8267A6B8 { ListenerVtbl_8267A6B8 *vt; };

typedef struct List_8267A6B8 {
    Listener_8267A6B8 **items;
    unsigned int count;
} List_8267A6B8;

typedef struct Holder_8267A6B8 {
    unsigned char isList;
    void *p;
} Holder_8267A6B8;

#define LIST(s) ((List_8267A6B8 *)(s)->p)
#define ONE(s) ((Listener_8267A6B8 *)(s)->p)
void fn_8267A6B8(Holder_8267A6B8 *self, void *a, void *b)
{
    if (self->isList) {
        unsigned int i;
        for (i = 0; i < LIST(self)->count; i++) {
            Listener_8267A6B8 *l = LIST(self)->items[i];
            l->vt->notify(l, a, b);
        }
    } else if (ONE(self) != 0) {
        ONE(self)->vt->notify(ONE(self), a, b);
    }
}
