typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_164;
extern unsigned int *auStack_190;
extern unsigned int *auStack_3b0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1DDC0();
extern int fn_82A1E658();
extern int fn_82A1F648();
extern int fn_82A20618();
extern int fn_82A21110();
extern int fn_82A212D8();
extern int fn_82A214B0();
extern int fn_82A22D48();
extern int fn_82A234F0();
extern int fn_82A23980();
extern int fn_82A23C40();
extern int fn_82A2A438();
extern int fn_82A35B80();
extern int fn_82F664B0();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219C28;
extern unsigned int stack0x00000000;


unsigned __int64 fn_82A23EE8(unsigned __int64 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned char uVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  unsigned int uVar10;
  char *pcVar11;
  unsigned char auStack_3b0 [24];
  char acStack_398 [520];
  unsigned int auStack_190 [11];
  unsigned char auStack_164 [356];
  
  iVar7 = -1;
  pcVar4 = &stack0x00000000 + -0x398;
  lVar9 = (__int64)*param_2;
  iVar5 = -1;
  bVar2 = false;
  iVar8 = 0;
  if (lVar9 != 0) {
    do {
      if ((int)lVar9 == 0x3a) {
        if (iVar5 == -1) {
          iVar5 = iVar8;
        }
      }
      else if ((int)lVar9 == 0x5c) {
        iVar7 = iVar8;
      }
      iVar8 = iVar8 + 1;
      lVar9 = (__int64)param_2[iVar8];
    } while (lVar9 != 0);
    if (iVar7 != -1) {
      uVar10 = iVar7 + 1;
      goto LAB_82a23f88;
    }
    uVar10 = iVar5 + 1;
    if (iVar5 != -1) goto LAB_82a23f88;
  }
  uVar10 = 0;
LAB_82a23f88:
  if ((uVar10 < 0x101) ||
     (pcVar4 = (char *)fn_8265C940(uVar10 + 0x101,lbl_8315D2EC), pcVar4 != (char *)0x0)) {
    fn_82A1DDC0(pcVar4,param_2,uVar10);
    pcVar11 = param_2;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iVar5 = fn_82A1F648(&stack0x00000000 + -0x3b0);
    if (iVar5 == 0) {
      uVar3 = 3;
    }
    else {
      uVar6 = fn_82A23980();
      uVar3 = fn_82A2A438(param_2,&stack0x00000000 + -400);
      if ((int)uVar3 != -1) {
        do {
          fn_82F664B0(pcVar4 + uVar10,0x100,&stack0x00000000 + -0x164);
          pcVar11 = pcVar4;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          if (((auStack_190[0] & 0x16) == 0) &&
             (iVar5 = fn_82A22D48(&stack0x00000000 + -0x3b0), iVar5 != 0)) {
            RtlEnterCriticalSection(0xffffffff83219ba0);
            iVar5 = fn_82A23C40(lbl_83219B94,uVar6,&stack0x00000000 + -0x3b0);
            if (iVar5 == 0) {
              iVar5 = fn_82A234F0(lbl_83219B94,uVar6,pcVar4,
                                    (unsigned int)(pcVar11 + (-1 - (int)pcVar4)) & 0xffff);
            }
            RtlLeaveCriticalSection(0xffffffff83219ba0);
            if (iVar5 != 0) {
              fn_82A212D8(lbl_83219B94,iVar5);
              *(unsigned char *)(iVar5 + 0x18) = (-((param_1 & 4) != 0) & 0xf6U) + 0x14;
              *(unsigned int *)(iVar5 + 0x20) = *(unsigned int *)(iVar5 + 0x20) & 0x7fffffff;
              *(unsigned int *)(iVar5 + 0x1c) = *(unsigned int *)(iVar5 + 0x1c) & 0xfffffff6;
              fn_82A214B0(lbl_83219B94,iVar5);
              bVar2 = true;
            }
          }
          iVar5 = fn_82A35B80(uVar3,&stack0x00000000 + -400);
        } while (iVar5 != 0);
        fn_82A1E658(uVar3);
        if (bVar2) {
          fn_82A21110(lbl_83219B94,lbl_83219C28);
          fn_82A20618(2);
        }
      }
      if (pcVar4 != &stack0x00000000 + -0x398) {
        fn_8265C990(pcVar4,lbl_8315D2EC);
      }
      uVar3 = 0;
    }
  }
  else {
    if (&stack0x00000000 != (unsigned char *)0x398) {
      fn_8265C990(0,lbl_8315D2EC);
    }
    uVar3 = 8;
  }
  return uVar3;
}

