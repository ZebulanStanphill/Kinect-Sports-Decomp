typedef struct It_83066AF0 { int w[6]; } It_83066AF0;
typedef struct Tmp_83066AF0 { int w[4]; } Tmp_83066AF0;
extern void fn_83060380(It_83066AF0 *);
extern void fn_83060CB0(It_83066AF0 *);
extern unsigned char fn_830603C0(It_83066AF0 *);
extern void *fn_830603D0(It_83066AF0 *);
extern int fn_8305D680(void *);
extern void fn_8305D688(void *, int, Tmp_83066AF0 *);
extern void fn_83060CD0(It_83066AF0 *);
extern int fn_83066788(void *, Tmp_83066AF0 *, float);

int fn_83066AF0(void *self, float f)
{
  unsigned char any = 0;
  int score = 0;
  Tmp_83066AF0 tmp;
  It_83066AF0 it;
  fn_83060380(&it);
  fn_83060CB0(&it);
  while (!fn_830603C0(&it)) {
    void *list = fn_830603D0(&it);
    int j;
    if (fn_8305D680(list) > 0) any = 1;
    for (j = 0; j < fn_8305D680(list); j++) {
      int r;
      fn_8305D688(list, j, &tmp);
      r = fn_83066788(self, &tmp, f);
      if (r == 1) {
        if (score > 0) return 3;
        score--;
      } else if (r == 0) {
        if (score < 0) return 3;
        score++;
      }
    }
    fn_83060CD0(&it);
  }
  if (any) {
    if (score > 0) return 1;
    if (score < 0) return 2;
    return 4;
  }
  return 0;
}
