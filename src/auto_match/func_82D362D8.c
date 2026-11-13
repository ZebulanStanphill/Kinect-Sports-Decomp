typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern void fn_82D35448(void *, unsigned int, void *, void *);

typedef struct Elem_82D362D8 {
  __vector4 a;
  __vector4 b;
  int f20;
  int f24;
  int f28;
  int f2c;
} Elem_82D362D8;
typedef struct Stack_82D362D8 {
  int *data;
  int top;
} Stack_82D362D8;
typedef struct Pool_82D362D8 {
  char *base;
  unsigned int f4;
  int f8;
  Stack_82D362D8 st;
} Pool_82D362D8;

static __forceinline int Back(Stack_82D362D8 *s)
{
  return s->data[s->top - 1];
}

static __forceinline void PopBack(Stack_82D362D8 *s)
{
  s->top--;
}

static __forceinline void Copy_82D362D8(Elem_82D362D8 *d, const Elem_82D362D8 *s)
{
  d->a = s->a;
  d->b = s->b;
  d->f20 = s->f20;
  d->f24 = s->f24;
  d->f20 = s->f20;
  d->f28 = s->f28;
  d->f2c = s->f2c;
}

unsigned int fn_82D362D8(Pool_82D362D8 *p, void *a, void *b, const Elem_82D362D8 *src)
{
  unsigned int idx;
  if (p->st.top == 0) {
    fn_82D35448(p, p->f4 + 0x80, a, b);
  }
  idx = Back(&p->st);
  PopBack(&p->st);
  Copy_82D362D8((Elem_82D362D8 *)(p->base + idx * 0x30), src);
  return idx;
}
