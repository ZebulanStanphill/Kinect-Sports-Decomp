typedef struct { int f0; int f4; char pad[0x58]; } Elem_82E00C10;
typedef struct { Elem_82E00C10 *data; int size; int cap; } Arr_82E00C10;
typedef struct { char pad[0x10]; Arr_82E00C10 arr; } Obj_82E00C10;
typedef struct { char pad[0x1c]; struct { char pad[0x20]; unsigned char n; } *info; } Src_82E00C10;
typedef struct { char pad[0x10]; void *alloc; } Alloc_82E00C10;
extern Alloc_82E00C10 *fn_82CE5410(void);
extern void fn_82CE6310(void *, Arr_82E00C10 *, int, int);
extern void fn_82CE4040(int);

void fn_82E00C10(Obj_82E00C10 *o, Src_82E00C10 *s, int **items)
{
  Arr_82E00C10 *a = &o->arr;
  int n = s->info->n;
  void *al = fn_82CE5410()->alloc;
  int cap = a->cap & 0x3fffffff;
  unsigned char i;
  if (cap < n) {
    fn_82CE6310(al, a, n < cap * 2 ? cap * 2 : n, 0x60);
  }
  a->size = n;
  if (n > 0) {
    for (i = 0; i < n; i++) {
      a->data[i].f4 = (*items)[i];
      fn_82CE4040((*items)[i]);
    }
  }
}
