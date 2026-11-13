extern unsigned int *auStack_40;
extern int fn_82A3F758();
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82E50D88();
extern int fn_82E50FA0();
extern int fn_82E644B8();


unsigned __int64 fn_82E64938(int param_1,unsigned int *param_2)

{
  short *psVar1;
  __int64 lVar2;
  short *psVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned int auStack_40;
  
  lVar6 = 0;
  fn_82E50D88(param_1 + 0xc);
  if (param_2 == (unsigned int *)0x0) {
LAB_82e64964:
    uVar7 = 0xffffffff80004003;
    goto LAB_82e64a64;
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 0xb8) == -1) {
    uVar7 = 0xffffffff80004005;
    goto LAB_82e64a64;
  }
  lVar2 = fn_82E644B8(param_1 + 0x4c,*(int *)(param_1 + 0xb8),&auStack_40);
  puVar5 = (unsigned int *)(-(unsigned int)(lVar2 != 0) & auStack_40);
  if (puVar5 == (unsigned int *)0x0) goto LAB_82e64964;
  psVar1 = (short *)*puVar5;
  lVar2 = 0;
  if (psVar1 == (short *)0x0) {
LAB_82e649f4:
    uVar7 = 0xffffffff80070057;
  }
  else {
    uVar4 = 0x104;
    uVar7 = 0;
    psVar3 = psVar1;
    do {
      if (*psVar3 == 0) break;
      uVar4 = uVar4 - 1;
      psVar3 = psVar3 + 1;
    } while (uVar4 != 0);
    if ((uVar4 & 0xffffffff) == 0) goto LAB_82e649f4;
    lVar2 = 0x104 - uVar4;
  }
  if (-1 < (int)uVar7) {
    lVar6 = fn_82E4FE08((lVar2 + 1U & 0x7fffffff) << 1);
    if (lVar6 == 0) {
      uVar7 = 0xffffffff8007000e;
    }
    else {
      if ((lVar2 + 1U & 0xffffffff) < 0x80000000) {
        uVar7 = fn_82A3F758(lVar6,lVar2 + 1U,psVar1);
      }
      else {
        uVar7 = 0xffffffff80070057;
      }
      if (-1 < (int)uVar7) {
        *param_2 = (int)lVar6;
        lVar6 = 0;
      }
    }
  }
LAB_82e64a64:
  fn_82E4FE40(lVar6);
  fn_82E50FA0(param_1 + 0xc);
  return uVar7;
}

