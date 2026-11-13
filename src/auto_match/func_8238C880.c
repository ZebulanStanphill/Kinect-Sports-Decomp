extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_82374520();
extern unsigned int iStack_2c;
extern unsigned int ltcg_pool_0_0f;


__int64 fn_8238C880(int *param_1)

{
  int *piVar2;
  __int64 lVar1;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  dVar7 = (double)(**(int (***)())(*param_1 + 0x70))();
  dVar8 = (double)ltcg_pool_0_0f;
  if (dVar7 <= dVar8) {
    lVar1 = -((unsigned __int64)((unsigned int)param_1[3] < (unsigned int)param_1[5]) - 1);
  }
  else {
    piVar2 = (int *)fn_82374520(auStack_30,param_1[2]);
    iVar3 = *piVar2;
    if (iStack_2c != 0) {
      fn_822315A0(iStack_2c);
    }
    if (iVar3 == 0) {
      uVar6 = (unsigned __int64)(unsigned int)param_1[10];
      uVar4 = 0;
      if (uVar6 != 0) {
        piVar2 = *(int **)(**(int **)(param_1[2] + 8) + 4);
        uVar5 = (unsigned __int64)*(unsigned int *)(piVar2[4] * 4 + *piVar2);
        do {
          iVar3 = fn_822ABA88(uVar5);
          if (*(int *)(iVar3 + 0x300) != 0) goto LAB_8238c8f0;
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff));
      }
      if ((double)(float)param_1[6] <= dVar8) {
        return 1;
      }
    }
LAB_8238c8f0:
    lVar1 = 0;
  }
  return lVar1;
}

