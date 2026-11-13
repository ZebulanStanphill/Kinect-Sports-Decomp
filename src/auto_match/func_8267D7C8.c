#define __lwsync() __emit(0x7C2004AC)

long _InterlockedExchangeAdd(long volatile *addend, long value);

typedef struct Ref_8267D7C8 { long refs; } Ref_8267D7C8;
typedef struct Obj_8267D7C8 { int f0; int f4; Ref_8267D7C8 *ref; } Obj_8267D7C8;

extern void fn_8267EC58(Ref_8267D7C8 *r);

void fn_8267D7C8(Obj_8267D7C8 *self, Ref_8267D7C8 **out)
{
    if (self->ref != 0) {
        Ref_8267D7C8 *r = self->ref;
        __lwsync();
        _InterlockedExchangeAdd(&r->refs, 1);
        __lwsync();
        if (*out != 0) {
            fn_8267EC58(*out);
        }
        *out = r;
    }
}
