#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82230040();
extern int fn_82536690();
extern int fn_8255BFC0();
extern int fn_8255C068();
extern int fn_8255C1D0();
extern int fn_8255CB48();
extern int fn_8265C9E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_a4;
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_822B37C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  unsigned int in_register_00010430;
  unsigned int uVar14;
  unsigned int in_register_00010434;
  unsigned int uVar15;
  unsigned int in_register_00010438;
  unsigned int uVar16;
  unsigned int in_vr67;
  unsigned int uVar17;
  unsigned int in_register_000104d0;
  unsigned int uVar18;
  unsigned int in_register_000104d4;
  unsigned int uVar19;
  unsigned int in_register_000104d8;
  unsigned int uVar20;
  unsigned int in_vr77;
  unsigned int uVar21;
  char *apcStack_b0 [2];
  unsigned char **ppuStack_a8;
  unsigned int uStack_a4;
  
  iVar6 = fn_82F6A548();
  *(unsigned int *)(iVar6 + 8) = 0;
  iVar7 = fn_8265C9E0(0x60);
  if (iVar7 == 0) {
    uStack_a4 = 0;
    ppuStack_a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_a8);
  }
  *(int *)(iVar6 + 4) = iVar7;
  *(int *)iVar7 = iVar7;
  *(int *)(*(int *)(iVar6 + 4) + 4) = *(int *)(iVar6 + 4);
  *(int *)(*(int *)(iVar6 + 4) + 8) = *(int *)(iVar6 + 4);
  *(unsigned char *)(*(int *)(iVar6 + 4) + 0x50) = 1;
  *(unsigned char *)(*(int *)(iVar6 + 4) + 0x51) = 1;
  *(unsigned int *)(iVar6 + 0x10) = 0;
  *(unsigned int *)(iVar6 + 0x14) = 0;
  *(unsigned int *)(iVar6 + 0x18) = 0;
  *(int *)(iVar6 + 0x20) = (int)param_3;
  uVar4 = fn_8255C068(param_2);
  do {
    if ((uVar4 & 0xffff) == 0) {
      fn_82F6A594(iVar6);
      return;
    }
    lVar5 = fn_8255BFC0(param_2,uVar4);
    iVar7 = (int)lVar5;
    loadVectorLeftIndexed128(in_r0,lVar5 + 0x14);
    loadVectorRightIndexed128(0xc,lVar5 + 0x14);
    dVar13 = (double)*(float *)(iVar7 + 0x24);
    dVar12 = (double)*(float *)(iVar7 + 0x3c);
    dVar11 = (double)*(float *)(iVar7 + 0x38);
    dVar10 = (double)*(float *)(iVar7 + 0x34);
    in_vr0 = in_vr13 | in_vr0;
    in_register_00010008 = in_register_000100d8 | in_register_00010008;
    in_ACC = in_register_000100d4 | in_ACC;
    in_register_00010000 = in_register_000100d0 | in_register_00010000;
    uVar21 = in_vr77;
    uVar20 = in_register_000104d8;
    uVar19 = in_register_000104d4;
    uVar18 = in_register_000104d0;
    uVar17 = in_vr67;
    uVar16 = in_register_00010438;
    uVar15 = in_register_00010434;
    uVar14 = in_register_00010430;
    iVar8 = fn_8255CB48(param_3,1,*(unsigned short *)(iVar7 + 6),
                              1 << (*(unsigned int *)(iVar7 + 0x40) & 0x3f),*(unsigned short *)(iVar7 + 6),0,0,0
                             );
    in_vr0 = in_vr0 & ~in_vr67 | in_vr77 & in_vr67;
    in_register_00010008 =
         in_register_00010008 & ~in_register_00010438 | in_register_000104d8 & in_register_00010438;
    in_ACC = in_ACC & ~in_register_00010434 | in_register_000104d4 & in_register_00010434;
    in_register_00010000 =
         in_register_00010000 & ~in_register_00010430 | in_register_000104d0 & in_register_00010430;
    *(float *)(iVar8 + 0x30) = (float)dVar10;
    *(float *)(iVar8 + 0x34) = (float)dVar11;
    *(float *)(iVar8 + 0x38) = (float)dVar12;
    *(float *)(iVar8 + 0x3c) = (float)dVar13;
    puVar3 = (unsigned int *)(iVar8 + 0x20U & 0xfffffff0);
    *puVar3 = in_register_00010000;
    puVar3[1] = in_ACC;
    puVar3[2] = in_register_00010008;
    puVar3[3] = in_vr0;
    apcStack_b0[0] = (char *)fn_8265C9E0(0x28);
    if (apcStack_b0[0] == (char *)0x0) {
      apcStack_b0[0] = (char *)0x0;
    }
    else {
      uVar2 = *(unsigned int *)(iVar7 + 0x40);
      *(unsigned int *)(apcStack_b0[0] + 0x24) = (unsigned int)*(unsigned short *)(iVar7 + 6);
      *(unsigned int *)(apcStack_b0[0] + 0x20) = uVar2;
      pcVar9 = apcStack_b0[0];
      do {
        if (apcStack_b0[0] + 0x20 <= pcVar9) break;
        cVar1 = pcVar9[(iVar7 - (int)apcStack_b0[0]) + 0x44];
        *pcVar9 = cVar1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (pcVar9 == apcStack_b0[0] + 0x20) {
        pcVar9[-1] = '\0';
      }
    }
    fn_82536690(iVar6 + 0x10,apcStack_b0);
    uVar4 = fn_8255C1D0(param_2,uVar4);
    in_vr77 = uVar21;
    in_register_000104d8 = uVar20;
    in_register_000104d4 = uVar19;
    in_register_000104d0 = uVar18;
    in_vr67 = uVar17;
    in_register_00010438 = uVar16;
    in_register_00010434 = uVar15;
    in_register_00010430 = uVar14;
  } while( true );
}

