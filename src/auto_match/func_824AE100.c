typedef struct {
  unsigned begin;
  unsigned end;
  unsigned cur;
  unsigned pad;
  unsigned count;
} Ring_func_824AE100;

typedef struct {
  int pad0;
  Ring_func_824AE100 r;
  int pad1;
  unsigned char a, b;
} Queue_func_824AE100;

typedef struct {
  char pad[0x3c];
  Queue_func_824AE100 *q;
} Obj_func_824AE100;

int fn_824AE100(Obj_func_824AE100 *o)
{
  Queue_func_824AE100 *q = o->q;
  Ring_func_824AE100 *r = &q->r;
  unsigned *pc = &r->cur;
  unsigned i = 0;
  while (i < r->count) {
    i++;
    *pc += 0x40;
    if (*pc == r->end)
      *pc = r->begin;
  }
  r->count = 0;
  o->q->a = 0;
  o->q->b = 1;
  return 0;
}
