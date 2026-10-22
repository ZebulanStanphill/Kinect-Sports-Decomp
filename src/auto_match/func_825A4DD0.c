typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *self, int flags);
    void *pad[3];
    void (*m10)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct List {
    int f0;
    Obj **begin;
    Obj **end;
} List;

typedef struct Self {
    int f0;
    int f4;
    Obj *obj;
    int type;
    int f10;
    List *list;
} Self;

extern void fn_82522ED8(List *l);
extern void fn_82CE4118(Obj *o);

void fn_825A4DD0(Self *self)
{
    Obj **it;
    Obj **end;
    Obj *o;

    if (self->type == 2) {
        o = self->obj;
        if (o != 0) {
            o->vtbl->dtor(o, 1);
        }
    }
    it = self->list->begin;
    end = self->list->end;
    for (; it < end; it++) {
        (*it)->vtbl->m10(*it);
    }
    for (it = self->list->begin; it < end; it++) {
        fn_82CE4118(*it);
        fn_82CE4118(*it);
    }
    fn_82522ED8(self->list);
    self->list = 0;
}
