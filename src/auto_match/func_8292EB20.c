extern int fn_8265C990();
extern int fn_82924F48();
extern unsigned int lbl_8202F09C;


void fn_8292EB20(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  *param_1 = &lbl_8202F09C;
  if (param_1[0x3d] != 0) {
    if (param_1[0x3e] != 0) {
      uVar1 = param_1[0x35];
      if (uVar1 < (unsigned int)param_1[0x36]) {
        puVar2 = (unsigned int *)(param_1[0x3e] + -4);
        do {
          for (uVar3 = param_1[0x32]; uVar3 < (unsigned int)param_1[0x34]; uVar3 = uVar3 + 4) {
            puVar2 = puVar2 + 2;
            fn_8265C990(*puVar2,0x24810000);
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < (unsigned int)param_1[0x36]);
      }
    }
  }
  fn_8265C990(param_1[0x3c],0x24810000);
  fn_8265C990(param_1[0x3e],0x24810000);
  fn_82924F48(param_1);
  return;
}

