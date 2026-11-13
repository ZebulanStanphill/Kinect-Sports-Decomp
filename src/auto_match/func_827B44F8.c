extern int fn_827B3858();
extern int fn_827B38C8();
extern int fn_827B3D38();
extern int fn_82F691F0();


unsigned __int64 fn_827B44F8(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x44) != 0 || *(int *)(param_1 + 0x48) != 0) {
    fn_827B3D38(param_1 + 0x14,param_1 + 0x3c);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0x7fffffff;
  *(unsigned int *)(param_1 + 0x40) = 0x7fffffff;
  *(unsigned int *)(param_1 + 0x48) = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x34) == 0) {
      fn_827B3858(param_1 + 0x24,iVar1,0x100);
      *(int *)(param_1 + 0x28) = iVar1;
      uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x58) - (unsigned __int64)*(unsigned int *)(param_1 + 0x50)) + 1;
      fn_827B38C8(param_1 + 0x30,uVar3,0x10);
      *(int *)(param_1 + 0x34) = (int)uVar3;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(param_1 + 0x30),0,(uVar3 & 0x1fffffff) << 3);
    }
    uVar2 = 1;
  }
  return uVar2;
}

