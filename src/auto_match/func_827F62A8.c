extern void fn_827F9F80(void *);
extern void fn_827FECE8(void *, float);
extern void fn_827FF330(void *);
typedef struct { char pad[0x24]; char sub[0x100]; void *f124; } O;
void fn_827F62A8(O *o, float f, unsigned char flag)
{
  fn_827F9F80(&o->sub);
  if (o->f124 != 0) fn_827FECE8(&o->f124, f);
  if (flag != 0) fn_827FF330(&o->sub);
}
