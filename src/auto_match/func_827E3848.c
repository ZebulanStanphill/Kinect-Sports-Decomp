typedef struct { char *base; char pad[0x58]; unsigned char count; } Obj_827E3848;
extern int fn_827E8478(void *a, void *b, void *c);

int fn_827E3848(Obj_827E3848 *o, void *x, int idx)
{
  int sum = 0;
  int i;
  for (i = idx + 1; i < o->count; i++) {
    sum += fn_827E8478(i * 0x40 + o->base, x, o->base + idx * 0x40);
  }
  return sum;
}
