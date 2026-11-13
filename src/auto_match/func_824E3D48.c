typedef struct { int m0; int m4; int m8; int mc; int m10; unsigned m14; } S_824E3D48;
typedef struct { int pad[0x28]; int ma0; } T_824E3D48;
extern int fn_8226FDB8(unsigned, int);
extern T_824E3D48 *fn_82270B70(void);
extern S_824E3D48 *fn_824E3740(void);
extern void fn_8251D888(void);
extern int lbl_8327F644[];

void fn_824E3D48(void)
{
  S_824E3D48 *s;
  s = fn_824E3740();
  if (s->m14 != 0) {
    if (fn_8226FDB8(s->m14, 0) == 0 || fn_82270B70()->ma0 == 4) {
      s->m14 = 0;
    }
  }
  if (s->m4 != 0 && s->m14 == 0) {
    if (lbl_8327F644[10] > 0) {
      if (--lbl_8327F644[10] == 0) fn_8251D888();
    }
    s->m4 = 0;
  }
}
