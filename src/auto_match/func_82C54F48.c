extern int fn_82BA02A8(unsigned, void *);
extern int fn_82C53970(unsigned);
extern int fn_82C563B0(unsigned, unsigned);
extern int fn_82CBBD70(void *);
extern int free(void *);
extern void *memset(void *, int, unsigned);

typedef struct { unsigned *data; unsigned cap; unsigned n; } Stk_82C54F48;
typedef struct {
  unsigned f0;
  Stk_82C54F48 a;
  Stk_82C54F48 b;
  int f1c;
  unsigned f20;
  unsigned ctx;
} Obj_82C54F48;

static unsigned popb_82C54F48(Stk_82C54F48 *s)
{
  unsigned n;
  unsigned v;
  if (s->n == 0) return 0;
  n = s->n - 1;
  s->n = n;
  v = s->data[n];
  s->data[n] = 0;
  return v;
}

static unsigned pop_82C54F48(Stk_82C54F48 *s)
{
  unsigned n;
  unsigned v;
  if (s->n == 0) return 0;
  n = s->n - 1;
  s->n = n;
  v = s->data[n];
  s->data[n] = 0;
  return v;
}

void fn_82C54F48(Obj_82C54F48 *p)
{
  unsigned item;
  char flag;

  if (p != 0) {
    if (p->f1c != -1) {
      item = pop_82C54F48(&p->a);
      flag = (char)popb_82C54F48(&p->b);
      while (item != 0) {
        if ((flag & 1) != 0) {
          memset((void *)item, 0, 0xb330);
        }
        fn_82C563B0(p->ctx + 8, item);
        item = pop_82C54F48(&p->a);
        flag = (char)popb_82C54F48(&p->b);
      }
    }
    fn_82CBBD70(&p->a);
    fn_82CBBD70(&p->b);
    if (p->f0 != 0) {
      fn_82C53970(p->f0);
      p->f0 = 0;
    }
    fn_82BA02A8(p->ctx + 8, p);
    free(p);
  }
}
