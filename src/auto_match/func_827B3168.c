extern void fn_827B0A40();
extern void fn_827B19D8();
extern void fn_827B1A38();
extern void fn_827B1A90();
extern void fn_827B1B10();

typedef struct S {
  int pad0[2];
  int **buf;
  int pad0c[15];
  int sub48;
  int f4c;
  int pad50[3];
  int f5c;
  int pad60[3];
  int *f6c;
  int f70;
  int f74;
  int *f78;
} S;

void fn_827B3168(S *p, char *s, int a3, int a4, int a5, int a6, int a7)
{
  char c;

  for (; *s; s++) {
    c = *s;
    fn_827B19D8(p->buf, &c);
  }
  c = 0;
  fn_827B19D8(p->buf, &c);
  p->f6c = *p->buf;
  fn_827B1A38(&p->buf, a3);
  fn_827B1A38(&p->buf, a4);
  fn_827B1B10(&p->buf, a5);
  fn_827B1B10(&p->buf, a6);
  fn_827B1B10(&p->buf, a7);
  p->f70 = 0;
  p->f74 = 0;
  p->f78 = *p->buf;
  fn_827B1A90(&p->buf, 0);
  fn_827B1A90(&p->buf, 0);
  fn_827B0A40(&p->sub48);
  p->f4c = 0;
  p->f5c = 0;
}
