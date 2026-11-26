#include "havok/hkUFloat8.h"

extern "C" {
/* Static initialiser of a Havok global: an hkUFloat8 member set from 1.0f through
   hkUFloat8::operator=, then a float limit. */
typedef struct Global_83183E64 {
    char pad[0xc];
    hkUFloat8 uf8;
    char pad0d[3];
    float limit;
} Global_83183E64;

extern Global_83183E64 lbl_83183E64;

void fn_831323F0(void)
{
    float one = 1.0f;
    lbl_83183E64.uf8 = one;
    lbl_83183E64.limit = 3.40282002e+38f;
}
}
