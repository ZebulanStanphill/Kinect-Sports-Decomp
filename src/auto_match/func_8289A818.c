typedef unsigned char bool;
extern int fn_8236D750();
extern int fn_82899478();
extern unsigned int lbl_820239B4;
extern unsigned int lbl_82023A58;
extern unsigned int lbl_82023B40;


unsigned int * fn_8289A818(unsigned int *param_1,unsigned __int64 param_2,char param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  
  *param_1 = &lbl_82023A58;
  lVar4 = 4;
  *(unsigned char *)(param_1 + 1) = 0;
  iVar3 = 0;
  puVar2 = param_1 + 2;
  do {
    *(bool *)((int)param_1 + iVar3 + 5) = param_3 == '\0';
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_1 = &lbl_82023B40;
  param_1[7] = &lbl_820239B4;
  param_1[8] = 9;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = fn_8236D750(param_2);
  fn_82899478(param_1 + 7,uVar1,0);
  return param_1;
}

