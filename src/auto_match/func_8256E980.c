extern int fn_82522ED8();
extern int fn_82F63CA0();


unsigned __int64 fn_8256E980(int *param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  int *piVar3;
  __int64 lVar4;
  __int64 lVar5;
  int iVar6;
  unsigned __int64 uVar7;
  
  piVar1 = (int *)*param_1;
  uVar7 = 0;
  if (piVar1[1] - *piVar1 >> 2 != 0) {
    iVar6 = 0;
    do {
      piVar3 = *(int **)(iVar6 + *piVar1);
      if (*piVar3 == param_2) {
        fn_82522ED8(piVar3[0x16]);
        fn_82522ED8(piVar3[0x17]);
        fn_82522ED8(piVar3[0x18]);
        fn_82522ED8(piVar3[0x19]);
        fn_82522ED8(piVar3);
        puVar2 = (unsigned int *)*param_1;
        lVar4 = (uVar7 & 0x3fffffff) * 4 + (unsigned __int64)*puVar2;
        lVar5 = lVar4 + 4;
        fn_82F63CA0(lVar4,lVar5,((int)(puVar2[1] - (int)lVar5) >> 2) << 2);
        puVar2[1] = puVar2[1] - 4;
        return 1;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 4;
    } while ((uVar7 & 0xffffffff) < (unsigned __int64)(unsigned int)(piVar1[1] - *piVar1 >> 2));
  }
  return 0;
}

