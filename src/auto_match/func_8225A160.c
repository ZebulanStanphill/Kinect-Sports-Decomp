typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* v77 is the game's reserved zero vector, read with __VMXGetReg (/QVMXReserve). */
__vector4 __VMXGetReg(int n);

extern void *fn_8265C9E0(unsigned int size);
extern void fn_824D4DC8(void *p, void *a);
extern char lbl_821C1240[];
extern char lbl_821C112C[];

typedef struct {
  void *vt;
  char pad04[0x64];
  void *vt2;
  char pad6c[0x960 - 0x6c];
  unsigned char b960;
  unsigned char b961;
  char pad962[0xe];
  __vector4 vec;
  float f;
  char pad984[0xc];
} Obj_8225A160;

Obj_8225A160 *fn_8225A160(void *a)
{
  Obj_8225A160 *p = fn_8265C9E0(0x990);
  if (p != 0) {
    fn_824D4DC8(p, a);
    p->f = 0.0f;
    p->vt = lbl_821C1240;
    p->vt2 = lbl_821C112C;
    p->vec = __VMXGetReg(77);
    p->b960 = 0;
    p->b961 = 0;
    return p;
  }
  return 0;
}
