long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Deletable_82BF5F50 Deletable_82BF5F50;
typedef struct DeletableVtbl_82BF5F50 {
    void (*Delete)(Deletable_82BF5F50 *self, int flags);
} DeletableVtbl_82BF5F50;
struct Deletable_82BF5F50 {
    DeletableVtbl_82BF5F50 *vt;
};

typedef struct Node_82BF5F50 {
    int pad00[2];
    Deletable_82BF5F50 *value;
} Node_82BF5F50;

typedef struct List_82BF5F50 {
    int pad00[2];
    int count;
} List_82BF5F50;

typedef struct Obj_82BF5F50 {
    void *vtbl;
    int pad04[0x13];
    long state;
    List_82BF5F50 *nodes;
    List_82BF5F50 *listA;
    int pad5c;
    List_82BF5F50 *listB;
    int pad64;
    List_82BF5F50 *listC;
} Obj_82BF5F50;

extern Node_82BF5F50 *fn_82BE5340(List_82BF5F50 *list);
extern Node_82BF5F50 *fn_82BE5350(List_82BF5F50 *list);
extern Deletable_82BF5F50 *fn_82BE5378(List_82BF5F50 *list);
extern void fn_82BE5478(List_82BF5F50 *list);
extern void fn_82BE54C0(List_82BF5F50 *list);
extern void fn_82BE56C0(List_82BF5F50 *list);
extern void fn_82BE5998(Obj_82BF5F50 *self);
extern char lbl_820EBAA4[];

static void FreeList(List_82BF5F50 *list)
{
    if (list != 0) {
        fn_82BE54C0(list);
        fn_82BE56C0(list);
    }
}

void fn_82BF5F50(Obj_82BF5F50 *self)
{
    self->vtbl = lbl_820EBAA4;
    if (_InterlockedCompareExchange(&self->state, 0, 1) != 0) {
        if (self->nodes != 0) {
            Node_82BF5F50 *n;
            for (n = fn_82BE5340(self->nodes); n != 0; n = fn_82BE5350(self->nodes)) {
                Deletable_82BF5F50 *d = n->value;
                if (d != 0) {
                    d->vt->Delete(d, 1);
                }
            }
            fn_82BE5478(self->nodes);
            FreeList(self->nodes);
            self->nodes = 0;
        }
        if (self->listA != 0) {
            fn_82BE5340(self->listA);
            while (self->listA->count != 0) {
                Deletable_82BF5F50 *d = fn_82BE5378(self->listA);
                if (d != 0) {
                    d->vt->Delete(d, 1);
                }
                fn_82BE5350(self->listA);
            }
            fn_82BE5478(self->listA);
            FreeList(self->listA);
            self->listA = 0;
        }
        if (self->listB != 0) {
            fn_82BE5340(self->listB);
            while (self->listB->count != 0) {
                Deletable_82BF5F50 *d = fn_82BE5378(self->listB);
                if (d != 0) {
                    d->vt->Delete(d, 1);
                }
                fn_82BE5350(self->listB);
            }
            fn_82BE5478(self->listB);
            FreeList(self->listB);
            self->listB = 0;
        }
        if (self->listC != 0) {
            fn_82BE5340(self->listC);
            while (self->listC->count != 0) {
                Deletable_82BF5F50 *d = fn_82BE5378(self->listC);
                if (d != 0) {
                    d->vt->Delete(d, 1);
                }
                fn_82BE5350(self->listC);
            }
            fn_82BE5478(self->listC);
            FreeList(self->listC);
            self->listC = 0;
        }
    }
    fn_82BE5998(self);
}
