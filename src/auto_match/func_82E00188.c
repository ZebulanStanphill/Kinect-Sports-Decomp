extern int fn_82D40568();
extern unsigned int lbl_8200133C;


__int64 fn_82E00188(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,
                      unsigned int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 in_r0;
  char cVar8;
  int iVar7;
  int iVar9;
  __int64 lVar10;
  int *piVar11;
  int *piVar12;
  double dVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  
  iVar1 = *(int *)(param_1 + 0x14);
  lVar10 = 0;
  if (0 < iVar1) {
    iVar9 = 0;
    piVar12 = param_4 + 7;
    dVar13 = (double)lbl_8200133C;
    do {
      piVar11 = (int *)(iVar9 * 0x60 + *(int *)(param_1 + 0x10));
      if (param_4 != (int *)0x0) {
        iVar2 = piVar11[1];
        piVar12[-4] = 0;
        piVar12[-5] = (int)(piVar11 + 4);
        piVar12[-6] = -1;
        *(unsigned char *)(piVar12 + -3) = 0;
        *param_4 = iVar2;
        piVar12[-2] = 0;
        *(unsigned char *)(piVar12 + -1) = 0;
        *piVar12 = 0;
        *(unsigned char *)((int)piVar12 + -2) = 0xff;
        *(unsigned char *)((int)piVar12 + -3) = 0x7f;
        fn_82D40568(piVar12 + 1);
        piVar12[0xc] = (int)(float)dVar13;
        *(char *)((int)piVar12 + -3) = (char)param_4 - ((char)piVar12 + -8);
        *(unsigned char *)((int)piVar12 + -0xb) = 0;
        *(unsigned short *)((int)piVar12 + -10) = 0;
      }
      (**(int (***)())(*(int *)*piVar11 + 0x28))();
      iVar2 = *piVar11;
      iVar3 = *(int *)(iVar2 + 0xd4);
      if (0 < iVar3) {
        iVar7 = 0;
        iVar4 = 0;
        do {
          *param_5 = param_4;
          cVar8 = (char)iVar7 + '\x01';
          lVar10 = lVar10 + 1;
          iVar7 = (int)cVar8;
          param_5[1] = *(unsigned int *)(iVar4 + *(int *)(iVar2 + 0xd0));
          puVar5 = (unsigned int *)((int)piVar11 + (int)in_r0 + 0x40 & 0xfffffff0);
          uVar14 = puVar5[1];
          uVar15 = puVar5[2];
          uVar16 = puVar5[3];
          puVar6 = (unsigned int *)((unsigned int)(param_5 + 4) & 0xfffffff0);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          puVar6[2] = uVar15;
          puVar6[3] = uVar16;
          iVar4 = iVar7 << 2;
          puVar5 = (unsigned int *)((int)piVar11 + (int)in_r0 + 0x50 & 0xfffffff0);
          uVar14 = *puVar5;
          uVar15 = puVar5[1];
          uVar16 = puVar5[2];
          uVar17 = puVar5[3];
          param_5[0xc] = param_6;
          puVar5 = (unsigned int *)((unsigned int)(param_5 + 8) & 0xfffffff0);
          *puVar5 = uVar14;
          puVar5[1] = uVar15;
          puVar5[2] = uVar16;
          puVar5[3] = uVar17;
          param_5[0xd] = 1;
          param_5[0x10] = 0;
          param_5 = param_5 + 0x14;
          param_6 = param_6 + 0x30;
        } while (cVar8 < iVar3);
      }
      cVar8 = (char)iVar9 + '\x01';
      param_4 = param_4 + 0x14;
      iVar9 = (int)cVar8;
      piVar12 = piVar12 + 0x14;
    } while (cVar8 < iVar1);
  }
  return lVar10;
}

