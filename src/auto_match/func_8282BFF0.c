extern int fn_82820EF8();
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_82827770();
extern int fn_82F672D8();
extern int fn_82F68CC0();
extern unsigned int uStack_40;
extern unsigned int uStack_6c;


unsigned __int64 fn_8282BFF0(int param_1,unsigned int *param_2)

{
  char cVar1;
  int iVar3;
  __int64 lVar2;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  char acStack_70 [4];
  unsigned char uStack_6c;
  char acStack_68 [24];
  char acStack_50 [16];
  unsigned char uStack_40;
  
  pcVar5 = "CAFF";
  fn_82F68CC0(acStack_68,0xffffffff8201ed28,0xe);
  iVar3 = (*(int (**)())param_2[1])(*param_2,*(unsigned int *)(param_1 + 0xcc));
  if (iVar3 == 0) {
    lVar2 = fn_828252D0(0x80);
    iVar3 = (*(int (**)())param_2[2])(*param_2,0x80,lVar2);
    if (iVar3 == 0) {
      fn_82F672D8(acStack_70,lVar2,4);
      uStack_6c = 0;
      pcVar6 = acStack_70;
      do {
        cVar4 = *pcVar6;
        cVar1 = *pcVar5;
        if (cVar4 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 == cVar1);
      if (cVar4 == cVar1) {
        fn_82F672D8(acStack_50,lVar2 + 4,0x10);
        pcVar5 = acStack_68;
        uStack_40 = 0;
        pcVar6 = acStack_50;
        do {
          cVar4 = *pcVar6;
          cVar1 = *pcVar5;
          if (cVar4 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 == cVar1);
        if (cVar4 == cVar1) {
          fn_82F68CC0(param_1,lVar2,0x80);
          cVar4 = fn_82827770(param_1);
          if (cVar4 != '\0') {
            fn_82820EF8(param_1 + 0x1c,4);
            fn_82820EF8(param_1 + 0x24,4);
            fn_82820EF8(param_1 + 0x2c,4);
            fn_82820EF8(param_1 + 0x30,4);
            fn_82820EF8(param_1 + 0x3c,4);
            fn_82820EF8(param_1 + 0x40,4);
            fn_82820EF8(param_1 + 0x34,4);
            fn_82820EF8(param_1 + 0x38,4);
            fn_82820EF8(param_1 + 0x44,4);
            fn_82820EF8(param_1 + 0x48,4);
            fn_82820EF8(param_1 + 0x54,4);
            fn_82820EF8(param_1 + 0x28,4);
            fn_82820EF8(param_1 + 0x52,1);
            fn_82820EF8(param_1 + 0x4c,4);
            fn_82820EF8(param_1 + 0x53,1);
            iVar3 = param_1 + 0x68;
            lVar8 = 2;
            do {
              fn_82820EF8(iVar3 + -0x10,4);
              fn_82820EF8(iVar3,4);
              lVar8 = lVar8 + -1;
              iVar3 = iVar3 + 0x14;
            } while (lVar8 != 0);
            fn_82820EF8(param_1 + 0x14,4);
          }
          *(unsigned int *)(param_1 + 0xc4) = 0;
          piVar7 = (int *)(param_1 + 0x44);
          lVar8 = 2;
          do {
            piVar7 = piVar7 + 5;
            *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + *piVar7;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          fn_828252D8(lVar2);
          *(unsigned char *)(param_1 + 0x134) = *(unsigned char *)(param_1 + 0x134) | 0x40;
          return 0;
        }
        uVar9 = 2;
      }
      else {
        uVar9 = 1;
      }
      (*(int (**)())param_2[4])(*param_2);
      fn_828252D8(lVar2);
      return uVar9;
    }
  }
  return 3;
}

