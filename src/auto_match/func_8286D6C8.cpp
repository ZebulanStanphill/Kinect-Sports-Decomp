// Creates an R1::Soundscape::Maths::mathSpring_c, limits its target to [-96, 12] and appends it
// to the owner's spring list.
#include "R1/Soundscape/Maths/Spring.h"

extern "C" void *fn_8265C9E0(unsigned int size);
extern "C" void fn_8257A9F0(void *list, R1::Soundscape::Maths::Spring_i *const *spring);
extern "C" const float lbl_8201FBC8;
extern "C" const float lbl_82186E64;

inline void *operator new(unsigned int, void *where) throw() { return where; }

// Spring.h declares slot 0x24 without a signature; mathSpringBase_c's implementation
// (fn_8287A428) stores the smallest and largest target and sets the limit flag.
struct SpringLimits_8286D6C8 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void setTargetLimits(float smallest, float largest);
};

struct Owner_8286D6C8 {
    int pad0;
    int springs[3];
};

extern "C" R1::Soundscape::Maths::Spring_i *fn_8286D6C8(Owner_8286D6C8 *self,
    const R1::Soundscape::AudioVariant_c &name, float position, float target, float stiffness)
{
    void *mem = fn_8265C9E0(0x58);
    R1::Soundscape::Maths::Spring_i *spring =
        mem ? new (mem) R1::Soundscape::Maths::mathSpring_c(name, position, target, stiffness) : 0;
    if (spring != 0) {
        ((SpringLimits_8286D6C8 *)spring)->setTargetLimits(lbl_8201FBC8, lbl_82186E64);
        fn_8257A9F0(self->springs, &spring);
    }
    return spring;
}
