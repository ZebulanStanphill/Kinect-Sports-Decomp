extern unsigned int *auStack_80;
extern int fn_8306EC70();
extern int fn_8306ED30();
extern int fn_8306EE38();
extern int fn_83075D30();
extern int fn_83075D40();
extern int fn_83075D80();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_82186E1C;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


void fn_8306F598(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6,char param_7)

{
  float fVar1;
  char cVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs62 [16];
  unsigned char in_vs63 [16];
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_80 [128];
  
  dVar5 = (double)fn_83075D40(param_3,param_4);
  if (dVar5 < (double)lbl_82057B54) {
    param_7 = '\0';
  }
  fn_83075D30(auStack_80,param_3,param_4);
  iVar4 = param_6 + 0x50;
  fn_8306ED30();
  cVar2 = *(char *)(param_6 + 0x48);
  dVar5 = (double)(lbl_82186E1C / *(float *)(param_2 + 0xd20));
  if (cVar2 != '\0') {
    *(unsigned char *)(param_6 + 0x74) = 1;
    altv207_13(in_vs63,in_vs42);
    puVar3 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
    *puVar3 = in_register_000103f0;
    puVar3[1] = in_register_000103f4;
    puVar3[2] = in_register_000103f8;
    puVar3[3] = in_vr63;
  }
  dVar7 = (double)lbl_821AAD20;
  if ((cVar2 != '\0') || ((param_7 != '\0' && (dVar6 = (double)fn_8306EE38(), dVar6 < dVar5)))) {
    if (*(char *)(param_6 + 0x74) == '\0') {
      fVar1 = (float)((double)*(float *)(param_6 + 0x70) + param_1);
      *(float *)(param_6 + 0x70) = fVar1;
      if (lbl_82186E74 < fVar1) {
        *(unsigned char *)(param_6 + 0x74) = 1;
        altv207_13(in_vs32,in_vs43);
        puVar3 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
        *puVar3 = in_register_000103f0;
        puVar3[1] = in_register_000103f4;
        puVar3[2] = in_register_000103f8;
        puVar3[3] = in_vr63;
      }
    }
    else {
      fn_83075D80(param_3,param_4);
      altv207_13(in_vs32,in_vs62);
      puVar3 = (unsigned int *)(param_6 + 0x60U & 0xfffffff0);
      *puVar3 = in_register_000103f0;
      puVar3[1] = in_register_000103f4;
      puVar3[2] = in_register_000103f8;
      puVar3[3] = in_vr63;
      *(unsigned int *)(param_6 + 0x78) = lbl_82002C2C;
    }
  }
  else {
    *(float *)(param_6 + 0x70) = (float)dVar7;
    *(unsigned char *)(param_6 + 0x74) = 0;
  }
  if (*(char *)(param_6 + 0x74) == '\0') {
    fVar1 = (float)((double)*(float *)(param_6 + 0x78) - param_1);
    dVar5 = (double)fVar1;
    *(float *)(param_6 + 0x78) = fVar1;
    if ((dVar5 <= dVar7) || (*(char *)(param_6 + 0xfc) != '\0')) {
      altv207_13(in_vs32,in_vs43);
      puVar3 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
      *puVar3 = in_register_000103f0;
      puVar3[1] = in_register_000103f4;
      puVar3[2] = in_register_000103f8;
      puVar3[3] = in_vr63;
    }
    else {
      puVar3 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      fn_8306EC70((double)(float)(dVar5 * (double)lbl_8200D8C4));
      fn_83075D80(param_3,param_4);
      puVar3 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
      *puVar3 = uVar8;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
    }
  }
  return;
}

