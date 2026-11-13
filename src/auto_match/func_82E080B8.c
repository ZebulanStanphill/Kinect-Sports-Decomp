extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();
extern int fn_82CED6A8();
extern int fn_82E07630();
extern int fn_82E081D0();


/* WARNING: Removing unreachable block (ram,0x82e080f0) */

int fn_82E080B8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  
  fn_82CED6A8();
  puVar5 = (unsigned int *)(param_1 + 4);
  fn_82CE5410();
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  if (0 < (int)*(unsigned int *)(param_1 + 8)) {
    piVar7 = (int *)(*puVar5 + 4);
    do {
      if (*piVar7 != 0) {
        fn_82CE4118();
      }
      *piVar7 = 0;
      fn_82CED5B8(piVar7 + -1);
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  lVar4 = -(unsigned __int64)*(unsigned int *)(param_1 + 8);
  uVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0x1fffffff) * 8 + (unsigned __int64)*puVar5;
  if (0 < lVar4) {
    do {
      if ((uVar6 & 0xffffffff) != 0) {
        fn_82E07630(uVar6);
      }
      lVar4 = lVar4 + -1;
      uVar6 = uVar6 + 8;
    } while (lVar4 != 0);
  }
  *(unsigned int *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(param_2 + 4);
    iVar3 = fn_82CE5410();
    fn_82E081D0(puVar5,*(unsigned int *)(iVar3 + 0x10),0,0,uVar2,iVar1);
  }
  return param_1;
}

