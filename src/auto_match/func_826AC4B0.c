extern unsigned int *auStack_80;
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_827120C8();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_88;


void fn_826AC4B0(int param_1)

{
  unsigned int uVar1;
  int iVar4;
  __int64 lVar2;
  unsigned __int64 uVar3;
  char cVar5;
  __int64 lVar6;
  int *piVar7;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  unsigned __int64 uStack_88;
  unsigned char auStack_80 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned short uStack_48;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar4 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x40))();
    lVar2 = (**(int (***)())(*(int *)(iVar4 + 8) + 0xc))((int *)(iVar4 + 8),0x1b);
    if (lVar2 != 0) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      iVar4 = fn_82696958(uVar3,uVar1);
      if (iVar4 != 0) {
        *(unsigned int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
        piVar7 = (int *)(iVar4 + 0x10);
        uStack_48 = 0;
        auStack_80[0] = 0;
        fn_82681728(&iStack_b0,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff82006688);
        cVar5 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_b0,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_b0 + 8) - 1;
        *(int *)(iStack_b0 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_b0);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 1;
          stack_pair_70.first = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_ac,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820065d4);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_ac,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_ac + 8) - 1;
        *(int *)(iStack_ac + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_ac);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 2;
          stack_pair_70.second = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_a8,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff8200744c);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_a8,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_a8 + 8) - 1;
        *(int *)(iStack_a8 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_a8);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 4;
          uStack_68 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_a4,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff82007438);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_a4,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_a4 + 8) - 1;
        *(int *)(iStack_a4 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_a4);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 8;
          uStack_64 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_a0,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff8200741c);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_a0,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_a0 + 8) - 1;
        *(int *)(iStack_a0 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_a0);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 0x10;
          uStack_60 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_9c,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073fc);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_9c,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_9c + 8) - 1;
        *(int *)(iStack_9c + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_9c);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 0x20;
          uStack_5c = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_98,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073f0);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_98,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_98 + 8) - 1;
        *(int *)(iStack_98 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_98);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 0x40;
          uStack_50 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_94,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073d8);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_94,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_94 + 8) - 1;
        *(int *)(iStack_94 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_94);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 0x80;
          uStack_58 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_90,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073b8);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_90,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_90 + 8) - 1;
        *(int *)(iStack_90 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_90);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 0x100;
          uStack_54 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_82681728(&iStack_8c,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                          0xffffffff820073a0);
        cVar5 = (**(int (***)())(*piVar7 + 0x10))
                          (piVar7,*(unsigned int *)(param_1 + 0x18),&iStack_8c,auStack_80);
        lVar6 = (unsigned __int64)*(unsigned int *)(iStack_8c + 8) - 1;
        *(int *)(iStack_8c + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_8c);
        }
        if ((cVar5 != '\0') &&
           (uStack_88 = (double)fn_826972E0(auStack_80,*(unsigned int *)(param_1 + 0x18)),
           ((unsigned __int64)uStack_88 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
          uStack_88 = (double)(__int64)uStack_88;
          uStack_48 = uStack_48 | 0x200;
          uStack_4c = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
        }
        fn_827120C8(lVar2,&stack_pair_70.first);
        fn_82696330(auStack_80);
        fn_826824B0(iVar4);
      }
      fn_8267C4F0(lVar2);
    }
  }
  return;
}

