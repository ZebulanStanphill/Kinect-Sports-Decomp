extern int fn_82575DF0();
extern int fn_826170B8();
extern unsigned int ltcg_pool_0_0f;


void fn_825C4C78(double param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  
  piVar2 = (int *)param_2[2];
  if (piVar2 != (int *)0x0) {
    dVar3 = (double)ltcg_pool_0_0f;
    do {
      iVar1 = *(int *)(*piVar2 + 4);
      if (((*(char *)(iVar1 + 0x1a4) != '\0') || (*(char *)(iVar1 + 0x1a5) != '\0')) ||
         ((*(char *)(iVar1 + 0x1a6) == '\0' &&
          (((double)(float)piVar2[2] <= dVar3 ||
           (param_1 <= (double)(float)((double)(float)piVar2[1] + (double)(float)piVar2[2]))))))) {
        fn_826170B8(param_1);
        piVar2 = (int *)piVar2[5];
      }
      else {
        piVar2 = (int *)piVar2[5];
        fn_82575DF0(param_2[1]);
      }
    } while (piVar2 != (int *)0x0);
  }
  if (0x80000 < (unsigned int)param_2[4]) {
    (**(int (***)())(*param_2 + 0x24))(param_1,param_2);
  }
  return;
}

