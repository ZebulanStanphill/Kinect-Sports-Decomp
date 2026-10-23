typedef struct {
  int a[15];
} SubA;
typedef struct {
  int b[3];
} SubB;
typedef struct {
  void *vt;
  int pad[7];
  SubA a;
  int pad2[2];
  SubB b;
} T;
extern void fn_83008328(T *t, int a);
extern char lbl_8217C60C[];

static void SubA_init(SubA *s)
{
  s->a[0] = 0;
  s->a[1] = 0;
  s->a[2] = 0;
  s->a[3] = 0;
  s->a[4] = 0;
  s->a[5] = 0;
  s->a[6] = 0;
  s->a[7] = 0;
  s->a[8] = 0;
  s->a[9] = 0;
  s->a[10] = 0;
  s->a[11] = 0;
  s->a[12] = 0;
  s->a[13] = 0;
  s->a[14] = 0;
}

T *fn_83028948(T *t, int a)
{
  fn_83008328(t, a);
  t->vt = lbl_8217C60C;
  SubA_init(&t->a);
  t->b.b[0] = 0;
  t->b.b[1] = 0;
  t->b.b[2] = 0;
  return t;
}
