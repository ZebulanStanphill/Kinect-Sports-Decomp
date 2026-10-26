extern void fn_8268B508(void *s, const char *str, unsigned int len);
extern void fn_8268BEA8(void *s);
extern unsigned int fn_826BCDE8(const char *str);

typedef struct { char pad[0x10]; char str[0x1a]; unsigned short flags; } S;

void fn_8278B138(S *p, const char *str, unsigned int len)
{
  if ((int)len == -1)
    len = fn_826BCDE8(str);
  fn_8268BEA8(p->str);
  fn_8268B508(p->str, str, len);
  p->flags |= 0x100;
}
