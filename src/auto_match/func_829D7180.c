extern unsigned int *auStack_830;
extern int fn_829D3F68();
extern int fn_829D4A28();


void fn_829D7180(unsigned int param_1,unsigned int *param_2,int param_3,int *param_4,__int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned char auStack_830 [2000];
  
  iVar5 = 0;
  uVar2 = 0;
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      iVar5 = iVar1;
      if (param_2[2] != 0xffffffff) {
        uVar4 = 0;
        if (*param_2 != 0) {
          puVar3 = (unsigned int *)(iVar5 * 4 + param_3 + -4);
          do {
            fn_829D3F68(uVar4,param_2,auStack_830);
            fn_829D4A28(param_5 + 0xf4a18,auStack_830);
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = uVar2;
            iVar5 = iVar5 + 1;
          } while ((uVar4 & 0xffffffff) < (unsigned __int64)*param_2);
        }
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 6;
      iVar1 = iVar5;
    } while (uVar2 < param_1);
  }
  *param_4 = iVar5;
  return;
}

