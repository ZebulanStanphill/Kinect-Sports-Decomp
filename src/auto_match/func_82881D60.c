typedef struct Node_82881D60 { struct Node_82881D60 *left; struct Node_82881D60 *parent; struct Node_82881D60 *right; } Node_82881D60;
typedef struct Obj_82881D60 { char pad[0x14]; Node_82881D60 *head; int f18; } Obj_82881D60;
typedef struct It_82881D60 { struct { int pad[4]; Obj_82881D60 *obj; } *p; } It_82881D60;
extern struct Tree_82881D60 { int a; void *end; } lbl_83212A00;
extern void fn_8289F160(void **, void *, unsigned int *);
extern void fn_8288C540(void *, void *);

void fn_82881D60(unsigned int param_1)
{
  unsigned int key;
  struct { int pad[4]; Obj_82881D60 *obj; } *it;
  Obj_82881D60 *o;
  Node_82881D60 *h;
  key = param_1;
  fn_8289F160((void **)&it, &lbl_83212A00, &key);
  if ((void *)it != lbl_83212A00.end) {
    o = it->obj;
    if (o != 0) {
      fn_8288C540((char *)o + 0x10, o->head->parent);
      o->head->parent = o->head;
      o->head->left = o->head;
      o->head->right = o->head;
      o->f18 = 0;
    }
  }
}
