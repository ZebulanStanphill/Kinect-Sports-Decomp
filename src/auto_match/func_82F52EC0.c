typedef struct Obj_82F52EC0 { int f00; unsigned int id; } Obj_82F52EC0;
extern void *fn_82F4EBC0(unsigned char id);
extern float fn_82F4ED08(void *p);
extern int fn_8240D5F0(void *p);
extern void fn_82F52E10(Obj_82F52EC0 *o, int a, float v);

void fn_82F52EC0(Obj_82F52EC0 *o)
{
  void *p = fn_82F4EBC0((unsigned char)o->id);
  if (p != 0) {
    fn_82F52E10(o, fn_8240D5F0(p), fn_82F4ED08(p));
  }
}
