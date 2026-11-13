// Constructor of a Scaleform-side object that holds a string built from `text`
// (passed through fn_8268CAB0), two flag bits and a reference-counted target.
#include "game/String_8268C510.h"

struct Obj_8276A6E8 {
    void *vt;
    int refs;
    void *target;
    String_8268C510 name;
    unsigned int flags;
};

extern "C" {
void fn_8268B330(String_8268C510 *s);
String_8268C510 fn_8268CAB0(const String_8268C510 &s);
void fn_8268BA10(String_8268C510 *dst, const String_8268C510 &src);
void fn_8267C4C8(void *p);
void fn_8267C4F0(void *p);
extern char lbl_82014EF8[];
}

extern "C" Obj_8276A6E8 *fn_8276A6E8(Obj_8276A6E8 *self, const char *text, unsigned int flags, void *target)
{
    self->refs = 1;
    self->vt = lbl_82014EF8;
    self->target = 0;
    fn_8268B330(&self->name);
    fn_8268BA10(&self->name, fn_8268CAB0(String_8268C510(text)));
    self->flags = flags & 3;
    if (target != 0) {
        fn_8267C4C8(target);
    }
    if (self->target != 0) {
        fn_8267C4F0(self->target);
    }
    self->target = target;
    return self;
}
