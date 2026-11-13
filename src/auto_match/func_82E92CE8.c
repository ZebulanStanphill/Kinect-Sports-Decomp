typedef struct Item { int pad; void *data; int tail[8]; } Item;
typedef struct List { Item *data; unsigned int size; } List;
extern int fn_8265C990();


void fn_82E92CE8(List *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1->size > 0) {
    iVar3 = 0;
    do {
      iVar1 = (int)param_1->data[uVar2].data;
      if ((unsigned int)iVar1 != 0) {
        fn_8265C990(iVar1,0x248c8000);
        param_1->data[uVar2].data = 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar2 < param_1->size);
  }
  if ((unsigned int)param_1->data != 0) {
    fn_8265C990(param_1->data,0x248c8000);
    param_1->data = 0;
  }
  return;
}

