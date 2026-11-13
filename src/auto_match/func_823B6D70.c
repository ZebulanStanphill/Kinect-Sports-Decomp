extern unsigned int *auStack_20;
extern int fn_823B67F8();
extern int fn_8243C3D0();
extern int fn_8243C490();
extern int fn_8288B760();
extern int fn_828B00A0();
extern unsigned int ltcg_pool_0_0f;


void fn_823B6D70(unsigned int *param_1)

{
  char cVar4;
  int iVar2;
  int *piVar3;
  __int64 lVar1;
  unsigned __int64 auStack_20 [2];
  
  if (param_1[3] != 0) {
    cVar4 = fn_8288B760((unsigned __int64)param_1[3] - 0x68);
    if ((cVar4 != '\0') && (iVar2 = fn_823B67F8(param_1), iVar2 != 0)) {
      piVar3 = (int *)(param_1[3] - 0x68);
      if (param_1[3] == 0) {
        piVar3 = (int *)0x0;
      }
      lVar1 = (**(int (***)())(*piVar3 + 8))();
      iVar2 = fn_8243C3D0(lVar1 + 0x9c,0);
      if (iVar2 == 0) {
        auStack_20[0] = fn_828B00A0((unsigned __int64)*param_1 + 0x278);
        piVar3 = (int *)(param_1[3] - 0x68);
        if (param_1[3] == 0) {
          piVar3 = (int *)0x0;
        }
        lVar1 = (**(int (***)())(*piVar3 + 8))();
        fn_8243C490(lVar1 + 0x9c,auStack_20);
        iVar2 = param_1[3] - 0x68;
        param_1[5] = ltcg_pool_0_0f;
        if (param_1[3] == 0) {
          iVar2 = 0;
        }
        *(unsigned int *)(iVar2 + 0x80) = 0;
        param_1[4] = 1;
      }
    }
  }
  return;
}

