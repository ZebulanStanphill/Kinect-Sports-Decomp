typedef struct Obj_82880BD8 {
  unsigned char pad0[5];
  unsigned char active;
} Obj_82880BD8;

typedef struct Node_82880BD8 {
  struct Node_82880BD8 *next;
  int pad4;
  int pad8;
  int value;
  Obj_82880BD8 *obj;
} Node_82880BD8;

typedef struct List_82880BD8 {
  int pad0;
  Node_82880BD8 *head;
} List_82880BD8;

extern void fn_828EA790(Node_82880BD8 **it);
extern List_82880BD8 lbl_83212A00;

int fn_82880BD8(void)
{
  int result;
  Node_82880BD8 *end;
  Node_82880BD8 *it;
  Obj_82880BD8 *obj;

  result = -1;
  end = lbl_83212A00.head;
  it = end->next;
  while (it != end) {
    obj = it->obj;
    if (obj != 0 && obj->active != 0) {
      result = it->value;
      break;
    }
    fn_828EA790(&it);
  }
  return result;
}
