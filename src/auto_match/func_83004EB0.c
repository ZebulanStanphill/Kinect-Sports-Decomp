typedef struct Handler_83004EB0 Handler_83004EB0;

typedef struct {
    void *slot0;
    int (*Handle)(Handler_83004EB0 *self, int a, int b, int c);
} HandlerVtbl_83004EB0;

struct Handler_83004EB0 {
    HandlerVtbl_83004EB0 *vt;
};

typedef struct {
    int id;
    Handler_83004EB0 *handler;
    int extra;
} Entry_83004EB0;

typedef struct {
    char pad[0x28];
    Entry_83004EB0 *entries;
} Obj_83004EB0;

int fn_83004EB0(Obj_83004EB0 *self, int unused, int index, int a, int b, int c)
{
    Entry_83004EB0 *e;

    if (self->entries == 0) {
        return 2;
    }
    e = &self->entries[index + 1];
    if (e->handler == 0) {
        return 0x1f;
    }
    return e->handler->vt->Handle(e->handler, a, b, c);
}
