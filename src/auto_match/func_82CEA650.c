#define true 1
extern int fn_82CEA950();


void fn_82CEA650(int *param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  
  if (param_1[2] < param_1[1] << 1) {
    fn_82CEA950(param_1,param_2,(param_1[2] + 1) * 2);
  }
  iVar1 = 1;
  uVar4 = ((unsigned int)param_3 >> 4) * -0x61c8864f;
  do {
    iVar3 = (uVar4 & param_1[2]) * 0x10;
    lVar2 = *(__int64 *)(*param_1 + iVar3);
    if (lVar2 == -1) {
LAB_82cea6d0:
      param_1[1] = iVar1 + param_1[1];
      *(__int64 *)(*param_1 + iVar3) = param_3;
      *(unsigned __int64 *)(iVar3 + *param_1 + 8) = param_4;
      return;
    }
    if (lVar2 == param_3) {
      iVar1 = 0;
      goto LAB_82cea6d0;
    }
    uVar4 = (uVar4 & param_1[2]) + 1;
  } while( true );
}

