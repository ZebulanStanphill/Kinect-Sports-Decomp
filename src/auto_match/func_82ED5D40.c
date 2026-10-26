extern unsigned int fn_82F07E00(void *s, int a5, int a6, int a4, int x, int a8);
typedef struct {
  char pad[0x1f98];
  void (*f1)(int a3, int a4, int n, unsigned int r);
  char pad2[0x1fb4 - 0x1f9c];
  void (*f2)(void *s, int a2, int a3, int a7, int n);
  char pad3[0x2030 - 0x1fb8];
  int x;
} S;
void fn_82ED5D40(S *s, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int r = fn_82F07E00(s, a5, a6, a4, s->x, a8);
  s->f1(a3, a4, 8, r);
  s->f2(s, a2, a3, a7, 8);
}
