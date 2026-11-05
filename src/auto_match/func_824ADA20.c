typedef struct {
  unsigned begin;
  unsigned end;
  unsigned cur;
  unsigned pad;
  unsigned count;
} Ring_func_824ADA20;

typedef struct {
  int pad0;
  Ring_func_824ADA20 r;
  int pad1;
  unsigned char a, b;
} Queue_func_824ADA20;

typedef struct {
  char pad[0x3c];
  Queue_func_824ADA20 *q;
} Obj_func_824ADA20;

int fn_824ADA20(Obj_func_824ADA20 *o)
{
  Queue_func_824ADA20 *q = o->q;
  Ring_func_824ADA20 *r = &q->r;
  unsigned *pc = &r->cur;
  unsigned i = 0;
  while (i < r->count) {
    i++;
    *pc += 0x60;
    if (*pc == r->end)
      *pc = r->begin;
  }
  r->count = 0;
  o->q->a = 0;
  o->q->b = 1;
  return 0;
}
