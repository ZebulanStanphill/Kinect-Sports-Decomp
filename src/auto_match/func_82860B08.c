extern int fn_82648C58(int a, int b, int c);
extern int lbl_8320A898;

typedef struct { int h; int a, b; float x, y; } S;

void fn_82860B08(S *p, int c)
{
  if (p != 0)
    p->h = fn_82648C58(lbl_8320A898, 9, c);
  p->a = 1;
  p->b = 1;
  p->x = 0.0f;
  p->y = 0.0f;
}
