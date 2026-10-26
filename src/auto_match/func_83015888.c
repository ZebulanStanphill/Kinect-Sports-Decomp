typedef struct { int a, b, c; } E;
extern void fn_830195D8(E *, int, int, int);

void fn_83015888(E *p, int a, int b, int c, int d, int e)
{
  fn_830195D8(&p[a * 2 + b + 0xd], d, c, e);
}
