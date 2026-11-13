extern int fn_82F02410();
extern int fn_82F68B74();


void fn_82F15CE8(int param_1,__int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x984) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x980) == '\x01') {
    fn_82F68B74(*(unsigned int *)(param_1 + 0x1ebc),
                    ((unsigned __int64)*(unsigned int *)(param_1 + 0x588) & 0x7fffffff) * 2 +
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x590) + -1 != param_2,1);
    return;
  }
  lVar1 = (__int64)((int)param_2 + 1 >> 1);
  lVar3 = lVar1 - (unsigned __int64)*(unsigned int *)(param_1 + 0x588);
  iVar4 = (int)lVar3;
  if ((iVar4 < 0) || (6 < iVar4)) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),7,3);
    uVar2 = 5;
  }
  else {
    uVar2 = 3;
    lVar1 = lVar3;
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),lVar1,uVar2);
  return;
}

