#define true 1
extern unsigned int *auStack_50;
extern int fn_82694610();
extern int fn_826BD078();


int * fn_826949A8(int *param_1,unsigned int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_50;
  
  if (param_3 == param_4) {
    iVar2 = *(int *)(*(int *)(*param_2 & 0xfffffc00) + 0x18);
  }
  else {
    auStack_50 = *(unsigned int *)*param_2;
    uVar3 = (unsigned __int64)auStack_50;
    iVar2 = 0;
    uVar4 = uVar3;
    uVar5 = uVar3;
    while( true ) {
      if (iVar2 == param_3) {
        uVar5 = uVar4;
      }
      iVar1 = fn_826BD078(&auStack_50);
      iVar2 = iVar2 + 1;
      if (iVar2 == param_4) goto LAB_82694a2c;
      if (iVar1 == 0) break;
      uVar4 = (unsigned __int64)auStack_50;
    }
    if (iVar2 < param_4) {
LAB_82694a2c:
      uVar3 = (unsigned __int64)auStack_50;
    }
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    iVar2 = fn_82694610(*(unsigned int *)(*param_2 & 0xfffffc00),uVar5,uVar3 - uVar5);
  }
  iVar1 = *(int *)(iVar2 + 8);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = iVar1 + 1;
  return param_1;
}

