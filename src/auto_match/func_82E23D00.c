extern int fn_8265C940();
extern int fn_82E23C70();
extern int fn_82E25638();
extern int fn_82E25660();
extern int fn_82E25BC8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_82E23D00(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar3 = (int *)(param_1 + 0x18);
    fn_82F68CC0(piVar3,param_2,0x30);
    fn_82E23C70(param_1,piVar3);
    iVar1 = fn_82E25BC8(0x57564331);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      fn_82E25638();
      iVar1 = *piVar3 * *(int *)(param_1 + 0x1c) * 4;
      iVar2 = fn_82E25660(*(unsigned __int64 *)(param_1 + 0x20),*(unsigned __int64 *)(param_1 + 0x28),
                                *(unsigned __int64 *)(param_1 + 0x30),*(unsigned int *)(param_1 + 4),5);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x14) = iVar1;
        iVar1 = fn_8265C940(iVar1,0x208c804d);
        *(int *)(param_1 + 0x10) = iVar1;
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(param_1 + 0x5c,0,0x58);
        }
      }
    }
    uVar4 = 0xffffffff80004005;
  }
  else {
    uVar4 = 0xffffffff8000ffff;
  }
  return uVar4;
}

