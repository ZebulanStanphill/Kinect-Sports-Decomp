typedef struct Elem_828E2588 { int f0; char pad[0x18]; } Elem_828E2588;
typedef struct Vec_828E2588 { Elem_828E2588 *first; Elem_828E2588 *last; Elem_828E2588 *end; } Vec_828E2588;
typedef struct Iter_828E2588 { Elem_828E2588 *ptr; } Iter_828E2588;
typedef struct Self_828E2588 {
  char pad0[8];
  unsigned int count;
  Vec_828E2588 items;
} Self_828E2588;
extern void fn_828D81E8(Iter_828E2588 *out, Vec_828E2588 *v, Elem_828E2588 *first, Elem_828E2588 *last);
extern void fn_828E24D8(Vec_828E2588 *v, unsigned int n);
extern __declspec(noreturn) void fn_82F622E0(const char *msg);

static __forceinline Elem_828E2588 *At_828E2588(Vec_828E2588 *v, unsigned int i)
{
  if ((unsigned int)(v->last - v->first) <= i) {
    fn_82F622E0("invalid vector<T> subscript");
  }
  return &v->first[i];
}

static __forceinline void Clear_828E2588(Vec_828E2588 *v)
{
  Iter_828E2588 it;
  fn_828D81E8(&it, v, v->first, v->last);
}

void fn_828E2588(Self_828E2588 *self, unsigned int n)
{
  unsigned int i;

  Clear_828E2588(&self->items);
  fn_828E24D8(&self->items, n);
  for (i = 0; i < n; i++) {
    At_828E2588(&self->items, i)->f0 = 0;
  }
  self->count = n;
}
