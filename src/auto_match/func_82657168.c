typedef unsigned char bool;
extern unsigned int *__imp__KeCertMonitorData;
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *auStack_7f0;
extern unsigned int *auStack_828;
extern unsigned int *auStack_8a8;
extern unsigned int *auStack_8b0;
extern unsigned int *auStack_8bc;
extern unsigned int *auStack_8c0;
extern int fn_82645740();
extern int fn_8264DA70();
extern int fn_8264DB08();
extern int fn_82656468();
extern int fn_82656D40();
extern int fn_82A1E108();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A29B68();
extern int fn_82A29CD8();
extern int fn_82A29FE0();
extern int memcpy();
extern unsigned int lbl_83275D94;
extern unsigned int lbl_83275D95;
extern unsigned int lbl_83275D97;
extern unsigned int uRam831e79a4;
extern unsigned int uRam8329f804;
extern unsigned int uStack_82c;
extern unsigned int uStack_830;
extern unsigned int uStack_834;
extern unsigned int uStack_838;
extern unsigned int uStack_83c;
extern unsigned int uStack_840;
extern unsigned int uStack_844;
extern unsigned int uStack_848;
extern unsigned int uStack_84c;
extern unsigned int uStack_850;
extern unsigned int uStack_866;
extern unsigned int uStack_868;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82657168(int param_1)

{
  int (**pcVar1)();
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  int iVar11;
  int *piVar12;
  char in_RESERVE;
  unsigned char bVar13;
  unsigned char auStack_8c0 [4];
  unsigned int auStack_8bc;
  unsigned char auStack_8b0 [5];
  char cStack_8ab;
  unsigned char auStack_8a8 [64];
  unsigned short uStack_868;
  unsigned short uStack_866;
  struct { unsigned int first; unsigned int second; } stack_pair_850;

  unsigned int uStack_848;
  unsigned int uStack_844;
  unsigned int uStack_840;
  unsigned int uStack_83c;
  unsigned int uStack_838;
  unsigned int uStack_834;
  unsigned int uStack_830;
  unsigned int uStack_82c;
  unsigned char auStack_828 [56];
  unsigned char auStack_7f0 [2000];
  
  bVar13 = *(unsigned char *)(param_1 + 0x5e7c);
  iVar11 = param_1 + 0x5c1c;
  if ((bVar13 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x5d88) != 0) {
      if ((bVar13 & 0x80) != 0) {
        bVar3 = (bVar13 & 0x40) == 0;
        bVar13 = bVar3 << 1;
        if (!bVar3) {
          fn_82A1E650(*(int *)(param_1 + 0x5d88),0xffffffffffffffff);
        }
        uVar5 = *(unsigned int *)(param_1 + 0x5c2c);
        fn_82645740(*(unsigned int *)(param_1 + 0x5e68));
        do {
          uVar7 = (unsigned __int64)uRam831e79a4;
          if (in_RESERVE != '\0') {
            uRam831e79a4 = storeWordConditionalIndexed((unsigned __int64)uRam8329f804,0,0xffffffff831e79a4)
            ;
            bVar13 = 2;
          }
        } while (!(bool)(bVar13 >> 1 & 1));
        uVar7 = (uVar7 - *(unsigned int *)(param_1 + 0x5c24) & 0xffffffff) / 0x1800;
        if (0xd < uVar7) {
          uVar7 = 0xe;
        }
        uVar10 = *(unsigned int *)(param_1 + 0x5e70);
        puVar9 = *(unsigned int **)(((*(int *)(param_1 + 0x5e64) + -1) * 4 & 4U) + iVar11);
        *(unsigned int *)(param_1 + 0x5d80) = *(unsigned int *)(param_1 + 0x5d98);
        *(unsigned int *)(param_1 + 0x5d84) = 0;
        uVar8 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x5c28) + uVar7 * 0xc) * 0x200 & 0xfffffe00;
        uVar2 = *(unsigned int *)(((uVar10 >> 0x14 & 0x3f) + 5) * 4 + iVar11);
        *puVar9 = 0x9b58e71a;
        puVar9[1] = uVar10 >> 0x1c & 3;
        puVar9[2] = uVar5;
        puVar9[3] = (int)uVar7;
        fn_82A29FE0(uVar2,puVar9,uVar8,auStack_8c0,param_1 + 0x5d78);
        fn_82656D40(iVar11,uVar8);
        fn_82A1E650(*(unsigned int *)(param_1 + 0x5d88),0xffffffffffffffff);
        while (uRam831e79a4 != 0x1800) {
          fn_82A1E108(6);
        }
      }
      uVar10 = 0;
      auStack_8bc = 0;
      if ((*(unsigned int *)(param_1 + 0x5e70) & 0xfc000) != 0) {
        puVar9 = (unsigned int *)(param_1 + 0x5c2c);
        do {
          if (((*(unsigned char *)(param_1 + 0x5e7c) & 0x20) == 0) &&
             (uVar4 = *(unsigned int *)(param_1 + 0x5e70) >> 0x14 & 0x3f, uVar4 <= uVar10)) {
            if (uVar4 < uVar10) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(unsigned int *)(param_1 + 0x5d98);
            }
          }
          else {
            uVar5 = puVar9[0x2a];
          }
          fn_82A29B68(puVar9[1],uVar5,&auStack_8bc,0);
          puVar9 = puVar9 + 1;
          fn_82A29CD8(*puVar9);
          uVar10 = uVar10 + 1;
        } while (uVar10 < (*(unsigned int *)(param_1 + 0x5e70) >> 0xe & 0x3f));
      }
      VdGetCurrentDisplayInformation(auStack_8b0);
      iVar11 = *(int *)(param_1 + 0x5e78) >> 0x1d;
      if (iVar11 == 0) {
        stack_pair_850.first = 0x53a722b4;
      }
      else if (iVar11 == 1) {
        stack_pair_850.first = 0x53a722b5;
      }
      else if (iVar11 == 2) {
        stack_pair_850.first = 0x53a722b6;
      }
      stack_pair_850.second = 0x10001;
      if ((iVar11 == 0) || (iVar11 == 1)) {
        uStack_840 = (unsigned int)*(unsigned short *)(param_1 + 0x5d8c);
        uStack_83c = (unsigned int)*(unsigned short *)(param_1 + 0x5d8e);
        uStack_838 = (unsigned int)uStack_868;
        uStack_834 = (unsigned int)uStack_866;
      }
      else if (iVar11 == 2) {
        uStack_840 = 400;
        uStack_83c = 0xe0;
        uStack_838 = 400;
        uStack_834 = 0xe0;
      }
      uStack_830 = KeQueryPerformanceFrequency();
      uVar10 = *(unsigned int *)(param_1 + 0x5e70);
      bVar3 = (uVar10 >> 0x1a & 1) != 0;
      uStack_82c = (unsigned int)bVar3;
      if ((uVar10 >> 0x1a & 2) != 0) {
        uStack_82c = bVar3 | 2;
      }
      if ((uVar10 & 0x80000000) == 0) {
        iVar11 = param_1 + 0x3b70;
      }
      else {
        iVar11 = *(int *)(param_1 + 0x5e6c);
      }
      if (cStack_8ab == '\x01') {
        uStack_82c = uStack_82c | 4;
        fn_8264DB08();
      }
      else {
        fn_8264DA70(auStack_7f0,iVar11,1);
      }
      uVar10 = *(unsigned int *)(param_1 + 0x5e70);
      puVar6 = (unsigned char *)(param_1 + 0x3670);
      if ((uVar10 & 0x4000000) == 0) {
        puVar6 = auStack_8a8;
      }
      memcpy(auStack_828,puVar6,0x38);
      if ((*(unsigned char *)(param_1 + 0x5e7c) & 0x20) == 0) {
        uStack_848 = 0x800;
        uStack_844 = 0;
      }
      else {
        uStack_844 = uVar10 >> 0x14 & 0x3f;
        uStack_848 = *(unsigned int *)(param_1 + 0x5d98);
      }
      *(unsigned int *)(param_1 + 0x5d80) = 0;
      *(unsigned int *)(param_1 + 0x5d84) = 0;
      fn_82A29FE0(*(unsigned int *)(param_1 + 0x5c30),&stack_pair_850.first,0x800,auStack_8c0,
                        param_1 + 0x5d78);
      fn_82A1E650(*(unsigned int *)(param_1 + 0x5d88),0xffffffffffffffff);
      fn_82A1E658(*(unsigned int *)(param_1 + 0x5d88));
    }
    uVar10 = 0;
    piVar12 = (int *)(param_1 + 0x5c30);
    do {
      if (*piVar12 == -1) break;
      fn_82A1E658();
      uVar10 = uVar10 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar10 < 0x29);
  }
  if ((int *)*__imp__KeCertMonitorData == (int *)0x0) {
    if (*__imp__KeDebugMonitorData == 0) goto LAB_82657538;
    pcVar1 = *(int (***)())(*__imp__KeDebugMonitorData + 0x18);
  }
  else {
    pcVar1 = *(int (***)())*__imp__KeCertMonitorData;
    if (pcVar1 == (int (**)())0x0) goto LAB_82657538;
  }
  (*pcVar1)(0x1b,0xffffffff821cd96c);
LAB_82657538:
  fn_82656468(param_1);
  ObDeleteSymbolicLink(0xffffffff831be888);
  lbl_83275D97 = 0;
  lbl_83275D94 = 0;
  lbl_83275D95 = 0;
  return;
}

