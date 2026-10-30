extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE8350();
typedef struct Elem { int a; unsigned char b; int c; } Elem;
typedef struct Arr { Elem *data; int size; int cap; } Arr;
typedef struct Obj { char pad[0x188]; Arr arr; } Obj;
typedef struct Alloc { int p[4]; int heap; } Alloc;

void fn_82CE8920(Obj *param_1, int param_2, unsigned char param_3, int param_4)
{
  Arr *l = &param_1->arr;
  Alloc *al = (Alloc *)fn_82CE5410();
  Elem *e;
  if (l->size == (l->cap & 0x3fffffff)) fn_82CE63B0(al->heap, l, 0xc);
  e = l->data + l->size;
  l->size++;
  e->a = param_2;
  e->b = param_3;
  e->c = param_4;
  fn_82CE8350(param_1);
}
