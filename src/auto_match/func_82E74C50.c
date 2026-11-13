extern unsigned int *auStack_40;
extern int fn_82EEAF58();


unsigned __int64 fn_82E74C50(int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_40;
  
  if (param_3 == 0) {
    uVar2 = 0xffffffff80004003;
  }
  else if ((*(short *)(param_3 + 0x20) == *(short *)(param_1 + 0x14)) &&
          (uVar1 = *(unsigned int *)(param_3 + 0x2c), uVar1 <= param_2)) {
    uVar5 = *(unsigned __int64 *)(param_3 + 0x18);
    uVar4 = *(__int64 *)(param_3 + 0x10) * 10000;
    if (*(int *)(param_1 + 0x5c) != 0) {
      auStack_40 = 0;
      iVar3 = fn_82EEAF58(*(int *)(param_1 + 0x5c),&auStack_40);
      if (iVar3 < 0) {
        auStack_40 = *(unsigned int *)(param_1 + 0x18);
      }
      trapDoubleWordImmediate(6,(unsigned __int64)auStack_40,0);
      uVar5 = ((unsigned __int64)(param_2 - uVar1) * 80000000) / (unsigned __int64)auStack_40 + uVar5;
    }
    if (uVar4 < uVar5) {
      *(unsigned __int64 *)(param_3 + 0x18) = uVar4;
    }
    else {
      *(unsigned __int64 *)(param_3 + 0x18) = uVar5;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

