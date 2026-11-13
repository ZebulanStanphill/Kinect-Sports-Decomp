extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_e0;
extern int fn_82273C88();
extern int fn_822902E8();
extern int fn_82290458();
extern int fn_82358FD8();
extern int fn_82672C20();
extern int fn_82F64988();
extern unsigned int iStack_1dc;
extern unsigned int iStack_1e0;
extern unsigned int lbl_820E975C;
extern unsigned int uStack0000001c;
extern unsigned int uStack_168;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1f0;


void fn_822A4920(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uStack0000001c;
  unsigned int uStack_1f0;
  int iStack_1e0;
  int iStack_1dc;
  unsigned int uStack_1d8;
  unsigned int uStack_1d0;
  unsigned int uStack_1cc;
  double dStack_1c8;
  struct { unsigned int first; unsigned int second; } stack_pair_1c0;

  unsigned char *puStack_1b8;
  unsigned int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned char *puStack_1a8;
  struct { unsigned int first; unsigned int second; } stack_pair_1a0;

  double dStack_198;
  unsigned int uStack_190;
  unsigned int uStack_18c;
  unsigned char *puStack_188;
  unsigned int uStack_180;
  unsigned int uStack_17c;
  unsigned char *puStack_178;
  __int64 lStack_170;
  unsigned __int64 uStack_168;
  unsigned char auStack_160 [64];
  unsigned char auStack_120 [64];
  unsigned char auStack_e0 [224];

  uStack0000001c = (unsigned int)param_2;
  if (*(int *)(*param_1 + 0x28) != 0) {
    fn_82358FD8(param_2,auStack_e0,0x20,0xffffffff821ac2e8);
    uStack_1f0 = 5;
    uVar5 = 1;
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 + *param_1);
      if (iVar6 == 1) {
        uVar2 = 0xffffffff821ac1e0;
LAB_822a4a28:
        fn_82F64988(auStack_160,0x20,uVar2);
      }
      else {
        if (iVar6 == 2) {
          uVar2 = 0xffffffff821ac1d0;
          goto LAB_822a4a28;
        }
        if (iVar6 == 3) {
          uVar2 = 0xffffffff821ac1f8;
          goto LAB_822a4a28;
        }
        if (iVar6 == 4) {
          uVar2 = 0xffffffff821ac1b0;
          goto LAB_822a4a28;
        }
        uVar2 = 0xffffffff821ac1c0;
        if (iVar6 == 5) goto LAB_822a4a28;
      }
      iVar6 = *(int *)(iVar4 + *param_1);
      if (iVar6 == 1) {
        uVar2 = 0xffffffff821ac248;
LAB_822a4a88:
        fn_82358FD8(uStack0000001c,auStack_120,0x20,uVar2);
      }
      else {
        if (iVar6 == 2) {
          uVar2 = 0xffffffff821ac234;
          goto LAB_822a4a88;
        }
        if (iVar6 == 3) {
          uVar2 = 0xffffffff821ac258;
          goto LAB_822a4a88;
        }
        if (iVar6 == 4) {
          uVar2 = 0xffffffff821ac20c;
          goto LAB_822a4a88;
        }
        uVar2 = 0xffffffff821ac220;
        if (iVar6 == 5) goto LAB_822a4a88;
      }
      iVar6 = 1;
      if (uVar5 < *(unsigned int *)(*param_1 + 0xbc)) {
        iVar6 = 0;
      }
      else if (uVar5 == *(unsigned int *)(*param_1 + 0xbc)) {
        iVar6 = 2;
      }
      uStack_168 = (unsigned __int64)uVar5;
      iStack_1e0 = 0;
      iStack_1dc = 0;
      dStack_198 = (double)uStack_168;
      uStack_1d8 = 0;
      stack_pair_1a0.first = 0;
      stack_pair_1a0.second = 3;
      fn_82290458(&iStack_1e0,&stack_pair_1a0.first);
      fn_82273C88(&stack_pair_1a0.first);
      puStack_178 = auStack_160;
      uStack_180 = 0;
      uStack_17c = 5;
      fn_82290458(&iStack_1e0,&uStack_180);
      fn_82273C88(&uStack_180);
      lStack_170 = (__int64)iVar6;
      uStack_1d0 = 0;
      dStack_1c8 = (double)lStack_170;
      uStack_1cc = 3;
      fn_82290458(&iStack_1e0,&uStack_1d0);
      fn_82273C88(&uStack_1d0);
      if (uVar5 == *(unsigned int *)(*param_1 + 0xbc)) {
        puStack_1b8 = auStack_e0;
        stack_pair_1c0.first = 0;
        stack_pair_1c0.second = 5;
        fn_82290458(&iStack_1e0,&stack_pair_1c0.first);
        puVar1 = &stack_pair_1c0.first;
      }
      else {
        puStack_1a8 = &lbl_820E975C;
        uStack_1b0 = 0;
        uStack_1ac = 5;
        fn_82290458(&iStack_1e0,&uStack_1b0);
        puVar1 = &uStack_1b0;
      }
      fn_82273C88(puVar1);
      puStack_188 = auStack_120;
      uStack_190 = 0;
      uStack_18c = 5;
      fn_82290458(&iStack_1e0,&uStack_190);
      fn_82273C88(&uStack_190);
      fn_82672C20(*(unsigned int *)(*param_1 + 0x28),0xffffffff821ac300,iStack_1e0,
                        iStack_1dc - iStack_1e0 >> 4);
      fn_822902E8(&iStack_1e0);
      uVar3 = (unsigned __int64)uStack_1f0;
      iVar4 = iVar4 + 8;
      uVar5 = uVar5 + 1;
      uStack_1f0 = (unsigned int)(uVar3 - 1);
    } while (uVar3 - 1 != 0);
  }
  return;
}
