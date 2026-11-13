// Creates an R1::Soundscape::Maths::mathSpring_c and appends it to the owner's spring list.
#include "R1/Soundscape/Maths/Spring.h"

extern "C" void *fn_8265C9E0(unsigned int size);
extern "C" void fn_8257A9F0(void *list, R1::Soundscape::Maths::Spring_i *const *spring);

inline void *operator new(unsigned int, void *where) throw() { return where; }

struct Owner_8286D788 {
    int pad0;
    int springs[3];
};

extern "C" R1::Soundscape::Maths::Spring_i *fn_8286D788(Owner_8286D788 *self,
    const R1::Soundscape::AudioVariant_c &name, float position, float target,
    float unused3, float unused4, float stiffness)
{
    void *mem = fn_8265C9E0(0x58);
    R1::Soundscape::Maths::Spring_i *spring =
        mem ? new (mem) R1::Soundscape::Maths::mathSpring_c(name, position, target, stiffness) : 0;
    if (spring != 0) {
        fn_8257A9F0(self->springs, &spring);
    }
    return spring;
}
