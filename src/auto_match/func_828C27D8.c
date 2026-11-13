extern int fn_8223C478();
extern int fn_8260D428();
extern int fn_828A1958();
extern int fn_828E9DB8();
extern int fn_828EA268();


void fn_828C27D8(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  __int64 lVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  int aiStack_40;
  
  lVar5 = 0;
  aiStack_40 = **(int **)(param_1 + 0xdc);
  piVar6 = (int *)aiStack_40;
  if ((int *)aiStack_40 != *(int **)(param_1 + 0xdc)) {
    do {
      piVar6 = (int *)aiStack_40;
      puVar4 = param_2;
      if (0xf < (unsigned int)param_2[5]) {
        puVar4 = (unsigned int *)*param_2;
      }
      iVar3 = fn_8260D428(aiStack_40 + 0xc,0,*(unsigned int *)(aiStack_40 + 0x1c),puVar4,
                           param_2[4]);
      if (iVar3 == 0) break;
      lVar5 = lVar5 + 1;
      fn_828A1958(&aiStack_40);
      piVar6 = (int *)aiStack_40;
    } while (aiStack_40 != *(int *)(param_1 + 0xdc));
  }
  piVar1 = *(int **)(*(int *)(*(int *)((int)piVar6 + 0x28) + 4) + 4);
  aiStack_40 = *piVar1;
  if ((int *)aiStack_40 != piVar1) {
    do {
      puVar4 = param_3;
      if (0xf < (unsigned int)param_3[5]) {
        puVar4 = (unsigned int *)*param_3;
      }
      iVar3 = fn_8260D428(aiStack_40 + 0xc,0,*(unsigned int *)(aiStack_40 + 0x1c),puVar4,
                           param_3[4]);
    } while ((iVar3 != 0) &&
            (fn_828A1958(&aiStack_40),
            aiStack_40 != *(int *)(*(int *)(*(int *)((int)piVar6 + 0x28) + 4) + 4)));
  }
  uVar2 = fn_828EA268((unsigned __int64)*(unsigned int *)(param_1 + 0xe0) - 1);
  uVar7 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)((int)piVar6 + 0x28) + 4) + 8);
  fn_828EA268(uVar7 - 1);
  fn_8223C478(param_4,uVar2,0);
  fn_828E9DB8(param_4,lVar5,uVar2);
  fn_8223C478(param_4,uVar7,0);
  fn_828E9DB8(param_4,lVar5,uVar7);
  return;
}

