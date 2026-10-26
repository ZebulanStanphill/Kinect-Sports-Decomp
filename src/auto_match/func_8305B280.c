extern void fn_83057248(void *p);

typedef struct { int a; int b; void *p; int c; int d; } S;

void fn_8305B280(S *s)
{
  if (s->p != 0) {
    fn_83057248(s->p);
    s->b = 0;
    s->d = 0;
    s->c = 0;
    s->p = 0;
  }
}
