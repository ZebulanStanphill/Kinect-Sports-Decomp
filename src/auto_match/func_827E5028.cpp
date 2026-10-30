extern "C" int fn_827E4428(int);

struct Item_827E5028 { char pad[0x24]; int f24; };
struct Node_827E5028 { Node_827E5028 *next; Node_827E5028 *prev; Item_827E5028 *item; };
struct List_827E5028 { int pad; Node_827E5028 *head; };

class Obj_827E5028 {
public:
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6();
  virtual List_827E5028 *GetList();
  int f4;
};

extern "C" int fn_827E5028(Obj_827E5028 *param_1)
{
  Node_827E5028 *piVar1;
  Node_827E5028 *piVar2;
  int iVar4;

  iVar4 = 0;
  Node_827E5028 **pp = &param_1->GetList()->head;
  piVar1 = (*pp)->next;
  piVar2 = param_1->GetList()->head;
  if (piVar1 != piVar2) {
    do {
      if (fn_827E4428(piVar1->item->f24) == param_1->f4) {
        iVar4 = iVar4 + 1;
      }
      piVar1 = piVar1->next;
    } while (piVar1 != piVar2);
    if (iVar4 == 1) {
      return 0;
    }
  }
  return 0x3e5;
}
