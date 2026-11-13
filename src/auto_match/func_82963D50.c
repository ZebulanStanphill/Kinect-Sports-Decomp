extern int fn_829301D0();
extern int fn_82934160();
extern int fn_82F68CC0();


unsigned __int64 fn_82963D50(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80004005;
  }
  *param_1 = *param_2;
  uVar1 = param_2[1];
  if ((unsigned int)param_1[1] < uVar1) {
    if (uVar1 < 9) {
      param_1[2] = param_1 + 0x10;
      goto LAB_82963da0;
    }
    iVar3 = fn_82934160();
    iVar3 = fn_829301D0(*(unsigned int *)(iVar3 + 0x10),uVar1 << 2,0x10);
    param_1[2] = iVar3;
    if (iVar3 != 0) goto LAB_82963da0;
LAB_82963dfc:
    uVar2 = 0xffffffff8007000e;
  }
  else {
LAB_82963da0:
    iVar3 = param_2[1];
    param_1[1] = iVar3;
    fn_82F68CC0(param_1[2],param_2[2],iVar3 << 2);
    uVar1 = param_2[3];
    if ((unsigned int)param_1[3] < uVar1) {
      if (uVar1 < 5) {
        param_1[4] = param_1 + 0x18;
      }
      else {
        iVar3 = fn_82934160();
        iVar3 = fn_829301D0(*(unsigned int *)(iVar3 + 0x10),uVar1 << 2,0x10);
        param_1[4] = iVar3;
        if (iVar3 == 0) goto LAB_82963dfc;
      }
    }
    iVar3 = param_2[3];
    param_1[3] = iVar3;
    fn_82F68CC0(param_1[4],param_2[4],iVar3 << 2);
    uVar2 = 0;
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xc] = param_2[0xc];
    param_1[0xf] = param_2[0xf];
  }
  return uVar2;
}

