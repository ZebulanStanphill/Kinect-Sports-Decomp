extern int fn_8223B930(void *p);
extern int fn_82240DB8(void *p, int n);
extern void *fn_8265C9E0(int n);
extern char lbl_82196AFC[];
extern char lbl_82196C38[];

typedef struct {
  void *vtbl;
  int f6c;
  int count;
  char *buf;
  int size;
} Sub;

typedef struct {
  char pad[0x68];
  Sub sub;
  char pad2[0xc0 - 0x7c];
  char other[4];
} Obj;

Obj *fn_82233250(Obj *p)
{
  Sub *s;
  char *b;
  int i;

  fn_8223B930(p);
  s = &p->sub;
  fn_82240DB8(s, 2);
  p->sub.vtbl = lbl_82196AFC;
  s->count = 7;
  s->size = 5;
  b = fn_8265C9E0(5);
  for (i = 0; i < 5; i++) b[i] = 0;
  s->buf = b;
  s->vtbl = lbl_82196C38;
  fn_8223B930(p->other);
  return p;
}
