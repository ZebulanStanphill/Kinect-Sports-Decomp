typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg. */
__vector4 __VMXGetReg(int n);

extern void fn_82517DC8(void *p);
extern void fn_825ACAC8(void *p);
extern char lbl_821AD0A8[];
extern char lbl_821AD0F4[];
extern float lbl_821CC160;

typedef struct {
  void *vt;
  char pad04[0x64];
  void *vt2;
  char pad6c[0x14];
  unsigned char b80, b81, b82, b83;
  unsigned char b84;
  char pad85[0xb];
  __vector4 vec;
  float f;
  char sub[0x18];
  int value;
} Obj_822CA318;

Obj_822CA318 *fn_822CA318(Obj_822CA318 *s)
{
  fn_82517DC8(s);
  s->vt = lbl_821AD0A8;
  s->vt2 = lbl_821AD0F4;
  fn_825ACAC8(s->sub);
  s->value = 0;
  s->f = lbl_821CC160;
  s->b82 = 0;
  s->b83 = 0;
  s->vec = __VMXGetReg(77);
  s->b84 = 0;
  return s;
}
