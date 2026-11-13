extern int fn_822315A0();
extern int fn_8223C478();
extern int fn_8260D428();
extern int fn_828A1958();
extern int fn_828BB820();
extern int fn_828E9DB8();
extern int fn_828EA268();


void fn_828BBA90(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  __int64 lVar4;
  int aiStack_40;
  
  lVar4 = 0;
  aiStack_40 = **(int **)(param_1 + 0xfc);
  if ((int *)aiStack_40 != *(int **)(param_1 + 0xfc)) {
    do {
      puVar3 = param_2;
      if (0xf < (unsigned int)param_2[5]) {
        puVar3 = (unsigned int *)*param_2;
      }
      iVar2 = fn_8260D428(aiStack_40 + 0xc,0,*(unsigned int *)(aiStack_40 + 0x1c),puVar3,
                           param_2[4]);
      if (iVar2 == 0) break;
      lVar4 = lVar4 + 1;
      fn_828A1958(&aiStack_40);
    } while (aiStack_40 != *(int *)(param_1 + 0xfc));
  }
  uVar1 = fn_828EA268((unsigned __int64)*(unsigned int *)(param_1 + 0x100) - 1);
  fn_8223C478(param_4,uVar1,0);
  fn_828E9DB8(param_4,lVar4,uVar1);
  fn_828BB820(*param_3,param_4);
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

