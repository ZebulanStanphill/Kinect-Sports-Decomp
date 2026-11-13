extern int fn_82C80360();
extern int fn_82CC6160();
extern int fn_82CC62F0();


unsigned __int64 fn_82C80400(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar1 = param_1[8];
  uVar5 = (unsigned __int64)uVar1;
  param_1[0x4b] = 0;
  if (param_1[0x4a] == 0) {
    if ((param_1[3] != param_1[9]) || (param_1[4] != param_1[10])) {
      param_1[0x4b] = 1;
    }
    if ((param_1[7] != param_1[0xb]) || (uVar1 != param_1[0xc])) {
      param_1[0x4b] = param_1[0x4b] + 2;
    }
    *(int *)(*param_1 + 8) = param_1[4];
  }
  else {
    uVar2 = param_1[4];
    param_1[0x4b] = 3;
    *(unsigned int *)(*param_1 + 8) = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    uVar5 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  }
  *(int *)(*param_1 + 4) = param_1[3];
  iVar3 = *param_1;
  uVar4 = fn_82C80360(param_1,*(unsigned int *)(iVar3 + 4),*(unsigned int *)(iVar3 + 8));
  *(unsigned int *)(iVar3 + 0x14) = uVar4;
  if (param_1[0x49] == 0) {
    fn_82CC62F0(param_1 + 0xd,param_1[3],*(unsigned int *)(*param_1 + 8),param_1[7],uVar5);
  }
  else {
    fn_82CC6160(param_1 + 0x27);
  }
  return 1;
}

