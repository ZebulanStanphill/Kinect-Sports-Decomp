#include "havok/hkClass.h"

extern "C" {

typedef struct { void *p; } RefPtr_82E14500;
typedef struct {
    hkStringPtr name;
    hkStringPtr className;
    RefPtr_82E14500 object;
} Obj_82E14500;

extern void fn_82CED628(hkStringPtr *self, const char *s);
extern void fn_830825B8(RefPtr_82E14500 *self, void *obj, void *extra);
extern void *fn_83082610(RefPtr_82E14500 *self);

Obj_82E14500 *fn_82E14500(Obj_82E14500 *self, const char *name, void *obj, void *extra)
{
    fn_82CED2F8(&self->name);
    fn_82CED2F8(&self->className);
    self->object.p = 0;
    fn_82CED628(&self->name, name);
    fn_830825B8(&self->object, obj, extra);
    if (fn_83082610(&self->object) != 0) {
        fn_82CED628(&self->className, ((const hkClass *)(fn_83082610(&self->object)))->getName());
    } else {
        fn_82CED628(&self->className, 0);
    }
    return self;
}

}
