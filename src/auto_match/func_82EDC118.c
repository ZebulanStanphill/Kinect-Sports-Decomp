extern int fn_82CC6160();
extern int fn_82EDC068();
extern int fn_82F2CD08();


unsigned __int64 fn_82EDC118(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x24);
  uVar5 = (unsigned __int64)uVar1;
  *(unsigned int *)(param_1 + 0x15c) = 0;
  if (*(int *)(param_1 + 0x158) == 0) {
    if ((*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x28)) ||
       (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x2c))) {
      *(unsigned int *)(param_1 + 0x15c) = 1;
    }
    if ((*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x30)) ||
       (uVar1 != *(unsigned int *)(param_1 + 0x34))) {
      *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 2;
    }
    *(unsigned int *)(*(int *)(param_1 + 4) + 8) = *(unsigned int *)(param_1 + 0x14);
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x14);
    *(unsigned int *)(param_1 + 0x15c) = 3;
    *(unsigned int *)(*(int *)(param_1 + 4) + 8) =
         ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    uVar5 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  }
  *(unsigned int *)(*(int *)(param_1 + 4) + 4) = *(unsigned int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 4);
  uVar4 = fn_82EDC068(param_1,*(unsigned int *)(iVar3 + 4),*(unsigned int *)(iVar3 + 8));
  *(unsigned int *)(iVar3 + 0x14) = uVar4;
  if (*(int *)(param_1 + 0x154) == 0) {
    fn_82F2CD08(param_1 + 0x40,*(unsigned int *)(param_1 + 0x10),
                 *(unsigned int *)(*(int *)(param_1 + 4) + 8),*(unsigned int *)(param_1 + 0x20),uVar5);
  }
  else {
    fn_82CC6160(param_1 + 0xcc);
  }
  return 1;
}

