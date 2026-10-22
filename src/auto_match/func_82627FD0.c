typedef void *(*AllocFn)(void *self, int size, void *tag);
typedef struct { void *pad[3]; AllocFn alloc; } AllocVtbl;
typedef struct { AllocVtbl *vt; } Allocator;
extern void fn_8256D3A8(void *s, char *t);
extern void fn_8256D798(void *s, int a, int b);
extern void fn_827D9630(void *p, void *a);
extern int fn_827D96A0(void *a);
extern void fn_827D9FB0(void *p, void *s, int *a, int *b, int *c, int *d, int *e);
extern void fn_82811438(void *buf, int *a, int n);
extern char lbl_821CAC50[];
extern Allocator *lbl_83156AA0;
extern char lbl_82196582[];

static void **ctor(void **p, void *param_2)
{
  int a9c;
  int a98;
  int a94;
  int a90;
  int a8c;
  char str[64];

  a9c = 0;
  a98 = 0;
  a94 = fn_827D96A0(param_2);
  a90 = 0;
  a8c = 0;
  fn_8256D3A8(str, lbl_82196582);
  fn_827D9FB0(p, str, &a8c, &a90, &a94, &a98, &a9c);
  fn_8256D798(str, 1, 0);
  *p = lbl_821CAC50;
  fn_827D9630(p + 0x1a, param_2);
  return p;
}

void **fn_82627FD0(void *param_1, void *param_2)
{
  void **p;
  int a0;
  char tag[32];

  a0 = 0;
  fn_82811438(tag, &a0, 0x10);
  p = (void **)lbl_83156AA0->vt->alloc(lbl_83156AA0, 0x80, tag);
  return p ? ctor(p, param_2) : 0;
}
