extern int fn_822ABA88();
extern int fn_8242C410();
extern int fn_8243E700();


unsigned __int64 fn_82450238(int param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  double dVar8;
  
  dVar8 = (double)**(float **)(param_2 + 0x1a0);
  if (((dVar8 <= (double)**(float **)(param_1 + 0x44)) ||
      (*(int *)(*(int *)(param_2 + 0x2c) * 0x18 + (int)(*(float **)(param_1 + 0x44))[0x2e]) == 0))
     || (uVar2 = fn_8243E700((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x148) * 0x18 +
                                   (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x138),
                                   *(int *)(param_2 + 0x2c),0), (uVar2 & 0xffffffff) == 0)) {
    uVar2 = 1;
    lVar5 = 0;
    uVar6 = (unsigned __int64)**(unsigned int **)(param_1 + 0x40);
    iVar3 = fn_8242C410(uVar6);
    if (0 < iVar3) {
      uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x2c);
      lVar7 = 0;
      do {
        piVar1 = *(int **)(**(int **)((int)uVar6 + 8) + (int)lVar7);
        iVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
        if (((int)uVar4 != *(int *)(iVar3 + 0x2c)) && (dVar8 < (double)**(float **)(iVar3 + 0x1a0)))
        {
          uVar2 = uVar2 + 1;
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 4;
        iVar3 = fn_8242C410(uVar6);
      } while ((int)lVar5 < iVar3);
    }
  }
  return uVar2;
}

