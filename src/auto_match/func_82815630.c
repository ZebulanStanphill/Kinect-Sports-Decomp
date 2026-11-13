extern int fn_8257A9F0();
extern int fn_82816A58();
extern int fn_82816B30();
extern int fn_8281FDF0();


unsigned int * fn_82815630(unsigned int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar6;
  int iVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  cVar2 = fn_8281FDF0(param_2,0xffffffff8201e0e8);
  piVar5 = (int *)0x0;
  uVar3 = 0;
  if (*(int *)(*(int *)(param_2 + 0x1c) + 0x28) != 0) {
    iVar4 = 0;
    do {
      iVar7 = iVar4 + *(int *)(param_2 + 0x44);
      if (*(char *)(iVar7 + 0xc) == cVar2) {
        piVar1 = *(int **)(iVar7 + 4);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)*piVar1;
          iVar7 = 0;
          if (0 < *piVar5) {
            lVar6 = 0;
            do {
              fn_8257A9F0(param_1 + 4,lVar6 + (unsigned __int64)(unsigned int)piVar5[1]);
              iVar7 = iVar7 + 1;
              lVar6 = lVar6 + 4;
            } while (iVar7 < *piVar5);
          }
          iVar7 = 0;
          if (0 < piVar5[2]) {
            lVar6 = 0;
            do {
              fn_82816A58(param_1,lVar6 + (unsigned __int64)(unsigned int)piVar5[3]);
              iVar7 = iVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (iVar7 < piVar5[2]);
          }
        }
        iVar7 = 0;
        if (0 < piVar1[1]) {
          lVar6 = 0;
          do {
            fn_82816B30(param_1 + 8,(unsigned __int64)(unsigned int)piVar1[2] + lVar6);
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 0x14;
          } while (iVar7 < piVar1[1]);
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xe;
    } while (uVar3 < *(unsigned int *)(*(int *)(param_2 + 0x1c) + 0x28));
  }
  return param_1;
}

