extern void fn_82269338(char *, unsigned int);

typedef struct { int a; char *b; } P;

void fn_8226A2B0(P *p, unsigned int v)
{
  char *b = p->b;
  int i;
  for (i = 0x354; i < 0x364; i += 4) {
    if (*(unsigned int *)(i + b) == v) {
      return;
    }
  }
  fn_82269338(b, v);
}
