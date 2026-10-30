extern void fn_82D35448(void *, unsigned int, void *, void *);

typedef struct Stack_82D363A0 {
  int *data;
  int top;
} Stack_82D363A0;
typedef struct Pool_82D363A0 {
  char *base;
  unsigned int f4;
  int f8;
  Stack_82D363A0 st;
} Pool_82D363A0;

static void Pop(Stack_82D363A0 *s, unsigned int *o)
{
  *o = s->data[s->top - 1];
  s->top = s->top - 1;
}

char *fn_82D363A0(Pool_82D363A0 *p, void *a, void *b, unsigned int *out)
{
  if (p->st.top == 0) {
    fn_82D35448(p, p->f4 + 0x80, a, b);
  }
  Pop(&p->st, out);
  return p->base + *out * 0x30;
}
