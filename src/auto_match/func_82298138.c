extern void fn_822315A0(void *);
extern void fn_82297DB0(void *, int, int);
extern void fn_822980B0(void *);
extern void fn_82299308(void *, void *);
extern void fn_8229E090(void *, int, int);
extern void fn_82536288(void *);
extern void fn_8265CA20(void *);
extern int fn_8266F6B8();
extern void fn_826728E8(int, char *, int);
typedef struct RcObj RcObj;
typedef struct { unsigned char (*slot0)(RcObj *); unsigned char (*slot1)(RcObj *); } RcVT;
struct RcObj { RcVT *vt; };
typedef struct TNode { struct TNode *left; struct TNode *parent; struct TNode *right; int pad; unsigned char str[0x1c]; unsigned char pad2[1]; unsigned char isnil; } TNode;
typedef struct { int pad; TNode *head; unsigned size; } Tree;
typedef struct {
  int f0;
  void *f4;

  Tree tree;
  int pad14;
  char vec18[0x10];
  char vec28[0x10];
  char vec38[0x10];
  char pad48[0x60 - 0x48];
  void *f60;
  char str64[0x84 - 0x64];
  RcObj *f84;
} Obj_82298138;

void fn_82298138(Obj_82298138 *p)
{
  TNode *n, *nx;
  int a = p->f0;
  int b = fn_8266F6B8();
  fn_826728E8(a, "OOBEReacquisitionTexture", b);
  if (p->f60 != 0) {
    fn_8229E090(p->f60, 0, 1);
    p->f60 = 0;
  }
  if (p->f84 != 0) {
    if (p->f84->vt->slot1(p->f84) == 0) {
      p->f84->vt->slot0(p->f84);
    }
    fn_82536288(&p->f84);
  }
  fn_82297DB0(p->str64, 1, 0);
  fn_822980B0(p->vec38);
  fn_822980B0(p->vec28);
  fn_822980B0(p->vec18);
  {
  Tree *t = &p->tree;
  n = t->head->parent;
  nx = n;
  while (nx->isnil == 0) {
    fn_82299308(t, nx->right);
    nx = nx->left;
    fn_82297DB0(n->str, 1, 0);
    fn_8265CA20(n);
    n = nx;
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
  fn_8265CA20(t->head);
  }
  if (p->f4 != 0) {
    fn_822315A0(p->f4);
  }
}
