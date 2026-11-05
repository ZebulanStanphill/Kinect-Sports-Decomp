extern void fn_822315A0(void *);
extern void fn_822511E0(void *);
extern void fn_82251390(void *);
extern void fn_82359C18(void *);
extern void fn_828E3228(void *);
extern void fn_828E32A0(void *);
typedef struct { char b0[0x38]; char b38[0x18]; char b50[0x18]; } Sub_82241178;
static __forceinline void SubDtor_82241178(Sub_82241178 *s)
{
  fn_82359C18(s->b50);
  fn_82359C18(s->b38);
  fn_828E32A0(s);
}
typedef struct {
  char pad0[0x28]; Sub_82241178 s28; char padA[4]; void *m94; Sub_82241178 s98; char padB[4];
  void *m104; char m108[0x190 - 0x108]; Sub_82241178 s190; 
  char m1f8[0x278 - 0x1f8]; Sub_82241178 s278;
} Obj_82241178;
void fn_82241178(Obj_82241178 *o)
{
  Sub_82241178 *s;
  SubDtor_82241178(&o->s278);
  fn_822511E0(o->m1f8);
  SubDtor_82241178(&o->s190);
  fn_82251390(o->m108);
  s = &o->s98;
  if (o->m104 != 0) fn_822315A0(o->m104);
  SubDtor_82241178(s);
  s = &o->s28;
  if (o->m94 != 0) fn_822315A0(o->m94);
  SubDtor_82241178(s);
  fn_828E3228(o);
}
