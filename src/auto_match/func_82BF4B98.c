typedef struct Obj_82BF4B98 Obj_82BF4B98;
typedef struct {
    void (*destroy)(Obj_82BF4B98 *, int);
} ObjVt_82BF4B98;
struct Obj_82BF4B98 { ObjVt_82BF4B98 *vt; };

typedef struct Factory_82BF4B98 Factory_82BF4B98;
typedef struct {
    void *f0;
    Obj_82BF4B98 *(*create)(Factory_82BF4B98 *);
} FactoryVt_82BF4B98;
struct Factory_82BF4B98 { FactoryVt_82BF4B98 *vt; };

extern void *fn_82BF45D8(Factory_82BF4B98 *self);
extern int fn_82BEEF40(Obj_82BF4B98 *obj, void *desc);

Obj_82BF4B98 *fn_82BF4B98(Factory_82BF4B98 *self, void *arg)
{
    Obj_82BF4B98 *obj;

    if (arg == 0) {
        return 0;
    }
    obj = self->vt->create(self);
    if (obj == 0) {
        return 0;
    }
    if (fn_82BEEF40(obj, fn_82BF45D8(self)) == 0) {
        obj->vt->destroy(obj, 1);
        return 0;
    }
    return obj;
}
