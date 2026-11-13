extern int fn_82775758();
extern unsigned int lbl_821AAD20;


void fn_82776840(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  uVar1 = param_1[1];
  fn_82775758(param_1,param_1,param_2);
  uVar2 = lbl_821AAD20;
  if (uVar1 < param_2) {
    puVar4 = (unsigned int *)(uVar1 * 0x24 + *param_1);
    uVar3 = 0;
    if (param_2 != uVar1) {
      puVar5 = puVar4 + 6;
      do {
        if (puVar4 != (unsigned int *)0x0) {
          *puVar4 = uVar2;
          puVar5[-5] = uVar2;
          puVar5[-4] = uVar2;
          puVar5[-3] = uVar2;
          puVar5[-2] = uVar2;
          puVar5[-1] = uVar2;
          *puVar5 = uVar2;
          puVar5[1] = uVar2;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 9;
        puVar5 = puVar5 + 9;
      } while (uVar3 < param_2 - uVar1);
    }
  }
  return;
}

