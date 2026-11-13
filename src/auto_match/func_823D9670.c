typedef unsigned char bool;
extern int fn_822AA718();
extern unsigned int lbl_831D1A24;


bool fn_823D9670(int param_1,int *param_2)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  float fVar3;
  unsigned int uVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  int in_r0;
  float fVar8;
  float fVar9;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_000107f4;
  float in_register_000107f8;
  float afStack_50 [4];
  float afStack_40 [16];
  
  bVar6 = *(int *)(*(int *)(param_2[4] * 4 + *param_2) + 0x10) == 0;
  puVar2 = *(unsigned short **)((bVar6 + 0xa1) * 4 + param_1);
  uVar1 = *puVar2;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    uVar4 = (unsigned int)(puVar2 + 0x10) & 0xfffffff0;
    in_register_000107f4 = *(float *)(uVar4 + 4);
    in_register_000107f8 = *(float *)(uVar4 + 8);
  }
  fn_822AA718(afStack_50,*(unsigned int *)(**(int **)(param_1 + 8) + (unsigned int)bVar6 * 4));
  fVar7 = lbl_831D1A24;
  uVar4 = (int)afStack_50 + in_r0 & 0xfffffff0;
  fVar8 = *(float *)(uVar4 + 4);
  fVar9 = *(float *)(uVar4 + 8);
  fVar3 = in_register_000107f4 * fVar8 + 0.0 + in_register_000107f8 * fVar9;
  fVar8 = in_register_00010014 * fVar8 + 0.0 + in_register_00010018 * fVar9;
  pfVar5 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *pfVar5 = fVar3;
  pfVar5[1] = fVar3;
  pfVar5[2] = fVar3;
  pfVar5[3] = fVar3;
  pfVar5 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *pfVar5 = fVar8;
  pfVar5[1] = fVar8;
  pfVar5[2] = fVar8;
  pfVar5[3] = fVar8;
  return afStack_40[0] - afStack_50[0] < fVar7;
}

