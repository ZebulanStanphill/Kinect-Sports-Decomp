extern unsigned int *auStack_120;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_f0;
extern int fn_82236140();
extern int fn_822CB020();
extern int fn_825AD9E8();
extern int fn_825ADE10();
extern int fn_825AE918();
extern int fn_825AEC98();
extern int fn_8265CA20();
extern int fn_828B00A0();
extern int fn_828C4318();
extern int fn_828E9D28();
extern int memcpy();
extern unsigned int iStack_108;
extern unsigned int iStack_d8;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_70;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


void fn_825AC298(int *param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_00010010;
  unsigned int uVar10;
  unsigned int in_register_00010014;
  unsigned int uVar11;
  unsigned int in_register_00010018;
  unsigned int uVar12;
  unsigned int in_vr1;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int aiStack_140 [4];
  int aiStack_130 [4];
  unsigned char auStack_120 [16];
  unsigned int uStack_110;
  unsigned int uStack_10c;
  int iStack_108;
  unsigned int uStack_104;
  unsigned int uStack_100;
  unsigned char auStack_f0 [16];
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  int iStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned char auStack_c8 [24];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned __int64 uStack_70;
  
  lVar3 = (**(int (***)())(*param_1 + 8))();
  if ((((param_4 == 1) && (param_5 == 1)) && (param_3 == 0)) &&
     ((param_2 & 0xffffffff) == (lVar3 + 0x1ecU & 0xffffffff))) {
    fn_825AD9E8(aiStack_140,lVar3 + 0x248);
    fn_822CB020(aiStack_130,lVar3 + 0x29c);
    uVar4 = fn_82236140(lVar3 + 0x2f0);
    uStack_e0 = (unsigned int)uVar4;
    iStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 3;
    fn_828E9D28(auStack_f0,uVar4,3);
    fn_825AE918(auStack_f0);
    uVar13 = in_vr1;
    uVar12 = in_register_00010018;
    uVar11 = in_register_00010014;
    uVar10 = in_register_00010010;
    if (iStack_d8 != 0) {
      fn_8265CA20();
    }
    iStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uVar4 = fn_82236140(lVar3 + 0x344);
    uStack_110 = (unsigned int)uVar4;
    iStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 3;
    fn_828E9D28(auStack_120,uVar4,3);
    fn_825AEC98(auStack_120);
    if (iStack_108 != 0) {
      fn_8265CA20();
    }
    iStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    puVar1 = (unsigned int *)((int)aiStack_140 + in_r0 & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (unsigned int *)((int)aiStack_130 + in_r0 & 0xfffffff0);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar14;
    puVar1[1] = uVar15;
    puVar1[2] = uVar16;
    puVar1[3] = uVar17;
    puVar1 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    puVar1 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    uStack_70 = fn_828C4318(lVar3 + 0x398);
    aiStack_140[2] = param_1[0x3c];
    aiStack_140[0] = param_1[0x39];
    aiStack_130[1] = 0;
    iVar6 = param_1[0x3d] + aiStack_140[2];
    aiStack_140[1] = 0;
    aiStack_130[0] = aiStack_140[0];
    aiStack_130[2] = iVar6;
    iVar5 = fn_825ADE10(auStack_c8,aiStack_140,aiStack_130);
    if (*(int *)(iVar5 + 8) == iVar6) {
      memcpy(param_1 + 0x24,auStack_b0,0x50);
      *(unsigned char *)(param_1 + 0x38) = 1;
      fn_828B00A0((unsigned __int64)(unsigned int)param_1[4] + 0x278);
    }
  }
  return;
}

