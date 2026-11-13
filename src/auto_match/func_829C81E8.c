typedef unsigned char bool;
#define true 1
#define false 0
extern char cRam83215698;
extern int fn_829C7B18();
extern int fn_829C9BA0();
extern int fn_829CD860();
extern int iRam83215694;
extern unsigned int lbl_83215058;
extern unsigned int lbl_832156AC;
extern unsigned int lbl_8321570C;
extern unsigned int lbl_83215724;
extern unsigned int lbl_83215748;
extern unsigned int lbl_8321582C;
extern unsigned int lbl_83215A2C;
extern unsigned int lbl_83215A30;
extern unsigned int uRam83215a34;
extern unsigned int uRam83215a38;


void fn_829C81E8(int param_1,int param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  
  iVar6 = lbl_83215A2C;
  uVar2 = KfAcquireSpinLock(0xffffffff8321506c);
  if (param_2 < 0) {
    if (((lbl_83215058 != 0) && (param_2 != -0x3fffff5d)) && (param_2 != -0x3fffff63)) {
      iVar6 = iVar6 * 0x184;
      if ((*(int *)(&lbl_8321582C + iVar6) != 0) && (*(int *)(&lbl_832156AC + iVar6) == 0)) {
        KfReleaseSpinLock(0xffffffff8321506c,uVar2);
        fn_829C7B18();
        return;
      }
      KfReleaseSpinLock(0xffffffff8321506c,uVar2);
      iVar3 = fn_829C9BA0(0xffffffff832159b4);
      if (-1 < iVar3) {
        return;
      }
      *(unsigned int *)(&lbl_8321582C + iVar6) = 1;
      lbl_83215A30 = 0;
      return;
    }
    KfReleaseSpinLock(0xffffffff8321506c,uVar2);
    *(unsigned int *)(&lbl_8321582C + iVar6 * 0x184) = 1;
    lbl_83215A30 = 0;
    return;
  }
  if (iRam83215694 == 0) {
    iRam83215694 = 1;
    cRam83215698 = (char)*(unsigned int *)(param_1 + 0x18) + -1;
  }
  iVar3 = iVar6 * 0x184;
  *(unsigned int *)((iVar6 * 0x61 + *(int *)(iVar3 + -0x7cdea7d8)) * 4 + -0x7cdea7e0) =
       *(unsigned int *)(param_1 + 0x18);
  uRam83215a34 = *(unsigned int *)(param_1 + 0x18);
  uRam83215a38 = *(unsigned int *)(param_1 + 0x18);
  *(unsigned int *)(iVar3 + -0x7cdea7d8) = *(int *)(iVar3 + -0x7cdea7d8) - 1U & 1;
  KfReleaseSpinLock(0xffffffff8321506c,uVar2);
  bVar1 = false;
  uVar5 = 0;
  if (*(int *)(&lbl_83215724 + iVar3) == 1) {
    iVar6 = *(int *)(iVar3 + -0x7cdea8d8);
    if (iVar6 == 0) {
LAB_829c830c:
      uVar5 = 1;
      goto LAB_829c8344;
    }
    if (iVar6 == 2) {
LAB_829c8320:
      uVar5 = 2;
      goto LAB_829c8344;
    }
    if (iVar6 == 3) {
LAB_829c8338:
      uVar5 = 3;
      goto LAB_829c8344;
    }
  }
  else {
    if ((*(unsigned int *)(&lbl_8321570C + iVar3) & 1) == 0) {
      bVar1 = true;
      goto LAB_829c8344;
    }
    iVar6 = *(int *)(&lbl_83215748 + iVar3);
    uVar4 = 0x7d000000000 / (__int64)*(int *)(iVar3 + -0x7cdea8b0);
    trapDoubleWordImmediate(6,(__int64)*(int *)(iVar3 + -0x7cdea8b0),0);
    if (iVar6 < (int)uVar4) goto LAB_829c830c;
    if (iVar6 < (int)((uVar4 & 0xffffffff) << 1)) goto LAB_829c8320;
    if (iVar6 < (int)uVar4 + (int)((uVar4 & 0xffffffff) << 1)) goto LAB_829c8338;
  }
  uVar5 = 1000;
LAB_829c8344:
  if (!bVar1) {
    fn_829CD860((__int64)
                      (int)(-(unsigned int)(uVar5 <= *(unsigned int *)(iVar3 + -0x7cdea8f0)) &
                           *(unsigned int *)(iVar3 + -0x7cdea8f0)) * 0x196e6a);
  }
  fn_829C7B18();
  return;
}

