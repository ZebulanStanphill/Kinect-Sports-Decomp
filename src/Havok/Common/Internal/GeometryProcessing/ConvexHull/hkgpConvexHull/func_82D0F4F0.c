extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D0C6B0();
extern int fn_82D16868();
extern int fn_82D18590();
extern unsigned int lbl_821346B0;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned int * fn_82D0F4F0(unsigned __int64 param_1,int *param_2,__int64 param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  int *piVar12;
  __int64 lVar13;
  int *piVar14;
  int iVar15;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  iVar5 = (int)param_3;
  if (0 < iVar5) {
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0x80000000;
    lVar10 = 0;
    iVar4 = *(int *)(*param_2 + 8);
    lVar11 = 0;
    uVar8 = 0;
    piVar14 = (int *)0x0;
    piVar3 = (int *)0x0;
    uVar9 = 0;
    uStack_58 = *(unsigned int *)(iVar4 + 8);
    uStack_54 = *(unsigned int *)(iVar4 + 0xc);
    uStack_5c = *(unsigned int *)(iVar4 + 4);
    if (1 < iVar5) {
      lVar13 = ((param_3 - 2U & 0xffffffff) >> 1) + 1;
      uVar9 = lVar13 * 2 & 0xfffffffe;
      piVar12 = param_2;
      do {
        lVar10 = (unsigned __int64)*(unsigned int *)(*(int *)(*piVar12 + 8) + 0x28) + lVar10;
        if ((piVar14 == (int *)0x0) && (piVar1 = *(int **)(*piVar12 + 0x10), piVar1 != (int *)0x0))
        {
          piVar14 = piVar1;
        }
        lVar11 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar12[1] + 8) + 0x28) + lVar11;
        if ((piVar14 == (int *)0x0) && (piVar1 = *(int **)(piVar12[1] + 0x10), piVar1 != (int *)0x0)
           ) {
          piVar14 = piVar1;
        }
        piVar12 = piVar12 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if ((int)uVar9 < iVar5) {
      iVar4 = *(int *)((int)(uVar9 << 2) + (int)param_2);
      uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 8) + 0x28);
      if ((piVar14 == (int *)0x0) && (piVar12 = *(int **)(iVar4 + 0x10), piVar12 != (int *)0x0)) {
        piVar14 = piVar12;
      }
    }
    lVar10 = lVar11 + lVar10 + uVar8;
    if (piVar14 != (int *)0x0) {
      piVar3 = (int *)(**(int (***)())(*piVar14 + 4))(piVar14);
    }
    iVar4 = fn_82CE5410();
    iVar15 = (int)lVar10;
    if ((int)(uStack_68 & 0x3fffffff) < iVar15) {
      lVar11 = ((unsigned __int64)uStack_68 & 0x3fffffff) << 1;
      if ((int)lVar11 <= iVar15) {
        lVar11 = lVar10;
      }
      fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),&uStack_70,lVar11,0x10);
    }
    if (0 < iVar5) {
      param_2 = param_2 + -1;
      do {
        if (((piVar3 != (int *)0x0) && (*(int **)(param_2[1] + 0x10) != (int *)0x0)) &&
           (*(int **)(param_2[1] + 0x10) != piVar14)) {
          (**(int (***)())(*piVar3 + 8))(piVar3);
        }
        param_2 = param_2 + 1;
        fn_82D0C6B0(*param_2,param_1,&uStack_70);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    iVar5 = fn_82CE5410();
    puVar6 = (unsigned int *)(**(int (***)())(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x14)
    ;
    *(unsigned short *)((int)puVar6 + 6) = 1;
    *(unsigned short *)(puVar6 + 1) = 0x14;
    *puVar6 = &lbl_821346B0;
    iVar5 = fn_82CE5410();
    iVar5 = (**(int (***)())(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x1c0);
    if (iVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_82D16868();
    }
    puVar6[2] = uVar7;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[4] = piVar3;
    puVar2 = (unsigned int *)puVar6[2];
    *puVar2 = uStack_60;
    puVar2[1] = uStack_5c;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    fn_82D18590(puVar6[2],uStack_70,uStack_6c,0,0);
    if (*(int *)(puVar6[2] + 0x1a8) != -1) {
      iVar5 = fn_82CE5410();
      uStack_6c = 0;
      if ((uStack_68 & 0x80000000) != 0) {
        return puVar6;
      }
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),uStack_70,uStack_68 & 0x3fffffff,0x10);
      return puVar6;
    }
    (**(int (***)())*puVar6)(puVar6,1);
    iVar5 = fn_82CE5410();
    uStack_6c = 0;
    if ((uStack_68 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),uStack_70,uStack_68 & 0x3fffffff,0x10);
    }
  }
  return (unsigned int *)0x0;
}

