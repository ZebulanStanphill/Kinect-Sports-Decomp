typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_829D47B0();
extern int fn_829D7230();
extern int fn_82A28E60();
extern int fn_82A2B1C8();
extern int fn_82A2B288();
extern int fn_8314216C();
extern int fn_8314218C();
extern int fn_8314219C();
extern unsigned int iStack_64;
extern unsigned int iStack_70;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


unsigned __int64 fn_829D7480(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  int iStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  int iStack_64;
  int aiStack_60 [24];
  
  uVar6 = *(unsigned __int64 *)(param_1 + 0x38);
  iStack_70 = 0;
  uStack_68 = 0;
  iVar3 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar3);
  uVar4 = 0;
  piVar5 = (int *)(lbl_832179FC + 0x96c);
  do {
    if (*piVar5 == *(int *)(param_1 + 0x1c)) {
      bVar1 = true;
      goto LAB_829d74f0;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 0x18;
  } while (uVar4 < 2);
  bVar1 = false;
LAB_829d74f0:
  if (bVar1) {
    RtlLeaveCriticalSection(iVar3);
    return 0xffffffff800700aa;
  }
  RtlLeaveCriticalSection(iVar3);
  fn_829D47B0(aiStack_60,0x32000);
  fn_829D47B0(&iStack_64,0x32000);
  uStack_6c = 0x32000;
  if (aiStack_60[0] == 0) {
    if (iStack_64 != 0) {
      fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0);
    }
LAB_829d768c:
    if (aiStack_60[0] != 0) {
      fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,aiStack_60[0]);
    }
    return 0xffffffff8007000e;
  }
  if (iStack_64 == 0) goto LAB_829d768c;
  iVar3 = fn_8314216C(uVar6,&iStack_70,aiStack_60[0],&uStack_6c,0);
  if ((iVar3 == 0) && (iStack_70 != 0)) {
    iStack_70 = iStack_70 + 1;
    if (iStack_70 != -0x80000000) goto LAB_829d75a8;
  }
  else {
    uStack_6c = 0;
  }
  iStack_70 = 1;
LAB_829d75a8:
  uVar2 = fn_829D7230(param_2,aiStack_60[0],uStack_6c,iStack_64,&uStack_68);
  if (-1 < (__int64)uVar2) {
    fn_82A2B1C8(uVar6,0);
    uVar2 = fn_82A2B288(uVar6,iStack_70,iStack_64,uStack_68,0);
    if (((-1 < (__int64)uVar2) &&
        (uVar2 = fn_8314219C(*(unsigned int *)(param_1 + 0x30),1), -1 < (__int64)uVar2)) &&
       (uVar2 = fn_8314218C(uVar6,&iStack_70,iStack_64,&uStack_68,0), 0 < (int)uVar2)) {
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
  }
  fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,iStack_64);
  fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,aiStack_60[0]);
  return uVar2;
}

