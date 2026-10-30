extern void *fn_8265C9E0(unsigned int);
extern void fn_82F63AC0(void *);

void **fn_82F624E8(void **p)
{
  *p = fn_8265C9E0(0x1c);
  fn_82F63AC0(*p);
  return p;
}
