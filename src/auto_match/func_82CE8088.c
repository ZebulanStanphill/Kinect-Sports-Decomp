typedef struct Alloc Alloc;
typedef struct { void *f0; void *(*alloc)(Alloc *a, int size); } AllocVtbl;
struct Alloc { AllocVtbl *vt; };
typedef struct { char pad[0x10]; Alloc *alloc; } Ctx;
typedef struct { int a; short size; } Node;
typedef struct { char data[56]; } Scope;
extern void fn_82CE7EE0(Scope *s);
extern void fn_82CE7E68(Scope *s);
extern Ctx *fn_82CE5410(void);
extern void *fn_82CFB670(Node *n, void *x);
extern void *fn_82CFB2D8(Node *n, void *x, int f);
extern void fn_82CE4118(void *x);
extern void *(*lbl_8317F4E4)(void *p, Scope *s);

void *fn_82CE8088(void *param_1, void *param_2)
{
  Scope scope;
  Node *n;
  void *a;
  void *r;
  Ctx *c;

  fn_82CE7EE0(&scope);
  c = fn_82CE5410();
  n = c->alloc->vt->alloc(c->alloc, 0x10);
  n->size = 0x10;
  a = fn_82CFB670(n, lbl_8317F4E4(param_2, &scope));
  c = fn_82CE5410();
  n = c->alloc->vt->alloc(c->alloc, 0x1c);
  n->size = 0x1c;
  r = fn_82CFB2D8(n, a, 0x1000);
  fn_82CE4118(a);
  fn_82CE7E68(&scope);
  return r;
}
