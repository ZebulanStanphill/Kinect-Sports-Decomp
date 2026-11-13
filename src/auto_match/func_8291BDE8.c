extern int fn_82631D68();
extern int fn_8265C940();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_8291BDE8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  
  *(int *)(param_1 + 0xc) = (int)param_3;
  uVar2 = fn_8265C940(param_3,0x24810000);
  *(int *)(param_1 + 8) = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    if (param_4 == '\0') {
      fn_82F68CC0(uVar2,param_2,*(unsigned int *)(param_1 + 0xc));
    }
    else {
      fn_82631D68(param_2,uVar2);
    }
    puVar1 = *(unsigned int **)(param_1 + 8);
    *(unsigned int **)(param_1 + 0x10) = puVar1;
    if (*puVar1 < 0x1c) {
      return 0xffffffff88760b59;
    }
    uVar2 = fn_8265C940(puVar1[3] << 2,0x24810000);
    *(int *)(param_1 + 0x14) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,*(int *)(*(int *)(param_1 + 0x10) + 0xc) << 2);
    }
  }
  return 0xffffffff8007000e;
}

