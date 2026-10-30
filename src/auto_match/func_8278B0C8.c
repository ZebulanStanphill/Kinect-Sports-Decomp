extern unsigned strlen(const char *);
extern void fn_8268BEA8(void *);
extern void fn_8268B610(void *, const char *, unsigned);

typedef struct Obj_8278B0C8 { char pad[0x10]; char sub[0x1a]; unsigned short flags; } Obj_8278B0C8;

void fn_8278B0C8(Obj_8278B0C8 *o, const char *s, unsigned n)
{
  if (n == 0xffffffff) {
    n = strlen(s);
  }
  fn_8268BEA8(o->sub);
  fn_8268B610(o->sub, s, n);
  o->flags |= 0x100;
}
