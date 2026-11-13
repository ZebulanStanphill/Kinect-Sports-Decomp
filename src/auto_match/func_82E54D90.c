extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F691F0();


unsigned __int64 fn_82E54D90(int param_1,unsigned int param_2,short param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  uVar7 = 0;
  fn_82E50CB8(param_1 + 8);
  if (*(unsigned int *)(param_1 + 0x58) <= param_2) {
LAB_82e54dc4:
    uVar7 = 0xffffffff80070057;
    goto LAB_82e54ef8;
  }
  if (param_2 < *(unsigned int *)(param_1 + 0x58)) {
    piVar2 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x54));
    uVar1 = piVar2[1];
    if (0x7e < uVar1) {
      uVar7 = 0xffffffffc00d36b2;
      goto LAB_82e54ef8;
    }
    uVar5 = 0;
    if (uVar1 != 0) {
      iVar6 = 0;
      do {
        if (*(short *)(iVar6 + *piVar2) == param_3) goto LAB_82e54dc4;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 2;
      } while (uVar5 < (unsigned int)piVar2[1]);
    }
    uVar5 = piVar2[2];
    if (uVar1 <= uVar5) {
      if (uVar1 == uVar5) {
        uVar8 = (unsigned __int64)(uVar5 * 3 >> 1) + 1;
        uVar3 = uVar8 * 2 & 0xfffffffe;
        if (0x7fffffff < uVar8) {
          uVar3 = 0xffffffffffffffff;
        }
        lVar4 = fn_82E50BE8(uVar3,0,0,0,0);
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(lVar4,0,uVar8 * 2 & 0xfffffffe);
        }
        uVar7 = 0xffffffff8007000e;
      }
      else {
        *(short *)(piVar2[1] * 2 + *piVar2) = param_3;
        piVar2[1] = piVar2[1] + 1;
      }
      goto LAB_82e54ef8;
    }
  }
  uVar7 = 0xffffffff8000ffff;
LAB_82e54ef8:
  fn_82E50F10(param_1 + 8);
  return uVar7;
}

