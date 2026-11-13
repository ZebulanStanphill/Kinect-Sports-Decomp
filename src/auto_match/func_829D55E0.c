#define true 1
extern int fn_829E0218();
extern int fn_82F691F0();


unsigned __int64 fn_829D55E0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned int uVar6;
  int iVar7;
  
  iVar7 = param_1 + 0xa10;
  iVar3 = param_1 + 0xc0;
  uVar2 = 0;
  piVar5 = (int *)(param_1 + 0x12930);
  while ((piVar5[1] != param_2 || (*piVar5 != *(int *)(param_2 * 0x150 + iVar3 + 0x144)))) {
    uVar2 = uVar2 + 1;
    piVar5 = piVar5 + 0x47ec;
    if (1 < (uVar2 & 0xffffffff)) {
      uVar6 = 0;
      while( true ) {
        iVar4 = *(int *)(iVar7 + 0x11f24) * 0x150 + iVar3;
        if ((*(int *)(iVar4 + 0x144) != *(int *)(iVar7 + 0x11f20)) || (*(int *)(iVar4 + 0x148) != 2)
           ) break;
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0x11fb0;
        if (1 < uVar6) {
          return 0;
        }
      }
      uVar1 = *(unsigned int *)(param_2 * 0x150 + iVar3 + 0x144);
      *(int *)(iVar7 + 0x11f24) = param_2;
      *(unsigned int *)(iVar7 + 0x11f20) = uVar1;
      fn_829E0218(iVar7);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(iVar7 + 0x11f28,0,0x84);
    }
  }
  return uVar2;
}

