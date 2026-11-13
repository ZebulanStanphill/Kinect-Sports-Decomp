#define true 1
extern int fn_82508C40();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8255FD70();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823042A8(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar5;
  int *piVar7;
  unsigned short *puVar8;
  unsigned __int64 in_r7;
  int *piVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  double dVar12;
  double dVar13;
  
  puVar6 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
  }
  *(unsigned int **)(param_1 + 0xa8) = puVar6;
  uVar2 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x14) + 0x8c0);
  uVar5 = fn_8265C9E0(0x10);
  if ((uVar5 & 0xffffffff) == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)fn_8255FD70(uVar5,*(unsigned int *)(param_1 + 0x5c),0xffffffff821aeea4);
  }
  piVar9 = (int *)*piVar7;
  piVar3 = (int *)piVar7[1];
  dVar12 = (double)ltcg_pool_0_0f;
  do {
    if (piVar9 == piVar3) {
      if (*piVar7 != 0) {
        fn_8265CA20();
      }
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      fn_8265CA20(piVar7);
      return;
    }
    iVar4 = *piVar9;
    puVar10 = (unsigned int *)(iVar4 + 0x44);
    if (puVar10 == (unsigned int *)0x0) {
LAB_82304370:
      dVar13 = (double)lbl_82191FC8;
      uVar11 = 2;
    }
    else {
      uVar5 = (unsigned __int64)*puVar10;
      if (uVar5 == (uVar5 - 1) + (unsigned __int64)(uVar5 == 0)) goto LAB_82304370;
      puVar8 = (unsigned short *)fn_8251F720(puVar10,0);
      uVar1 = puVar8[6];
      while( true ) {
        if (uVar1 == 0) break;
        if (uVar1 == 0x14) goto LAB_823043b4;
        puVar8 = (unsigned short *)((unsigned int)*puVar8 + (int)puVar8);
        uVar1 = puVar8[6];
      }
      puVar8 = (unsigned short *)0x0;
LAB_823043b4:
      dVar13 = (double)*(float *)(puVar8 + 2);
      uVar11 = 0;
      fn_8251FA58();
    }
    fn_82508C40(dVar13,dVar12,(double)lbl_821CA460,(double)lbl_821CA460,
                    *(unsigned int *)(param_1 + 0xa8),uVar2,iVar4 + 0x40,puVar10,in_r7,uVar11);
    piVar9 = piVar9 + 1;
  } while( true );
}

