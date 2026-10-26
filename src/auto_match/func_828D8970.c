typedef struct { char pad[0x24]; int n; } T;
typedef struct { char pad[0x6c]; T *t; } S;

void fn_828D8970(S *p)
{
  T *t = p->t;
  t->n++;
}
