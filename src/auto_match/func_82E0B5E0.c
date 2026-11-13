extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82E0A300();
extern unsigned int iStack_60;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


unsigned __int64 fn_82E0B5E0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  
  iVar2 = fn_82CE5410();
  iVar6 = param_1 + 0x18;
  fn_82CEA160(iVar6,*(unsigned int *)(iVar2 + 0x10),param_2,2);
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  uStack_58 = 0x80000000;
  iVar2 = param_4[1];
  iVar3 = fn_82CE5410();
  if ((int)(uStack_58 & 0x3fffffff) < iVar2) {
    fn_82CE6310(*(unsigned int *)(iVar3 + 0xc),&stack_pair_60.first,iVar2,8);
  }
  iVar2 = 0;
  if (0 < param_4[1]) {
    iVar3 = 0;
    do {
      puVar7 = (unsigned int *)(iVar3 + *param_4);
      iVar5 = **(int **)(iVar3 + *param_4);
      (**(int (***)())(**(int **)(param_1 + 4) + 0x14))(*(int **)(param_1 + 4),iVar5);
      if ((iVar5 != 0) && (iVar4 = fn_82CEA220(iVar6,iVar5), *(int *)(param_1 + 0x20) < iVar4)) {
        iVar4 = fn_82CE5410();
        fn_82CEA160(iVar6,*(unsigned int *)(iVar4 + 0x10),iVar5,1);
        fn_82E0A300(param_1,puVar7);
        iVar5 = fn_82CE5410();
        if (stack_pair_60.second == (uStack_58 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar5 + 0xc),&stack_pair_60.first,8);
        }
        iVar5 = stack_pair_60.second * 8;
        stack_pair_60.second = stack_pair_60.second + 1;
        *(unsigned int *)(iVar5 + stack_pair_60.first) = *puVar7;
        *(unsigned int *)(iVar5 + stack_pair_60.first + 4) = puVar7[1];
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < param_4[1]);
  }
  iVar2 = *param_4;
  iVar3 = param_4[1];
  uVar1 = param_4[2];
  *param_4 = stack_pair_60.first;
  param_4[1] = stack_pair_60.second;
  param_4[2] = uStack_58;
  stack_pair_60.first = iVar2;
  stack_pair_60.second = iVar3;
  uStack_58 = uVar1;
  iVar2 = fn_82CE5410();
  stack_pair_60.second = 0;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar2 + 0xc) + 0x10))
              (*(int **)(iVar2 + 0xc),stack_pair_60.first,uStack_58 & 0x3fffffff,8);
  }
  return 0;
}

