typedef void (*vfn)();
typedef struct Node { struct Node *next; } Node;
typedef struct { Node *p; } It;
extern void fn_82230300(void *p, int a, int b);
extern void fn_822B1B28(void *p);
extern void fn_822B4EB0(void *out, void *list, It first, It last);
extern void fn_82359C18(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_821B30D8[];

typedef struct { vfn *vtbl; } VObj;

typedef struct {
  void *vtbl;
  int list;
  Node *head;
  int pad0c[4];
  char m1c[0x3c - 0x1c];
  char *m3c;
  VObj *m40;
} Obj;

void fn_8236DD08(Obj *param_1)
{
  VObj *v;
  char *p;
  It a, b;
  char auStack_20 [8];

  v = param_1->m40;
  param_1->vtbl = lbl_821B30D8;
  if (v != 0) {
    v->vtbl[0](v, 1);
  }
  p = param_1->m3c;
  if (p != 0) {
    fn_82359C18(p + 0x10);
    fn_822B1B28(p);
    fn_8265CA20(p);
  }
  fn_82230300(param_1->m1c, 1, 0);
  b.p = param_1->head;
  a.p = param_1->head->next;
  fn_822B4EB0(auStack_20, &param_1->list, a, b);
  fn_8265CA20(param_1->head);
}
