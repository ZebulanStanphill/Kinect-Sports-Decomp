#define true 1
extern int fn_82381BC0();
extern int fn_82A4AAA8();


__int64 fn_82244A90(int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int *apuStack_30 [12];
  
  lVar6 = 1;
  puVar1 = *(unsigned int **)(param_1[4] + 0x230);
  apuStack_30[0] = (unsigned int *)*puVar1;
  do {
    puVar3 = apuStack_30[0];
    if (apuStack_30[0] == puVar1) {
      return lVar6;
    }
    uVar4 = fn_82A4AAA8(apuStack_30[0][4]);
    if (uVar4 == 0) {
LAB_82244ad8:
      lVar6 = 0;
    }
    else if (uVar4 == 1) {
      uVar2 = puVar3[4];
      iVar5 = (**(int (***)())(*param_1 + 4))(param_1);
      iVar5 = (**(int (***)())(*(int *)(iVar5 + 0x9c) + 0x38))((int *)(iVar5 + 0x9c),uVar2);
      if ((lVar6 == 0) || (lVar6 = 1, iVar5 != param_2)) {
        lVar6 = 0;
      }
    }
    else if (2 < uVar4) goto LAB_82244ad8;
    fn_82381BC0(apuStack_30);
    puVar1 = *(unsigned int **)(param_1[4] + 0x230);
  } while( true );
}

