#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define TBLr 0
extern unsigned int *__imp__KeCertMonitorData;
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *auStack_110;
extern int fn_82645688();
extern int fn_82649D98();
extern int fn_82652438();
extern int fn_82652AA0();
extern int memset();
extern unsigned int uStack_120;


void fn_82652BA8(int param_1)

{
  unsigned int uVar1;
  int (**pcVar2)();
  unsigned __int64 uVar3;
  unsigned int uVar4;
  char cVar6;
  int iVar5;
  unsigned __int64 uVar7;
  unsigned __int64 uStack_120;
  unsigned char auStack_110 [248];
  
  uVar1 = *(unsigned int *)(param_1 + 0x4228);
  uVar7 = 0;
  if ((uVar1 & 0x400) == 0) {
    if ((uVar1 & 0x100) == 0) goto LAB_82652c04;
    if (*__imp__KeDebugMonitorData == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*__imp__KeDebugMonitorData + 0x20);
    }
    iVar5 = (**(int (***)())(iVar5 + 0xc))(0xffffffff821cc5b0,(uVar1 & 0xff) << 0x14);
    *(int *)(param_1 + 0x422c) = iVar5;
    if (-1 < iVar5) {
      *(unsigned int *)(param_1 + 0x4228) = *(unsigned int *)(param_1 + 0x4228) & 0xfffffaff | 0x400;
      goto LAB_82652c04;
    }
  }
  else {
    if (*__imp__KeDebugMonitorData == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*__imp__KeDebugMonitorData + 0x20);
    }
    uVar4 = (**(int (***)())(iVar5 + 0x10))();
    *(unsigned int *)(param_1 + 0x422c) = uVar4;
  }
  *(unsigned int *)(param_1 + 0x4228) = 0;
LAB_82652c04:
  uStack_120 = CONCAT44(*(unsigned int *)(param_1 + 0x5528),*(int *)(param_1 + 0x5524));
  uVar3 = TBLr;
  if (uStack_120 != 0) {
    *(int *)(param_1 + 0x5520) = (int)uVar3 - *(int *)(param_1 + 0x5524);
  }
  uStack_120 = ((((unsigned __int64)(uStack_120)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uVar3 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  *(int *)(param_1 + 0x5548) = (int)*(unsigned __int64 *)(param_1 + 0x5538);
  *(unsigned __int64 *)(param_1 + 0x5538) = 0;
  *(unsigned int *)(param_1 + 0x5528) = (((unsigned __int64)(uStack_120) >> 0) & 0xFFFFFFFF);
  *(int *)(param_1 + 0x5524) = (int)uVar3;
  *(int *)(param_1 + 0x554c) = (int)*(unsigned __int64 *)(param_1 + 0x5540);
  *(unsigned __int64 *)(param_1 + 0x5540) = 0;
  if (*(int *)(param_1 + 0x5568) == 1) {
    cVar6 = fn_82652AA0(param_1);
    if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
      memset(auStack_110,0,0xf0);
    }
    *(unsigned int *)(param_1 + 0x5568) = 0;
  }
  else if (*(int *)(param_1 + 0x5568) == 2) {
    if ((*(unsigned char *)(param_1 + 0x2abe) & 1) == 0) {
      if ((*(unsigned char *)(param_1 + 0x2abe) & 1) != 1) {
        fn_82645688(param_1);
        VdEnableDisableClockGating(0);
      }
      *(unsigned char *)(param_1 + 0x2abe) = *(unsigned char *)(param_1 + 0x2abe) | 1;
    }
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x5570) != 3) {
      uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5570) + 1;
    }
    if ((uVar7 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x556c)) {
      fn_82649D98(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x5560) + (uVar7 & 0xfffffff) * 0x10)
      ;
      *(int *)(param_1 + 0x5570) = (int)uVar7;
    }
  }
  fn_82652438(param_1);
  if ((*__imp__KeCertMonitorData != 0) &&
     (pcVar2 = *(int (***)())(*__imp__KeCertMonitorData + 4), pcVar2 != (int (**)())0x0)) {
    (*pcVar2)(0);
  }
  return;
}

