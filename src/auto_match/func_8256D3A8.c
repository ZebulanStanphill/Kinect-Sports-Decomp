extern unsigned strlen(const char *);
extern void *memcpy(unsigned char *, const unsigned char *, unsigned);
typedef struct E_8256D3A8 { int tag; char d[24]; } E_8256D3A8;
typedef struct O_8256D3A8 { char pad[0x18]; E_8256D3A8 e; } O_8256D3A8;
extern E_8256D3A8 *fn_827DE048(void *);
extern void fn_82811400(void *, int);
extern void fn_8256D798(void *, int, int);
extern void fn_8256D810(void *, const char *, unsigned);
O_8256D3A8 *fn_8256D3A8(O_8256D3A8 *o, const char *s)
{
  char t16[32];
  E_8256D3A8 e;
  E_8256D3A8 *src;
  E_8256D3A8 *q;
  src = fn_827DE048(t16);
  fn_82811400(e.d, 0x10);
  e.tag = src->tag;
  memcpy((unsigned char *)e.d, (unsigned char *)src->d, 0x18);
  q = &o->e;
  fn_82811400(q->d, 0x10);
  o->e.tag = e.tag;
  memcpy((unsigned char *)q->d, (unsigned char *)e.d, 0x18);
  fn_8256D798(o, 0, 0);
  fn_8256D810(o, s, strlen(s));
  return o;
}
