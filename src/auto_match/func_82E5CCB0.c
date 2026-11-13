extern void fn_82E4FE40(void *);
extern void *fn_82E50BE8(unsigned, int, int, int, int);
extern void *memcpy(void *, const void *, unsigned);

typedef struct Obj_82E5CCB0 {
  char pad[0x80];
  void *data;
  unsigned size;
} Obj_82E5CCB0;

int fn_82E5CCB0(Obj_82E5CCB0 *o, void *src, unsigned n)
{
  if (src == 0 && n != 0) return 0x80070057;
  if (o->data != 0) fn_82E4FE40(o->data);
  o->data = 0;
  o->size = 0;
  if (src != 0) {
    o->data = fn_82E50BE8(n, 0, 0, 0, 0);
    if (o->data == 0) return 0x8007000e;
    memcpy(o->data, src, n);
    o->size = n;
  }
  return 0;
}

