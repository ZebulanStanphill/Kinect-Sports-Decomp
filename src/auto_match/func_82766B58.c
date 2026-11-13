typedef struct Listener_82766B58 Listener_82766B58;
typedef struct ListenerVtbl_82766B58 {
    void *f0;
    void (*notify)(Listener_82766B58 *self, void *sender);
} ListenerVtbl_82766B58;
struct Listener_82766B58 { ListenerVtbl_82766B58 *vt; };

typedef struct List_82766B58 {
    Listener_82766B58 **items;
    unsigned int count;
} List_82766B58;

typedef struct Target_82766B58 Target_82766B58;
typedef struct TargetVtbl_82766B58 {
    void *f0;
    void *f4;
    void (*release)(Target_82766B58 *self, void *cookie);
} TargetVtbl_82766B58;
struct Target_82766B58 { TargetVtbl_82766B58 *vt; };

typedef struct Obj_82766B58 {
    void *vt;
    int pad4[2];
    void *refC;
    void *ref10;
    int pad14;
    Target_82766B58 *target;
    void *cookie;
    unsigned char isList;
    void *listeners;
} Obj_82766B58;

extern void fn_8267C498(void *p);
extern void fn_8267C4F0(void *p);
extern char lbl_8200BD80[];
extern char lbl_82014C60[];

#define LIST(s) ((List_82766B58 *)(s)->listeners)
#define ONE(s) ((Listener_82766B58 *)(s)->listeners)
void fn_82766B58(Obj_82766B58 *self)
{
    self->vt = lbl_82014C60;
    if (self->isList) {
        unsigned int i;
        for (i = 0; i < LIST(self)->count; i++) {
            Listener_82766B58 *l = LIST(self)->items[i];
            l->vt->notify(l, self);
        }
    } else if (ONE(self) != 0) {
        ONE(self)->vt->notify(ONE(self), self);
    }
    if (self->target != 0) {
        self->target->vt->release(self->target, self->cookie);
    }
    if (self->ref10 != 0) {
        fn_8267C498(self->ref10);
    }
    if (self->refC != 0) {
        fn_8267C4F0(self->refC);
    }
    self->vt = lbl_8200BD80;
}
