typedef struct Obj_82958950 { char pad[0x110]; unsigned int *data; unsigned int size; unsigned int cap; } Obj_82958950;
extern void *fn_8265C940(unsigned int, int);
extern void fn_8265C990(void *, int);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82958950(Obj_82958950 *o, int n)
{
  unsigned int cap;
  unsigned int oldcap = o->cap;
  void *buf;
  cap = oldcap ? oldcap : 0x400;
  while (n + o->size > cap) {
    cap = cap << 1;
  }
  if (cap != oldcap) {
    buf = fn_8265C940(cap * 4, 0x24810000);
    if (buf == 0) {
      return 0x8007000e;
    }
    memcpy(buf, o->data, o->size * 4);
    fn_8265C990(o->data, 0x24810000);
    o->data = buf;
    o->cap = cap;
  }
  return 0;
}
