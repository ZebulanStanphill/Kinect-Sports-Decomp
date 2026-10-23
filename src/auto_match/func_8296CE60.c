typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
extern void fn_8265C990(void *, int);

typedef struct S {
  int pad0[2];
  void *a[7];
  int pad24[3];
  void *b[6];
  int pad48;
  void *c[4];
} S;

int fn_8296CE60(void *self, S *s)
{
  fn_8265C990(s->a[0], 0x24810000);
  fn_8265C990(s->a[1], 0x24810000);
  fn_8265C990(s->a[2], 0x24810000);
  fn_8265C990(s->a[3], 0x24810000);
  fn_8265C990(s->a[4], 0x24810000);
  fn_8265C990(s->a[5], 0x24810000);
  fn_8265C990(s->a[6], 0x24810000);
  fn_8265C990(s->b[0], 0x24810000);
  fn_8265C990(s->b[1], 0x24810000);
  fn_8265C990(s->b[2], 0x24810000);
  fn_8265C990(s->b[3], 0x24810000);
  fn_8265C990(s->b[4], 0x24810000);
  fn_8265C990(s->b[5], 0x24810000);
  fn_8265C990(s->c[0], 0x24810000);
  fn_8265C990(s->c[1], 0x24810000);
  fn_8265C990(s->c[2], 0x24810000);
  fn_8265C990(s->c[3], 0x24810000);
  memset(s, 0, 100);
  return 0;
}
