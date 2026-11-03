extern void fn_822315A0(unsigned);
extern void fn_82359C18(void *);
extern void fn_828E3228(void *);
extern void fn_828E32A0(void *);
extern int lbl_821968A4;
extern int lbl_821982D0;
static __forceinline void SubDtor(char *s)
{
  fn_82359C18(s + 0x50);
  fn_82359C18(s + 0x38);
  fn_828E32A0(s);
}
void fn_82257468(unsigned *p)
{
  char *b;
  *p = (unsigned)&lbl_821982D0;
  p[10] = (unsigned)&lbl_821968A4;
  SubDtor((char *)p + 0xa8);
  b = (char *)p + 0x30;
  if (p[0x29] != 0) fn_822315A0(p[0x29]);
  if (*(unsigned *)(b + 0x6c) != 0) fn_822315A0(*(unsigned *)(b + 0x6c));
  SubDtor(b);
  fn_828E3228(p);
}
