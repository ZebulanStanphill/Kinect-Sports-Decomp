extern void fn_82C09F08(void **out);
extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void *memset(void *, int, unsigned int);

typedef struct {
  char pad0[0x188];
  int initialised;
  char pad18c[0x270 - 0x18c];
} Obj_82C0A1A0;

int fn_82C0A1A0(Obj_82C0A1A0 **out)
{
  Obj_82C0A1A0 *o;
  if (out == 0)
    return 2;
  fn_82C09F08((void **)out);
  o = (Obj_82C0A1A0 *)fn_8265C940(0x270, 0x248c8000);
  if (o == 0)
    return 1;
  memset(o, 0, 0x270);
  o->initialised = 1;
  *out = o;
  return 0;
}
