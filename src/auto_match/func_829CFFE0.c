typedef unsigned char bool;
#define TBLr 0
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215058;
extern unsigned int lbl_83217128;
extern unsigned int uRam832172d4;
extern unsigned int uRam832172d8;
extern unsigned int uRam832172dc;
extern unsigned int uRam832172e0;
extern unsigned int uRam832172e4;


unsigned __int64 fn_829CFFE0(unsigned __int64 param_1,unsigned int param_2,unsigned int *param_3)

{
  bool bVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  __int64 *plVar11;
  unsigned __int64 uVar12;
  int *piVar13;
  int aiStack_40 [2];
  __int64 alStack_38 [7];
  
  if (((param_1 & 0xffffffff) == 0) || (param_3 == (unsigned int *)0x0)) {
    uVar9 = 0xffffffff80070057;
  }
  else {
    uVar9 = 0;
    *param_3 = 0;
    aiStack_40[0] = 0;
    iVar10 = ObReferenceObjectByHandle(param_1,0xffffffff8315c408,aiStack_40);
    if (iVar10 < 0) {
      uVar9 = RtlNtStatusToDosError();
      if (0 < (int)uVar9) {
        uVar9 = uVar9 & 0xffff | 0x80070000;
      }
    }
    else if (lbl_83215058 == 0) {
      uVar9 = 0xffffffff8007048f;
      ObDereferenceObject(aiStack_40[0]);
    }
    else {
      if (((*(unsigned int *)(aiStack_40[0] + 0x14) & 0x10000) != 0x10000) &&
         ((param_2 == 0xffffffff || (8000 < param_2)))) {
        if ((lbl_83215000 & 0x8000000) == 0) {
          param_2 = 8000;
        }
        else {
          param_2 = 60000;
        }
      }
      plVar11 = (__int64 *)0x0;
      if (param_2 != 0xffffffff) {
        plVar11 = alStack_38;
        alStack_38[0] = (unsigned __int64)param_2 * -10000;
      }
      iVar10 = KeWaitForSingleObject(aiStack_40[0],3,0,0,plVar11);
      if (iVar10 == 0x102) {
        ObDereferenceObject(aiStack_40[0]);
        uVar9 = 0xffffffff8000000a;
      }
      else {
        RtlEnterCriticalSection(0xffffffff8315c428);
        if (*(int *)(aiStack_40[0] + 0x78) == 1) {
          uVar9 = 0xffffffff8301000b;
        }
        else if (*(int *)(aiStack_40[0] + 0x20) == 0) {
          if (lbl_83215058 == 0) {
            uVar9 = 0xffffffff8007048f;
          }
          else if ((*(unsigned int *)(aiStack_40[0] + 0x14) & 0x10000) == 0) {
            uVar9 = 0xffffffff83010001;
          }
          else {
            uVar9 = 0xffffffff8007048f;
          }
        }
        else {
          if (*(int *)(aiStack_40[0] + 0x2c) == *(int *)(aiStack_40[0] + 0x18) + -2) {
            RtlLeaveCriticalSection(0xffffffff8315c428);
            ObDereferenceObject(aiStack_40[0]);
            return 0xffffffff83010004;
          }
          piVar2 = *(int **)(aiStack_40[0] + 0x20);
          *(unsigned int *)(aiStack_40[0] + 0x20) = 0;
          uVar12 = 0;
          piVar13 = &lbl_83217128;
          piVar2[0x1b] = 1;
          do {
            if (*piVar13 == aiStack_40[0]) break;
            piVar13 = piVar13 + 1;
            uVar12 = uVar12 + 1;
          } while ((int)piVar13 < -0x7cde8ec0);
          uVar3 = TBLr;
          uVar4 = (unsigned int)
                  ((((uVar3 & 0xffffffff) - (unsigned __int64)(unsigned int)piVar2[0x1c] & 0xffffffff) * 1000000) /
                  50000000);
          uVar5 = uRam832172d4;
          uVar6 = uRam832172dc;
          uVar7 = uRam832172e0;
          uVar8 = uRam832172e4;
          if (((((uVar12 & 0xffffffff) < 5) &&
               (bVar1 = (int)uVar12 == 0, uVar8 = uVar4, uVar12 != 1 || bVar1)) &&
              (uVar5 = uVar4, uVar8 = uRam832172e4, uVar12 != 2 || bVar1)) &&
             ((uVar5 = uRam832172d4, uVar7 = uVar4, uVar12 != 3 || bVar1 &&
              (uVar6 = uVar4, uVar7 = uRam832172e0, bVar1)))) {
            uRam832172d8 = uVar4;
            uVar6 = uRam832172dc;
          }
          uRam832172e4 = uVar8;
          uRam832172e0 = uVar7;
          uRam832172dc = uVar6;
          uRam832172d4 = uVar5;
          piVar2[0xe] = 0;
          iVar10 = *(int *)(aiStack_40[0] + 0x30);
          *piVar2 = iVar10;
          piVar2[1] = aiStack_40[0] + 0x30;
          *(int **)(iVar10 + 4) = piVar2;
          *(int **)(aiStack_40[0] + 0x30) = piVar2;
          *(int *)(aiStack_40[0] + 0x2c) = *(int *)(aiStack_40[0] + 0x2c) + 1;
          *param_3 = piVar2 + 2;
        }
        KeResetEvent(aiStack_40[0]);
        if (*(int *)(aiStack_40[0] + 0x10) != 0) {
          KeResetEvent(*(int *)(aiStack_40[0] + 0x10));
        }
        RtlLeaveCriticalSection(0xffffffff8315c428);
        ObDereferenceObject(aiStack_40[0]);
      }
    }
  }
  return uVar9;
}

