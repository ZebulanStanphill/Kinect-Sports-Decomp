extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_8304F0A8();
extern int fn_83050008();
extern int fn_83056200();
extern unsigned int uStack_34;


void fn_830530F8(double param_1,int param_2,int *param_3,unsigned __int64 param_4)

{
  int (**pcVar1)();
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_40 [2];
  float fStack_38;
  unsigned char uStack_34;
  
  fn_83056200();
  iVar2 = fn_83050008(param_3);
  iVar3 = *param_3;
  if (iVar2 == 1) {
    iVar3 = (**(int (***)())(iVar3 + 0x14))(param_3,param_4,auStack_40);
    if (iVar3 == 0) {
      (**(int (***)())(*param_3 + 0x1c))(param_3,0,0,param_4,0,0x35);
      fn_8304F0A8(0,100);
      return;
    }
    uStack_34 = *(unsigned char *)(param_3 + 0x1c);
    fStack_38 = (float)param_1;
    iVar2 = **(int **)(param_2 + 0x80);
    if (((unsigned int)param_3[0x1d] >> 0x1d & 1) == 0) {
      pcVar1 = *(int (***)())(iVar2 + 0x10);
    }
    else {
      pcVar1 = *(int (***)())(iVar2 + 0x14);
    }
    uVar5 = (*pcVar1)(*(int **)(param_2 + 0x80),auStack_40[0],&fStack_38,iVar3);
    if ((int)uVar5 == 1) {
      return;
    }
    iVar2 = *(int *)(iVar3 + 0x18);
    iVar3 = *param_3;
    uVar4 = *(unsigned __int64 *)(iVar2 + 0x10);
  }
  else {
    uVar5 = 2;
    uVar4 = 0;
    iVar2 = 0;
  }
  (**(int (***)())(iVar3 + 0x1c))(param_3,iVar2,uVar4,param_4,0,uVar5);
  return;
}

