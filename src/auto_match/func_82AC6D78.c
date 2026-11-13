typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE6D0();
extern int fn_82B841E8();


unsigned int fn_82AC6D78(unsigned __int64 param_1,unsigned int param_2)

{
  int iVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar4 = *(unsigned int *)((param_2 & 0xfffffffe) + 0x24);
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar5 = uVar4 - 0x28;
    if (uVar5 != 0) {
      uVar3 = *(unsigned int *)(uVar4 - 0x20) >> 7 & 0x7f;
      if ((uVar3 == 0) || (bVar2 = true, 0x1f < uVar3)) {
        bVar2 = false;
      }
      if (bVar2) {
        uVar3 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
        if ((uVar3 < 0x20) || (bVar2 = true, 0x52 < uVar3)) {
          bVar2 = false;
        }
        if ((bVar2) && (uVar3 = fn_82ABE6D0(uVar5), param_2 == uVar3)) {
          if ((*(unsigned int *)(uVar4 - 4) & 1) != 0) goto LAB_82ac6d9c;
          uVar5 = (*(unsigned int *)(uVar4 - 4) & 0xfffffffe) - 0x28;
        }
      }
      if ((uVar5 != 0) && (uVar4 = uVar5, (*(unsigned int *)(uVar5 + 8) & 0x3f80) == 0x3f00))
      goto LAB_82ac6ed4;
    }
  }
  else {
LAB_82ac6d9c:
    uVar5 = 0;
  }
  uVar4 = fn_82B841E8(param_1,*(unsigned int *)(param_2 + 0x1c),0,0x7e,0,0);
  uVar3 = uVar4 & 0xfffffffe;
  if (uVar5 == 0) {
    iVar1 = *(int *)(param_2 + 0x1c);
    *(unsigned int *)(uVar3 + 0x28) = *(unsigned int *)(iVar1 + 0x1c);
    *(unsigned int *)((*(unsigned int *)(iVar1 + 0x1c) & 0xfffffffe) + 0x24) = uVar3 + 0x28;
    *(unsigned int *)(uVar3 + 0x24) = iVar1 + 0x1cU | 1;
    *(unsigned int *)(iVar1 + 0x1c) = uVar3;
  }
  else {
    *(unsigned int *)(uVar3 + 0x28) = *(unsigned int *)(uVar5 + 0x28);
    *(unsigned int *)((*(unsigned int *)(uVar5 + 0x28) & 0xfffffffe) + 0x24) = uVar3 + 0x28;
    *(unsigned int *)(uVar3 + 0x24) = uVar5 + 0x28;
    *(unsigned int *)(uVar5 + 0x28) = uVar3;
  }
LAB_82ac6ed4:
  *(unsigned int *)(uVar4 + 0x14) = *(unsigned int *)(uVar4 + 0x14) | 0x10000;
  return uVar4;
}

