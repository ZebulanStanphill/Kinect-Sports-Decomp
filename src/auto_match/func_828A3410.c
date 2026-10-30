extern unsigned *fn_828A3290();

typedef struct { int f0; int f4; unsigned cap; unsigned head; unsigned count; } Ring_828A3410;
typedef struct { char pad[0x240]; Ring_828A3410 q; } Obj_828A3410;
typedef struct { unsigned char ok; char pad[3]; unsigned v; } Out_828A3410;

Out_828A3410 *fn_828A3410(Out_828A3410 *out, Obj_828A3410 *obj)
{
  unsigned v;
  Ring_828A3410 *q;
  unsigned h;
  if (obj->q.count == 0) {
    out->ok = 0;
    out->v = 0;
  } else {
    q = &obj->q;
    v = *fn_828A3290(q, 0);
    if (q->count != 0) {
      h = q->head + 1;
      q->head = h;
      if ((q->cap << 2) <= h) {
        q->head = 0;
      }
      q->count = q->count - 1;
      if (q->count == 0) {
        q->head = 0;
      }
    }
    out->v = v;
    out->ok = 1;
  }
  return out;
}
