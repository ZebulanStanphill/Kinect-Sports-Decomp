#include "xdk/vectorintrinsics.h"

extern __vector4 lbl_83263150;
void fn_831393B0(void) { float value = 0.5f; lbl_83263150 = __vspltw(__lvlx(&value, 0), 0); }
