extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CEAC20();
extern int fn_82D000A0();
extern int fn_82D00310();
extern int fn_82D00388();
extern int fn_82DB9F80();
extern int fn_82E12688();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82E12850(unsigned __int64 param_1,int param_2,int *param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_5c;
  struct { unsigned int first; unsigned int second; } stack_pair_58;

  unsigned int uStack_50;
  
  fn_82D00388(param_1,0);
  stack_pair_58.first = 0;
  stack_pair_58.second = 0;
  uStack_50 = 0x80000000;
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
    if (*(int *)(param_2 + 4) != 0) {
      iVar3 = fn_82CE5410();
      fn_82DB9F80(&stack_pair_58.first,*(unsigned int *)(iVar3 + 0xc),0,0,param_2 + 4,1);
    }
  }
  iVar3 = 0;
  if (0 < param_3[1]) {
    iVar5 = 0;
    do {
      uVar1 = *(unsigned int *)(iVar5 + *param_3 + 4);
      uVar2 = fn_82CEAC20(uVar1);
      iVar4 = fn_82D00310(param_1,uVar2,&uStack_5c);
      if (iVar4 == 0) {
        uVar6 = (unsigned __int64)uStack_5c;
      }
      else {
        uVar6 = fn_82E12688(param_1,&stack_pair_58.first,uVar1);
        uVar2 = fn_82CEAC20(uVar1);
        fn_82D000A0(param_1,uVar2,uVar6);
      }
      if ((uVar6 & 0xffffffff) != 0) {
        iVar4 = fn_82CE5410();
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar4 + 0xc),param_4,4);
        }
        *(int *)(param_4[1] * 4 + *param_4) = iVar3;
        param_4[1] = param_4[1] + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar3 < param_3[1]);
  }
  iVar3 = fn_82CE5410();
  stack_pair_58.second = 0;
  if ((uStack_50 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),stack_pair_58.first,uStack_50 & 0x3fffffff,4);
  }
  return param_1;
}

