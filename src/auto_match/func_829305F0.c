#define true 1
extern int fn_829301D0();
extern int fn_82934160();
extern unsigned int lbl_8202F0C8;


int fn_829305F0(int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  int aiStack_30 [1];
  
  aiStack_30[0] = 0;
  piVar3 = aiStack_30;
  while( true ) {
    if (param_1 == (int *)0x0) {
      return aiStack_30[0];
    }
    if (param_1[1] != 1) break;
    puVar1 = (unsigned int *)fn_82934160();
    puVar1 = (unsigned int *)fn_829301D0(*puVar1,0x14,0x10);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = &lbl_8202F0C8;
      puVar1[2] = 0;
      puVar1[1] = 1;
      puVar1[3] = 0;
      puVar1[4] = 0;
    }
    *piVar3 = (int)puVar1;
    if (puVar1 == (unsigned int *)0x0) {
      return aiStack_30[0];
    }
    puVar1[4] = param_1[4];
    if ((int *)param_1[2] != (int *)0x0) {
      iVar2 = (**(int (***)())(*(int *)param_1[2] + 4))();
      *(int *)(*piVar3 + 8) = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
        return aiStack_30[0];
      }
    }
    param_1 = (int *)param_1[3];
    piVar3 = (int *)(*piVar3 + 0xc);
  }
  iVar2 = (**(int (***)())(*param_1 + 4))(param_1);
  *piVar3 = iVar2;
  return aiStack_30[0];
}

