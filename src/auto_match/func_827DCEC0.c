extern void fn_822315A0(void *p);

typedef struct { int a; void *rc; } SP;

int fn_827DCEC0(int a, int b, int c, int d, int e, SP *sp)
{
  if (sp->rc != 0) {
    fn_822315A0(sp->rc);
  }
  return 0;
}
