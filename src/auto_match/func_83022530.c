typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_821AAD20;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_83022530(double param_1,double param_2,int param_3,int param_4,int param_5)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs63 [16];
  unsigned int in_register_00010050;
  unsigned int in_register_00010054;
  unsigned int in_register_00010058;
  unsigned int in_vr5;
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100a0;
  unsigned int uVar10;
  unsigned int in_register_000100a4;
  unsigned int uVar11;
  unsigned int in_register_000100a8;
  unsigned int uVar12;
  unsigned int in_vr10;
  unsigned int uVar13;
  
  uVar2 = (unsigned int)*(unsigned short *)(param_3 + 8) * 4 + param_4;
  if (param_2 == (double)lbl_821AAD20) {
    if (param_1 != (double)lbl_821AAD20) {
      iVar4 = param_5 + 0x30;
      iVar5 = param_4 + 0x20;
      do {
        vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,in_vs44);
        vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,in_vs44);
        puVar1 = (unsigned int *)(iVar4 - 0x20U & 0xfffffff0);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar1 = (unsigned int *)(iVar5 - 0x10U & 0xfffffff0);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uVar12 = puVar1[2];
        uVar13 = puVar1[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,in_vs40); memcpy(in_vs40, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs43); memcpy(in_vs45, &_vt1, 16); }
        puVar1 = (unsigned int *)((param_5 - param_4) + iVar5 & 0xfffffff0);
        *puVar1 = in_register_000100a0;
        puVar1[1] = in_register_000100a4;
        puVar1[2] = in_register_000100a8;
        puVar1[3] = in_vr10;
        uVar3 = iVar5 + 0x20;
        puVar1 = (unsigned int *)(iVar4 - 0x30U & 0xfffffff0);
        *puVar1 = in_register_00010090;
        puVar1[1] = in_register_00010094;
        puVar1[2] = in_register_00010098;
        puVar1[3] = in_vr9;
        puVar1 = (unsigned int *)(iVar4 - 0x20U & 0xfffffff0);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        puVar1 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar13;
        iVar4 = iVar4 + 0x40;
        iVar5 = iVar5 + 0x40;
      } while (uVar3 < uVar2);
      return;
    }
  }
  else {
    iVar4 = param_5 + 0x30;
    altv207_13(in_vs32,in_vs63);
    iVar5 = param_4 + 0x20;
    do {
      vectorMultiplyAddFloatingPoint(in_vs42,in_vs45,in_vs41);
      vectorMultiplyAddFloatingPoint(in_vs42,in_vs44,in_vs41);
      puVar1 = (unsigned int *)(iVar4 - 0x20U & 0xfffffff0);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar1 = (unsigned int *)(iVar5 - 0x10U & 0xfffffff0);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs42,in_vs32,in_vs39); memcpy(in_vs39, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(in_vs41,in_vs43,in_vs40); memcpy(in_vs42, &_vt3, 16); }
      puVar1 = (unsigned int *)(iVar5 + (param_5 - param_4) & 0xfffffff0);
      *puVar1 = in_register_00010050;
      puVar1[1] = in_register_00010054;
      puVar1[2] = in_register_00010058;
      puVar1[3] = in_vr5;
      uVar3 = iVar5 + 0x20;
      puVar1 = (unsigned int *)(iVar4 - 0x30U & 0xfffffff0);
      *puVar1 = in_register_00010060;
      puVar1[1] = in_register_00010064;
      puVar1[2] = in_register_00010068;
      puVar1[3] = in_vr6;
      puVar1 = (unsigned int *)(iVar4 - 0x20U & 0xfffffff0);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      iVar4 = iVar4 + 0x40;
      iVar5 = iVar5 + 0x40;
    } while (uVar3 < uVar2);
  }
  return;
}

