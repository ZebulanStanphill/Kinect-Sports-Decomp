extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_8225F160();
extern int fn_823AB478();
extern int fn_8245B458();
extern int fn_8245B630();
extern int fn_828B8F40();
extern int fn_82A1D7A8();
extern int fn_82A1DD38();
extern int fn_82A1E228();
extern int fn_82A1E230();
extern int fn_82CE0668();
extern int fn_82F68CC0();
extern unsigned int lbl_83265988;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


unsigned __int64
fn_8245A6C0(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int param_5,
             unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  unsigned short uVar6;
  int iVar5;
  short sVar8;
  unsigned int uVar7;
  int *piVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned short in_stack_00000056;
  unsigned __int64 auStack_c0 [2];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [4];
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 9;
  }
  if (param_5 == 1) {
    param_4 = 6;
  }
  if (param_5 == 0) {
    iVar5 = fn_8225F160();
    iVar5 = *(int *)(iVar5 + 8);
    if ((iVar5 == 1) || (iVar5 == 2)) {
      uVar10 = 5;
    }
    else {
      uVar10 = -(unsigned int)(iVar5 == 0) & 4;
    }
  }
  else if (param_5 == 1) {
    uVar10 = 1;
  }
  else if (param_5 < 3) {
    uVar10 = 2;
  }
  else {
    uVar10 = 3;
  }
  uVar1 = fn_823AB478(lbl_83265988);
  piVar9 = (int *)(param_1 + 0x80068);
  uVar1 = -(((uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar1 < 4)) & uVar1;
  if (*piVar9 != 0) {
    return 10;
  }
  iVar5 = param_1 + 0x8008c;
  RtlEnterCriticalSection(iVar5);
  if (*piVar9 != 0) {
    if (iVar5 == 0) {
      return 10;
    }
    RtlLeaveCriticalSection(iVar5);
    return 10;
  }
  *piVar9 = 1;
  if (iVar5 != 0) {
    RtlLeaveCriticalSection(iVar5);
  }
  fn_82CE0668(auStack_b0,0x10);
  fn_82A1E228(auStack_c0);
  *(unsigned int *)(param_1 + 0x80088) = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < 4)) {
    uVar2 = fn_8225C590();
    iVar3 = fn_8225D9B8(uVar2,uVar1);
    if (iVar3 != 0) {
      puVar4 = (unsigned __int64 *)fn_828B8F40();
      uVar2 = *puVar4;
      goto LAB_8245a83c;
    }
  }
  uVar2 = 0;
LAB_8245a83c:
  uVar7 = *(unsigned int *)(param_1 + 0x80074);
  uVar12 = (unsigned __int64)uVar7;
  *(unsigned __int64 *)(param_1 + 0x800c0) = uVar2;
  *(unsigned char *)(param_1 + 0xc) = 3;
  uVar11 = (unsigned int)param_3;
  *(unsigned int *)(param_1 + 0x8006c) = uVar11;
  *(unsigned int *)(param_1 + 0x80070) = param_2;
  sVar8 = (short)((param_3 & 0xffffffff) / uVar12);
  if (param_3 != (__int64)(int)((param_3 & 0xffffffff) / uVar12) * (__int64)(int)uVar7) {
    sVar8 = sVar8 + 1;
  }
  *(short *)(param_1 + 0x26) = sVar8;
  *(unsigned char *)(param_1 + 0xf) = 1;
  *(unsigned short *)(param_1 + 0x24) = 0;
  if ((param_3 & 0xffffffff) <= (unsigned __int64)uVar7) {
    uVar7 = uVar11;
  }
  *(unsigned int *)(param_1 + 0x20) = uVar7;
  fn_82F68CC0(param_1 + 0x10,auStack_b0,0x10);
  fn_82F68CC0(param_1 + 0x28,param_1 + 0x800ac,0x10);
  iVar3 = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(iVar3 + 0x5c0);
  *(unsigned short *)(param_1 + 0xd) = *(unsigned short *)(iVar3 + 0x690);
  *(unsigned int *)(param_1 + 0x3e) = uVar11;
  *(unsigned __int64 *)(param_1 + 0x42) = auStack_c0[0];
  RtlEnterCriticalSection(iVar3 + 0x1c);
  uStack_9c = *(unsigned int *)(iVar3 + 0x6bc);
  uStack_98 = *(unsigned int *)(iVar3 + 0x6c0);
  uStack_94 = *(unsigned int *)(iVar3 + 0x6c4);
  if (iVar3 != -0x1c) {
    RtlLeaveCriticalSection(iVar3 + 0x1c);
  }
  fn_82F68CC0(param_1 + 0x4a,auStack_a0,0x10);
  *(unsigned int *)(param_1 + 0x5a) = (unsigned int)in_stack_00000056 << 0x10 | param_8 & 0xffff;
  *(unsigned int *)(param_1 + 0x5e) =
       (((param_7 & 0xff) << 8 | param_4 & 0xff) << 8 | uVar10) << 8 | param_6 & 0xff;
  uVar6 = fn_82A1E230();
  *(unsigned short *)(param_1 + 0x62) = uVar6;
  uVar6 = fn_82A1D7A8();
  *(unsigned short *)(param_1 + 100) = uVar6;
  *(unsigned char *)(param_1 + 0x3d) = 0;
  *(unsigned char *)(param_1 + 0x3c) = (unsigned char)((uVar1 & 0xffffffff) << 4) | 0x40;
  fn_82A1DD38(param_1 + 0x66,*(unsigned int *)(param_1 + 0x80070),
                    *(unsigned int *)(param_1 + 0x20));
  uVar10 = *(unsigned int *)(param_1 + 0x20);
  uVar7 = *(unsigned int *)(param_1 + 0x80074);
  uVar2 = fn_8245B458();
  iVar3 = fn_8245B630(uVar2,param_1 + 0xc,(uVar10 - uVar12) + (unsigned __int64)uVar7 + 0x5a,param_1);
  if (iVar3 == 0) {
    RtlEnterCriticalSection(iVar5);
    *piVar9 = 0;
    if (iVar5 != 0) {
      RtlLeaveCriticalSection(iVar5);
    }
    iVar5 = fn_8245B458();
    if (*(int *)(iVar5 + 0x588) != 0) {
      iVar5 = fn_8245B458();
      if (*(int *)(iVar5 + 0x6a4) == 3) {
        return 10;
      }
      return 2;
    }
    return 1;
  }
  return 0xb;
}

