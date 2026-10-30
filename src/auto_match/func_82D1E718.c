typedef int (*code)();
extern int fn_82CE5410();

typedef struct { int *data; int size; int cap; } Arr_82D1E718;
typedef struct { Arr_82D1E718 a; Arr_82D1E718 b; } Obj_82D1E718;

void fn_82D1E718(Obj_82D1E718 *p)
{
  Arr_82D1E718 *s = &p->b;
  int *h;
  h = *(int **)(fn_82CE5410() + 0x10);
  s->size = 0;
  if ((s->cap & (int)0x80000000) == 0) {
    (*(code *)(*h + 0x10))(h, s->data, s->cap & 0x3fffffff, 4);
  }
  s->data = 0;
  s->cap = 0x80000000;
  h = *(int **)(fn_82CE5410() + 0x10);
  p->a.size = 0;
  if ((p->a.cap & (int)0x80000000) == 0) {
    (*(code *)(*h + 0x10))(h, p->a.data, p->a.cap & 0x3fffffff, 0x30);
  }
  p->a.data = 0;
  p->a.cap = 0x80000000;
}
