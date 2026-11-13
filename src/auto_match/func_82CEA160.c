#define true 1
extern int fn_82CEA520();


void fn_82CEA160(int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  if (param_1[2] < param_1[1] << 1) {
    fn_82CEA520(param_1,param_2,(param_1[2] + 1) * 2);
  }
  iVar1 = *param_1;
  iVar3 = 1;
  uVar4 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar5 = uVar4 * 8;
  iVar2 = *(int *)(iVar1 + iVar5);
  do {
    if (iVar2 == -1) {
LAB_82cea1f8:
      param_1[1] = iVar3 + param_1[1];
      *(unsigned int *)(iVar1 + iVar5) = param_3;
      *(unsigned int *)(iVar5 + *param_1 + 4) = param_4;
      return;
    }
    if (*(unsigned int *)(iVar1 + iVar5) == param_3) {
      iVar3 = 0;
      goto LAB_82cea1f8;
    }
    uVar4 = uVar4 + 1 & param_1[2];
    iVar5 = uVar4 * 8;
    iVar2 = *(int *)(iVar5 + *param_1);
  } while( true );
}

