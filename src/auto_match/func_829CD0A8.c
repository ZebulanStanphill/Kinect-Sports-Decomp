typedef unsigned char bool;
#define false 0
#define TBLr 0
extern int fn_829C9C30();
extern int fn_829CCD78();
extern int iRam832172ec;
extern int iRam832172f0;
extern int iRam832172f4;
extern int iRam832172f8;
extern unsigned int iStack_60;
extern unsigned int lbl_83215070;
extern unsigned int *lbl_8321507C;
extern unsigned int uRam832154c0;
extern unsigned int uRam832172fc;
extern unsigned int uStack_5c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_829CD0A8(int param_1,unsigned int param_2,int param_3)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int *puVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  struct { int first; unsigned int second; } stack_pair_60;

  
  uVar3 = uRam832154c0;
  bVar1 = false;
  puVar8 = (unsigned int *)0x0;
  iRam832172f0 = iRam832172f0 + 1;
  uVar4 = TBLr;
  uVar5 = KfAcquireSpinLock(0xffffffff8321506c);
  puVar2 = *(unsigned int **)(param_1 + 0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if ((-1 < (int)param_2) && (param_3 != 0x96000)) {
    if (param_3 == 0x67200) {
      *puVar2 = 0x80;
    }
    else {
      puVar2[1] = 0xc0000206;
    }
  }
  puVar2[0x17] = (unsigned int)uVar4;
  puVar2[0x18] = uVar3;
  puVar2[0x16] = puVar2[0x12];
  if ((int)puVar2[1] < 0) {
    iRam832172f4 = iRam832172f4 + 1;
    iVar7 = fn_829CCD78(0);
    if (iVar7 != 0) {
      puVar8 = puVar2;
    }
  }
  else {
    stack_pair_60.second = 0;
    stack_pair_60.first = param_1;
    uVar6 = XamXStudioRequest(0x1004,&stack_pair_60.first);
    uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)stack_pair_60.second;
    if (lbl_8321507C != (unsigned int *)0x0) {
      *lbl_8321507C = *lbl_8321507C & 0xfffffffb;
      bVar1 = (*lbl_8321507C & 0x20) == 0x20;
      if ((*lbl_8321507C & 2) == 0) {
        puVar8 = lbl_8321507C;
      }
      iRam832172ec = iRam832172ec + 1;
    }
    uVar3 = *puVar2;
    *puVar2 = uVar3 | 4;
    if ((uVar6 & 4) == 4) {
      *puVar2 = uVar3 | 0x24;
    }
    if (bVar1) {
      *puVar2 = *puVar2 | 0x20;
    }
    if ((uVar6 & 3) != 0) {
      *puVar2 = *puVar2 | 0x40;
    }
    if (uRam832172fc != 0xffffffff) {
      iRam832172f8 = (puVar2[0x12] - uRam832172fc) + iRam832172f8 + -1;
    }
    uRam832172fc = puVar2[0x12];
    sync(0);
    lbl_8321507C = puVar2;
    KeSetEvent(0xffffffff83215024,1,0);
  }
  KfReleaseSpinLock(0xffffffff8321506c,uVar5);
  if (puVar8 != (unsigned int *)0x0) {
    fn_829C9C30(puVar8);
  }
  do {
    uVar6 = (unsigned __int64)lbl_83215070;
    if (in_RESERVE != '\0') {
      lbl_83215070 = storeWordConditionalIndexed(uVar6 - 1,0,0xffffffff83215070);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)(uVar6 - 1) == 0) {
    sync(0);
    KeSetEvent(0xffffffff83215618,1,0);
  }
  return;
}

