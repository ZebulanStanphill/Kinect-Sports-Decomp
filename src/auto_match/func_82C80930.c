extern int fn_82C7F978();
extern int fn_82C7FD00();


unsigned __int64
fn_82C80930(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[0x4b];
  if (iVar2 == 0) {
    uVar3 = fn_82C7F978();
    return uVar3;
  }
  if (iVar2 == 1) {
    if (param_1[0x4c] == 0) {
      return 1;
    }
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
    if ((int)*(unsigned int *)(iVar1 + 8) < 1) {
      uVar4 = -uVar4;
    }
    fn_82C7FD00(param_1,param_1[0x4c],param_2,param_1[9],param_1[10],*(unsigned int *)(iVar1 + 4),
                  uVar4,param_1[1]);
    uVar3 = fn_82C7F978(param_1,param_1[0x4c],param_3,param_4,param_5,param_6,param_7);
  }
  else if (iVar2 == 2) {
    if (param_1[0x4d] == 0) {
      return 1;
    }
    uVar3 = fn_82C7F978(param_1,param_2,param_3,param_4,param_1[0x4d],param_6,param_7);
    fn_82C7FD00(param_1,param_5,param_1[0x4d],param_1[7],param_1[8],param_1[0xb],param_1[0xc],0);
  }
  else {
    if (iVar2 != 3) {
      return 1;
    }
    if (param_1[0x4d] == 0) {
      return 1;
    }
    if (param_1[0x4c] == 0) {
      return 1;
    }
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
    if ((int)*(unsigned int *)(iVar1 + 8) < 1) {
      uVar4 = -uVar4;
    }
    fn_82C7FD00(param_1,param_1[0x4c],param_2,param_1[9],param_1[10],*(unsigned int *)(iVar1 + 4),
                  uVar4,param_1[1]);
    uVar3 = fn_82C7F978(param_1,param_1[0x4c],param_3,param_4,param_1[0x4d],param_6,param_7);
    fn_82C7FD00(param_1,param_5,param_1[0x4d],param_1[7],param_1[8],param_1[0xb],param_1[0xc],0);
  }
  if (*param_4 == 0) {
    return 1;
  }
  return uVar3;
}

