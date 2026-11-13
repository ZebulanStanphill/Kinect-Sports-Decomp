extern int fn_8268CC00();
extern int fn_826E7BF8();

typedef struct { int a; int b; unsigned int c; unsigned int d; } St_826F6638;

void fn_826F6638(int param_1, unsigned int param_2)
{
  St_826F6638 s;
  unsigned char auStack_40 [32];

  s.a = param_1 + 5;
  s.c = 0;
  s.b = -1;
  s.d = 0;
  fn_8268CC00(auStack_40);
  if (s.d != 0) {
    s.c = s.c + 1;
  }
  s.c = s.c + 4;
  s.d = 0;
  fn_826E7BF8(&s, auStack_40);
  *(unsigned char *)(param_1 + 4) = s.c < param_2 - 1;
}
