typedef struct Listener_8267A538 Listener_8267A538;
typedef struct ListenerVtbl_8267A538 {
    void *f0;
    void (*notify)(Listener_8267A538 *self, void *a, void *b);
} ListenerVtbl_8267A538;
struct Listener_8267A538 { ListenerVtbl_8267A538 *vt; };

typedef struct List_8267A538 {
    Listener_8267A538 **items;
    unsigned int count;
} List_8267A538;

typedef struct Holder_8267A538 {
    unsigned char isList;
    void *p;
} Holder_8267A538;

typedef struct Obj_8267A538 Obj_8267A538;
typedef struct ObjVtbl_8267A538 {
    void *slots[7];
    void *(*get)(Obj_8267A538 *self);
} ObjVtbl_8267A538;
struct Obj_8267A538 {
    ObjVtbl_8267A538 *vt;
    char pad4[0x10];
    Holder_8267A538 listeners;
};

#define LIST(s) ((List_8267A538 *)(s)->p)
#define ONE(s) ((Listener_8267A538 *)(s)->p)
void fn_8267A538(Obj_8267A538 *self, void *b)
{
    void *a = self->vt->get(self);
    if (self->listeners.isList) {
        unsigned int i;
        for (i = 0; i < LIST(&self->listeners)->count; i++) {
            Listener_8267A538 *l = LIST(&self->listeners)->items[i];
            l->vt->notify(l, a, b);
        }
    } else if (ONE(&self->listeners) != 0) {
        ONE(&self->listeners)->vt->notify(ONE(&self->listeners), a, b);
    }
}
