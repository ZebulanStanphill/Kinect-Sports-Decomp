typedef struct { int pad0; char *data; unsigned count; int pad1; unsigned live; } Obj_82E22190;
extern void fn_8265CA20(void *p);
extern void fn_82E22050(void *p);

void fn_82E22190(Obj_82E22190 *o)
{
  unsigned n;
  while (o->live != 0) {
    fn_82E22050(o);
  }
  n = o->count;
  if (n != 0) {
    int i = n << 2;
    do {
      i -= 4;
      n--;
      if (*(unsigned *)(o->data + i) != 0) fn_8265CA20(*(void **)(o->data + i));
    } while (n != 0);
  }
  if (o->data != 0) fn_8265CA20(o->data);
  o->count = 0;
  o->data = 0;
}
