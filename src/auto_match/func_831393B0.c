typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float v[4]; } __vector4;
extern __vector4 __lvlx(const void *, unsigned);
extern __vector4 __vspltw(__vector4, unsigned);
extern const float lbl_82002C5C;
extern __vector4 lbl_83263150;
void fn_831393B0(void) { lbl_83263150 = __vspltw(__lvlx(&lbl_82002C5C, 0), 0); }
