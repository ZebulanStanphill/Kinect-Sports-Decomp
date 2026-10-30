typedef struct { char pad0[0x168]; char sub[0x38]; char b38[0x18]; char b50[0x18]; } Dummy_822333A0;
typedef struct { char pad0[0x28]; char s28[0x98]; char sc0[0xa8]; char s168[0x38]; char s1a0[0x18]; char s1b8[0x1c]; void *f1d4; char s1d8[0x90]; char s268[1]; } Obj_822333A0;
extern void fn_822315A0(void *p);
extern void fn_822334D0(void *p);
extern void fn_82233570(void *p);
extern void fn_82251300(void *p);
extern void fn_82255790(void *p);
extern void fn_82359C18(void *p);
extern void fn_828E3228(void *p);
extern void fn_828E32A0(void *p);

void fn_822333A0(Obj_822333A0 *o)
{
  char *s;
  fn_82233570(o->s268);
  fn_82251300(o->s1d8);
  s = o->s168;
  if (o->f1d4 != 0) fn_822315A0(o->f1d4);
  fn_82359C18(s + 0x50);
  fn_82359C18(s + 0x38);
  fn_828E32A0(s);
  fn_82255790(o->sc0);
  fn_822334D0(o->s28);
  fn_828E3228(o);
}
