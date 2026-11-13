#define true 1
extern int fn_82CE5410();
extern int fn_82CE6460();
extern int fn_82D7D360();
extern int fn_82DB9F80();


void fn_82D7D9D8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  
  uVar1 = *param_1;
  do {
    if ((uVar1 == 0x200) || (param_2[2] == 0)) {
      uVar1 = param_2[2];
      if (uVar1 != 0) {
        uVar3 = param_2[1];
        uVar4 = param_1[2];
        iVar9 = fn_82CE5410();
        fn_82DB9F80(param_1 + 1,*(unsigned int *)(iVar9 + 0x10),uVar4,0,uVar3,uVar1);
        *param_1 = *param_2;
        param_2[2] = 0;
        *param_2 = 0x200;
      }
      return;
    }
    fn_82D7D360(param_1,(unsigned __int64)*(unsigned int *)(param_2[2] * 4 + param_2[1] + -4) +
                          (unsigned __int64)*param_2 + -0x80);
    uVar1 = *param_2;
    *param_2 = (unsigned int)((unsigned __int64)uVar1 - 0x80);
    if ((unsigned __int64)uVar1 - 0x80 == 0) {
      uVar2 = *(unsigned int *)(param_2[2] * 4 + param_2[1] + -4);
      param_2[2] = param_2[2] - 1;
      iVar9 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar9 + 0x10) + 8))(*(int **)(iVar9 + 0x10),uVar2,0x200);
      *param_2 = 0x200;
    }
    if ((param_2[3] & 0x80000000) == 0) {
      uVar11 = (unsigned __int64)param_2[2] + 3;
      uVar5 = (uVar11 & 0xffffffff) >> 0x10;
      uVar6 = (uVar5 | uVar11 & 0xffffffff) >> 8;
      uVar7 = (uVar6 | uVar5 | uVar11 & 0xffffffff) >> 4;
      uVar8 = (uVar7 | uVar6 | uVar5 | uVar11 & 0xffffffff) >> 2;
      lVar12 = ((uVar8 | uVar7 | uVar6 | uVar5 | uVar11 & 0xffffffff) >> 1 |
               uVar8 | uVar7 | uVar6 | uVar5 | uVar11) + 1;
      if ((int)lVar12 < 1) {
        iVar9 = fn_82CE5410();
        lVar12 = 1;
        puVar10 = param_2 + 4;
      }
      else {
        if ((int)(param_2[3] & 0x3fffffff) <= (int)lVar12) goto LAB_82d7db0c;
        iVar9 = fn_82CE5410();
        puVar10 = (unsigned int *)0x0;
      }
      fn_82CE6460(*(unsigned int *)(iVar9 + 0x10),param_2 + 1,4,puVar10,lVar12);
    }
LAB_82d7db0c:
    uVar1 = *param_1;
  } while( true );
}

