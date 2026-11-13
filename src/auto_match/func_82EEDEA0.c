extern int fn_82E4FE40();
extern int fn_82EEDA80();
extern int fn_82EEDC00();
extern int fn_82F41B20();


void fn_82EEDEA0(int param_1)

{
  int iVar1;
  int aiStack_30;
  
  *(unsigned int *)(param_1 + 0x74) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      aiStack_30 = 0;
      fn_82EEDC00(param_1 + 8,0,&aiStack_30);
      if ((*(int *)(param_1 + 0x70) != 0) && (iVar1 = fn_82EEDA80(param_1 + 8,0), -1 < iVar1))
      {
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
      }
      iVar1 = aiStack_30;
      if (aiStack_30 != 0) {
        fn_82F41B20(aiStack_30);
        fn_82E4FE40(iVar1);
      }
    } while (*(int *)(param_1 + 0x70) != 0);
  }
  return;
}

