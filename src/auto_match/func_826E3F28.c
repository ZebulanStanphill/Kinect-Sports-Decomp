extern char lbl_82196582[];
extern void fn_8268B8E8(unsigned *, char *);
typedef struct Object_826E3F28 { unsigned p0, p4, p8; short pc; unsigned p10, p14, p18; } Object_826E3F28;
void fn_826E3F28(Object_826E3F28 *o, short a, unsigned b, char *s2, char *s1, unsigned c)
{
  o->pc = a;
  o->p0 = b;
  if (s1 == 0) s1 = lbl_82196582;
  fn_8268B8E8(&o->p14, s1);
  fn_8268B8E8(&o->p18, s2 != 0 ? s2 : lbl_82196582);
  o->p10 = c;
  o->p8 = (o->p18 & 0xfffffffc) + 8;
  o->p4 = (o->p14 & 0xfffffffc) + 8;
}
