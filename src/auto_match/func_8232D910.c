typedef struct Vt_8232D910 {
    void *slots[5];
    void (*Notify)(struct Obj_8232D910 *self, int oldState, int newState);
} Vt_8232D910;

typedef struct Obj_8232D910 {
    Vt_8232D910 *vt;
    int pad4;
    int state;
} Obj_8232D910;

typedef struct Cfg_8232D910 {
    char pad[0x4e0];
    float scale;
    float pad4e4;
    float range;
} Cfg_8232D910;

typedef struct Self_8232D910 {
    int pad0;
    int pad4;
    Cfg_8232D910 *cfg;
    Obj_8232D910 *obj;
    float cur;
    float base;
} Self_8232D910;

extern char lbl_83265A28[];
extern int fn_82520780(char *name, float value);
extern void fn_8232C528(Obj_8232D910 *obj, int flag);

void fn_8232D910(Self_8232D910 *self, int param_2)
{
    float v;
    Obj_8232D910 *o;
    int old;
    int n;

    v = ((self->cur - self->base) / self->cfg->scale) * self->cfg->range + self->base;
    if (self->obj->state == 2 && fn_82520780(lbl_83265A28, v) != 0) {
        o = self->obj;
        n = (param_2 == 0);
        old = o->state;
        o->state = n;
        o->vt->Notify(o, old, n);
        fn_8232C528(self->obj, 1);
    }
}
