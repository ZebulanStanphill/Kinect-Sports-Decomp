extern int fn_82F64318();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005730;
extern unsigned int lbl_8208EDA0;
extern unsigned int lbl_820FB718;


void fn_82C314C8(void)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = fn_82F6A540();
  dVar4 = lbl_8208EDA0;
  dVar3 = lbl_82005730;
  fVar2 = lbl_82005344;
  if (0 < *(short *)(iVar5 + 0x244)) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      iVar8 = *(short *)(iVar8 + *(int *)(iVar5 + 0x248)) * 0x6f0 + *(int *)(iVar5 + 0x140);
      sVar6 = *(short *)(iVar8 + 0x7c);
      if (*(short *)(iVar8 + 0x7a) < *(short *)(iVar8 + 0x7c)) {
        sVar6 = *(short *)(iVar8 + 0x7a);
      }
      if ((sVar6 < 0x40) || (0x800 < sVar6)) {
LAB_82c315b8:
                    /* WARNING: Subroutine does not return */
        fn_82F64318((dVar4 / (double)(__int64)(int)sVar6) * dVar3);
      }
      if (((int)sVar6 - 1U & (int)sVar6) != 0) goto LAB_82c315b8;
      pfVar1 = (float *)(&lbl_820FB718)[(int)sVar6 >> 7];
      *(float *)(iVar8 + 0x48) = *pfVar1;
      *(float *)(iVar8 + 0x4c) = pfVar1[1];
      *(float *)(iVar8 + 0x50) = -*pfVar1;
      *(float *)(iVar8 + 0x54) = pfVar1[1];
      *(float *)(iVar8 + 0x58) = pfVar1[8] * fVar2;
      sVar6 = (short)iVar7 + 1;
      iVar7 = (int)sVar6;
      iVar8 = iVar7 << 1;
    } while (sVar6 < *(short *)(iVar5 + 0x244));
  }
  fn_82F6A58C(0);
  return;
}

