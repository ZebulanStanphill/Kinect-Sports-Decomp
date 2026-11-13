typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82645740();
extern int fn_829CB7D8();
extern int fn_829CFA60();
extern int fn_829D0440();
extern int fn_82A1F2B8();
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215008;
extern unsigned int lbl_83215054;
extern unsigned int lbl_83217128;
extern unsigned int lbl_83217324;
extern unsigned int lbl_83217328;
extern unsigned int lbl_83217334;
extern unsigned int uRam832172d4;
extern unsigned int uRam832172d8;
extern unsigned int uRam832172dc;
extern unsigned int uRam832172e0;
extern unsigned int uRam832172e4;


void fn_829D0B58(int param_1,int param_2)

{
  bool bVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  int *piVar5;
  unsigned int uVar6;
  
  iVar3 = KeGetCurrentProcessType();
  if (iVar3 != 1) {
    return;
  }
  if (param_2 != 1) {
    return;
  }
  RtlEnterCriticalSection(0xffffffff8315c428);
  uVar6 = 0;
  piVar5 = &lbl_83217128;
  do {
    if (*piVar5 == param_1) break;
    piVar5 = piVar5 + 1;
    uVar6 = uVar6 + 1;
  } while ((int)piVar5 < -0x7cde8ec0);
  RtlLeaveCriticalSection(0xffffffff8315c428);
  if (uVar6 == 6) {
    fn_82A1F2B8(0xffffffff820573e0);
    return;
  }
  RtlEnterCriticalSection(0xffffffff8315c428);
  *(unsigned int *)(param_1 + 0x38) = 1;
  iVar3 = fn_829CFA60(param_1);
  iVar4 = fn_829CB7D8(1);
  if ((iVar4 != 0) || (iVar3 != 0)) {
    RtlLeaveCriticalSection(0xffffffff8315c428);
    fn_82645740(lbl_83215054);
    while( true ) {
      RtlEnterCriticalSection(0xffffffff8315c428);
      iVar3 = fn_829CFA60(param_1);
      uVar2 = KfAcquireSpinLock(0xffffffff8321732c);
      if ((lbl_83217324 != 0) || (bVar1 = false, lbl_83217328 != 0)) {
        bVar1 = true;
      }
      KfReleaseSpinLock(0xffffffff8321732c,uVar2);
      if ((!bVar1) && (iVar3 == 0)) break;
      RtlLeaveCriticalSection(0xffffffff8315c428);
      KeSetEvent(0xffffffff83215034,1,0);
    }
  }
  if (uVar6 < 5) {
    if (uVar6 == 1) {
      uRam832172e4 = 0;
    }
    else if (uVar6 == 2) {
      uRam832172d4 = 0;
    }
    else {
      if (uVar6 != 3) {
        if (uVar6 != 0) {
          uRam832172dc = 0;
          goto LAB_829d0d5c;
        }
        uRam832172d8 = 0;
        goto LAB_829d0d44;
      }
      uRam832172e0 = 0;
    }
  }
  else if (uVar6 == 0) {
LAB_829d0d44:
    if (lbl_83215008 != 0) {
LAB_829d0d6c:
      bVar1 = true;
      goto LAB_829d0ce4;
    }
  }
  else if (uVar6 == 4) {
LAB_829d0d5c:
    if ((lbl_83215000 & 0x80000000) == 0) goto LAB_829d0d6c;
  }
  bVar1 = false;
  (&lbl_83217128)[uVar6] = 0;
LAB_829d0ce4:
  fn_829D0440(param_1,0);
  RtlLeaveCriticalSection(0xffffffff8315c428);
  if (bVar1) {
    *(unsigned int *)(param_1 + 0x38) = 0;
    sync(0);
  }
  else {
    ObDereferenceObject(param_1);
    sync(0);
  }
  lbl_83217334 = 0;
  return;
}

