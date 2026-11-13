#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int fStack00000020;
extern unsigned int fStack00000024;
extern unsigned int fStack00000028;
extern unsigned int fStack_80;
extern int fn_82CE5410();
extern int fn_82D3C628();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_48;
extern unsigned int uStack_5c;


int * fn_825A4BD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  unsigned char auStack_90 [16];
  float fStack_80;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [4];
  unsigned int uStack_5c;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  unsigned char auStack_40 [48];
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else if (piVar3[3] == 1) {
    puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar1 = (unsigned int *)((int)auStack_70 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    auStack_70[0] = lbl_821CA460;
    puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    uStack_5c = auStack_70[0];
    puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    uStack_48 = auStack_70[0];
    dVar7 = (double)ltcg_pool_0_0f;
    fStack00000020 = in_register_00010010;
    fStack00000024 = in_register_00010014;
    fStack00000028 = in_register_00010018;
    (**(int (***)())(*piVar3 + 0x1c))(dVar7,piVar3,auStack_70,param_3,auStack_90);
    dVar5 = (double)(float)((double)fStack00000020 - (double)fStack00000024);
    dVar6 = (double)fStack_80;
    dVar4 = (double)fStack00000020;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar5 < dVar7) << 2) | (unsigned int)(NAN(dVar5) || NAN(dVar7)) << 2)) <
        0.0) {
      dVar4 = (double)fStack00000024;
    }
    iVar2 = fn_82CE5410();
    iVar2 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x20);
    dVar5 = (double)(float)(dVar4 - (double)fStack00000028);
    *(unsigned short *)(iVar2 + 4) = 0x20;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar5 < dVar7) << 2) | (unsigned int)(NAN(dVar5) || NAN(dVar7)) << 2)) <
        0.0) {
      dVar4 = (double)fStack00000028;
    }
    piVar3 = (int *)fn_82D3C628((double)(float)(dVar4 * dVar6));
  }
  return piVar3;
}

