typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822CEE40();


unsigned __int64 fn_822CF1C0(unsigned __int64 param_1,int param_2)

{
  bool bVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  int iVar5;
  
  uVar4 = (unsigned int)(*(int *)((int)param_1 + 0x24) != 0);
  iVar3 = fn_822CEE40();
  if (iVar3 != 0) {
    iVar3 = fn_822CEE40(param_1);
    iVar5 = (int)param_1;
    bVar1 = true;
    if (*(int *)(iVar3 + 0x24) != 0) goto code_r0x822cf208;
  }
  iVar5 = (int)param_1;
  bVar1 = false;
code_r0x822cf208:
  if ((uVar4 == 0) || (!bVar1)) {
    *(unsigned int *)(iVar5 + 0x2a0) = 1;
    if (param_2 != 0) {
      *(unsigned int *)(iVar5 + 0x2a0) = 0;
      *(unsigned int *)(iVar5 + 0x2a4) = (unsigned int)LZCOUNT(*(unsigned int *)(iVar5 + 0x2a4)) >> 5;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

