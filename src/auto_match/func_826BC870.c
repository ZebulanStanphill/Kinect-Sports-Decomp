extern int fn_826BBF30();
extern int fn_82712390();
extern char lbl_82007BBC[];
extern char lbl_8200DBF8[];

typedef struct { int a, b, c; int pad[7]; int d; unsigned char e; int f; } Tail;
typedef struct {
  void *vtbl;
  int refcount;
  int sub[0x9c];
  Tail t;
} Obj;
static void init(Tail *t) { t->a = 0; t->b = 0; t->c = 0; t->d = 0; t->e = 0; t->f = 0; }
Obj *fn_826BC870(Obj *self, int param_2)
{
  
  self->refcount = 1;
  self->vtbl = lbl_8200DBF8;
  fn_82712390(self->sub, *(int *)(param_2 + 0x14));
  self->vtbl = lbl_82007BBC;
  init(&self->t);
  fn_826BBF30(self, param_2);
  return self;
}
