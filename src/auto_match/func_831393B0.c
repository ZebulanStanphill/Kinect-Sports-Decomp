typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float v[4]; } __vector4;
extern __vector4 __lvlx(const void *, unsigned);
extern __vector4 __vspltw(__vector4, unsigned);
extern __vector4 lbl_83263150;
void fn_831393B0(void) { float value = 0.5f; lbl_83263150 = __vspltw(__lvlx(&value, 0), 0); }
