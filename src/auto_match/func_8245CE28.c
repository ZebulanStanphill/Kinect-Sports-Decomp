typedef struct Item { void *p; int pad[7]; } Item;
typedef struct Obj { void *vt; Item *items; int f8; int fc; unsigned int count; } Obj;
extern int fn_8265CA20(void *p);
extern int fn_8265CAA0(void *p);
extern unsigned int lbl_821BAE9C;

void fn_8245CE28(Obj *param_1)
{
  unsigned int i;

  param_1->vt = &lbl_821BAE9C;
  if (param_1->items != 0) {
    for (i = 0; i < param_1->count; i++) {
      if (param_1->items[i].p != 0) {
        fn_8265CA20(param_1->items[i].p);
        param_1->items[i].p = 0;
      }
    }
    fn_8265CAA0(param_1->items);
    param_1->items = 0;
  }
}
