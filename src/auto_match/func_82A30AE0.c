extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_82A2C8E0();
extern int fn_82A2CB08();
extern int fn_82A300B8();
extern int fn_82A302E8();
extern int fn_82A30780();
extern int fn_82A30A08();
extern int fn_82F68CC0();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82A30AE0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int auStack_88 [2];
  unsigned __int64 auStack_80 [16];
  
  iVar1 = *(int *)(param_2 + 0x50);
  iVar2 = *(int *)(iVar1 + 0x18);
  uVar3 = *(unsigned int *)(iVar1 + 4);
  uVar7 = (unsigned __int64)uVar3;
  iVar4 = *(int *)(iVar2 + 8);
  RtlEnterCriticalSection();
  uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88);
  if (*(unsigned int *)(param_1 + 0x88) == 0) {
    if ((*(unsigned char *)(iVar2 + 2) & 0x10) == 0) {
      if ((*(unsigned char *)(iVar4 + 0x35) & 2) == 0) {
        if (*(char *)(param_1 + 0xce) == '\0') {
          uVar12 = 0xffffffffc0000022;
        }
        else if (uVar7 == 0) {
          uVar12 = 0;
          *(unsigned int *)(param_2 + 0x14) = 0;
        }
        else {
          uVar12 = fn_82A30780(param_1,iVar4);
          if (-1 < (__int64)uVar12) {
            if ((*(int *)(iVar1 + 0x10) == -1) && (*(int *)(iVar1 + 0xc) == -1)) {
              uVar5 = *(unsigned int *)(iVar4 + 0x18);
              *(unsigned int *)(iVar1 + 0xc) = 0;
              *(unsigned int *)(iVar1 + 0x10) = uVar5;
            }
            uVar6 = *(unsigned int *)(iVar1 + 0x10);
            uVar11 = (unsigned __int64)uVar6;
            uVar8 = uVar11 + uVar7;
            uVar9 = uVar8 + 0xfff & 0xfffff000;
            if ((*(int *)(iVar1 + 0xc) == 0) && (uVar11 < uVar9)) {
              uVar12 = fn_82A300B8(param_1,iVar4,uVar7,uVar11);
              if (-1 < (__int64)uVar12) {
                if ((unsigned __int64)*(unsigned int *)(iVar4 + 0x14) < (uVar8 & 0xffffffff)) {
                  uVar12 = fn_82A30A08(param_1,iVar4,uVar9,0);
                  if ((__int64)uVar12 < 0) goto LAB_82a30d64;
                }
                while (*(unsigned int *)(iVar4 + 0x1c) < (uVar6 & 0xfffff000)) {
                  uVar12 = fn_82A302E8(param_1,iVar4,*(unsigned int *)(iVar4 + 0x1c),1,auStack_88,
                                         &uStack_90,&uStack_8c);
                  if ((__int64)uVar12 < 0) goto LAB_82a30d64;
                  fn_82A2CB08(param_1,auStack_88[0],uStack_90,uStack_8c);
                  *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 0x1000;
                }
                uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x1c);
                do {
                  uVar13 = 0x1000 - (uVar11 & 0xfff);
                  if ((uVar7 & 0xffffffff) < (uVar13 & 0xffffffff)) {
                    uVar13 = uVar7;
                  }
                  uVar12 = fn_82A302E8(param_1,iVar4,uVar11,(int)uVar13 == 0x1000,auStack_88,
                                         &uStack_90,&uStack_8c);
                  if ((__int64)uVar12 < 0) goto LAB_82a30d64;
                  uVar10 = (unsigned __int64)uStack_90;
                  fn_82F68CC0((uVar11 & 0xfff) + uVar10,uVar9,uVar13);
                  fn_82A2CB08(param_1,auStack_88[0],uVar10,uStack_8c);
                  if ((unsigned __int64)*(unsigned int *)(iVar4 + 0x1c) == (uVar11 & 0xfffff000)) {
                    *(unsigned int *)(iVar4 + 0x1c) = *(unsigned int *)(iVar4 + 0x1c) + 0x1000;
                  }
                  uVar7 = uVar7 - uVar13;
                  uVar9 = uVar13 + uVar9;
                  uVar11 = uVar13 + uVar11;
                } while (uVar7 != 0);
                if ((unsigned __int64)*(unsigned int *)(iVar4 + 0x18) < (uVar8 & 0xffffffff)) {
                  *(int *)(iVar4 + 0x18) = (int)uVar8;
                }
                KeQuerySystemTime(auStack_80);
                fn_82A2C8E0(auStack_80[0],iVar4 + 0x44);
                *(unsigned char *)(iVar4 + 0x35) = *(unsigned char *)(iVar4 + 0x35) | 0x10;
                if ((*(unsigned char *)(iVar2 + 2) & 1) != 0) {
                  *(int *)(iVar2 + 0x18) = (int)uVar8;
                  *(unsigned int *)(iVar2 + 0x14) = 0;
                }
                *(unsigned int *)(param_2 + 0x14) = uVar3;
              }
            }
            else {
              uVar12 = 0xffffffffc000007f;
            }
          }
        }
      }
      else {
        uVar12 = 0xffffffffc0000010;
      }
    }
    else {
      uVar12 = 0xffffffffc0000128;
    }
  }
LAB_82a30d64:
  RtlLeaveCriticalSection(param_1);
  *(int *)(param_2 + 0x10) = (int)uVar12;
  IoCompleteRequest(param_2,1);
  return;
}

