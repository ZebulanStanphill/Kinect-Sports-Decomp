typedef struct Obj_82BF1AE0 Obj_82BF1AE0;

typedef struct ObjVtbl_82BF1AE0 {
    void *slot0;
    void *(*get)(Obj_82BF1AE0 *self);
} ObjVtbl_82BF1AE0;

struct Obj_82BF1AE0 {
    ObjVtbl_82BF1AE0 *vt;
};

typedef struct Holder_82BF1AE0 {
    int pad0[2];
    Obj_82BF1AE0 *obj;
} Holder_82BF1AE0;

typedef struct Self_82BF1AE0 {
    int pad0[4];
    int state;
    int pad14[6];
    Holder_82BF1AE0 holder;
    int pad38[11];
    int count;
} Self_82BF1AE0;

extern void fn_82BF1A18(void);
extern int fn_82BE8C38(void *target, void *callback);
extern int fn_82BF0EB0(Self_82BF1AE0 *self);

static __forceinline void *Get_82BF1AE0(Holder_82BF1AE0 *h)
{
    if (h->obj != 0)
        return h->obj->vt->get(h->obj);
    return 0;
}

int fn_82BF1AE0(Self_82BF1AE0 *self)
{
    self->count++;
    if (self->state >= 0x15)
        return 0;
    self->state = 0x15;
    if (fn_82BE8C38(Get_82BF1AE0(&self->holder), fn_82BF1A18) != 0)
        return 0;
    return fn_82BF0EB0(self);
}
