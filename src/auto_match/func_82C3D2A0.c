extern int fn_82C3CD98();
extern int fn_82C4D608();


unsigned __int64
fn_82C3D2A0(int param_1,__int64 param_2,unsigned int param_3,unsigned int *param_4,unsigned int *param_5,
             unsigned __int64 *param_6,unsigned int *param_7)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((param_3 < *(unsigned int *)(iVar1 + 0x6c)) || (uVar2 = *(unsigned int *)(iVar1 + 0x24), (uVar2 & 1) != 0)) {
    uVar5 = 0xffffffff80500006;
  }
  else {
    uVar3 = *(unsigned int *)(iVar1 + 0x20);
    uVar4 = uVar3 >> 1;
    iVar6 = fn_82C4D608(*(unsigned int *)(iVar1 + 0x44),1,param_2,
                              (__int64)(int)uVar2 * (__int64)(int)uVar3 + param_2,
                              (((__int64)(int)uVar2 * (__int64)(int)uVar4 & 0xffffffffU) >> 1) +
                              (__int64)(int)uVar2 * (__int64)(int)uVar3 + param_2,uVar3,uVar4,
                              uVar4);
    if (iVar6 == 0) {
      *param_4 = *(unsigned int *)(iVar1 + 0x6c);
      *param_5 = 0;
    }
    else if (iVar6 == 2) {
      *param_4 = 0;
      *param_5 = 0;
    }
    *param_6 = *(unsigned __int64 *)(iVar1 + 0x48);
    if (param_7 != (unsigned int *)0x0) {
      *param_7 = 1;
    }
    uVar5 = fn_82C3CD98();
  }
  return uVar5;
}

