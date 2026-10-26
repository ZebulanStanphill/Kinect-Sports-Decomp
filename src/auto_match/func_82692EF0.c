typedef void (*code)(void *);
typedef struct { char pad[4]; int ***obj; char pad2[8]; unsigned int min; unsigned int max; int total; } Obj;

void fn_82692EF0(Obj *o, int base, unsigned int size, int *out_base, unsigned int *out_size)
{
  unsigned int s;

  s = size;
  if (size < 0x1000) {
    s = 0x1000;
  }
  if (size < o->min) {
    size = o->min;
  }
  if (size > o->max) {
    size = o->max;
  }
  if (size < s) {
    base = s + base;
  }
  *out_base = base;
  *out_size = size;
  o->total = o->total + base;
  (*(code *)(**o->obj + 1))(*o->obj);
}
