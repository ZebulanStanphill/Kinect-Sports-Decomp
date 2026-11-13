extern int fn_8265CA20();
extern int fn_82B8F6A0();
extern unsigned int lbl_820DC938;


void fn_82B8F6F0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  *param_1 = &lbl_820DC938;
  if (param_1[0x3d] != 0) {
    if (param_1[0x3e] != 0) {
      uVar1 = param_1[0x35];
      if (uVar1 < (unsigned int)param_1[0x36]) {
        puVar2 = (unsigned int *)(param_1[0x3e] + -4);
        do {
          for (uVar3 = param_1[0x32]; uVar3 < (unsigned int)param_1[0x34]; uVar3 = uVar3 + 4) {
            puVar2 = puVar2 + 2;
            fn_8265CA20(*puVar2);
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < (unsigned int)param_1[0x36]);
      }
    }
  }
  fn_8265CA20(param_1[0x3c]);
  fn_8265CA20(param_1[0x3e]);
  fn_82B8F6A0(param_1);
  return;
}

