#define true 1
extern int fn_82E76510();


unsigned __int64 fn_82E77410(int param_1,short param_2,unsigned __int64 param_3,unsigned short *param_4)

{
  unsigned short uVar1;
  short *psVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  if (param_4 == (unsigned short *)0x0) {
    return 0xffffffff80070057;
  }
  psVar2 = *(short **)(param_1 + 8);
  while( true ) {
    if (psVar2 == (short *)0x0) {
      return 0xffffffffc00d36b3;
    }
    if (*psVar2 == param_2) break;
    psVar2 = *(short **)(psVar2 + 4);
  }
  iVar3 = *(int *)(psVar2 + 2);
  uVar1 = *(unsigned short *)(iVar3 + 4);
  uVar5 = (unsigned __int64)uVar1;
  if ((uVar5 <= *param_4) && ((param_3 & 0xffffffff) != 0)) {
    *param_4 = uVar1;
    if (uVar5 == 0) {
      return 0;
    }
    uVar6 = 0;
    do {
      uVar4 = fn_82E76510(iVar3,uVar6,uVar6 * 0x12 + param_3);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < uVar5);
    return uVar4;
  }
  *param_4 = uVar1;
  return 0xffffffffc00d36b1;
}

