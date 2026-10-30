typedef int (*code)();
extern int fn_82CE5410();

typedef struct { int *data; int size; int cap; } Arr_82DFEBB0;
typedef struct { Arr_82DFEBB0 a; Arr_82DFEBB0 b; } Obj_82DFEBB0;

void fn_82DFEBB0(Obj_82DFEBB0 *p)
{
  Arr_82DFEBB0 *s = &p->b;
  int *h;
  h = *(int **)(fn_82CE5410() + 0x10);
  s->size = 0;
  if ((s->cap & (int)0x80000000) == 0) {
    (*(code *)(*h + 0x10))(h, s->data, s->cap & 0x3fffffff, 1);
  }
  s->data = 0;
  s->cap = 0x80000000;
  h = *(int **)(fn_82CE5410() + 0x10);
  p->a.size = 0;
  if ((p->a.cap & (int)0x80000000) == 0) {
    (*(code *)(*h + 0x10))(h, p->a.data, p->a.cap & 0x3fffffff, 4);
  }
  p->a.data = 0;
  p->a.cap = 0x80000000;
}
