extern int fn_82CE5410();
extern int fn_82CE7340();
extern int fn_82CEDE90();
extern int fn_82CF6EE0();
extern unsigned int iStack_7c;
extern unsigned int lbl_82005748;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_82CE75A8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  double dVar9;
  struct { unsigned int first; int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  lVar8 = 0;
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  (**(int (***)())(*(int *)*param_3 + 0x28))((int *)*param_3,&stack_pair_80.first);
  iVar2 = stack_pair_80.second;
  fn_82CE7340(0xffffffff82132b78,param_2,&stack_pair_80.first,param_3[8]);
  fn_82CEDE90(param_2,0xffffffff82132b54);
  lVar5 = 0;
  lVar6 = 0;
  if (0 < (int)param_3[2]) {
    iVar4 = 0;
    do {
      uVar3 = fn_82CF6EE0(*(unsigned int *)(param_3[1] + iVar4));
      if ((uVar3 & 0xffffffff) != 0) {
        fn_82CEDE90(param_2,0xffffffff82132b30,lVar6,uVar3);
        lVar5 = uVar3 + lVar5;
      }
      lVar6 = lVar6 + 1;
      iVar4 = iVar4 + 4;
    } while ((int)lVar6 < (int)param_3[2]);
  }
  fn_82CEDE90(param_2,0xffffffff82132b14,lVar5);
  fn_82CEDE90(param_2,0xffffffff82132b04);
  iVar4 = param_3[5];
  uVar3 = 0;
  dVar9 = (double)lbl_82005748;
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      puVar1 = *(unsigned int **)(param_3[4] + iVar7);
      lVar5 = (unsigned __int64)puVar1[2] - (unsigned __int64)puVar1[1];
      lVar6 = ((unsigned __int64)*puVar1 - (unsigned __int64)puVar1[2]) + lVar5;
      uVar3 = lVar5 + uVar3;
      fn_82CEDE90(param_2,0xffffffff82132ac4,lVar8,lVar5,lVar6,
                        (double)((float)((double)(__int64)(int)lVar6 * dVar9) /
                                (float)(__int64)(int)lVar5));
      iVar4 = param_3[5];
      lVar8 = lVar8 + 1;
      iVar7 = iVar7 + 4;
    } while ((int)lVar8 < iVar4);
  }
  if (iVar4 == 0) {
    uVar3 = (unsigned __int64)(unsigned int)param_3[7];
  }
  fn_82CEDE90(param_2,0xffffffff82132b14,uVar3);
  iVar4 = fn_82CE5410();
  (**(int (***)())(**(int **)(iVar4 + 0x18) + 0x28))(*(int **)(iVar4 + 0x18),&stack_pair_80.first);
  fn_82CEDE90(param_2,0xffffffff82132a90,0xffffffff82132abc);
  fn_82CEDE90(param_2,0xffffffff82132a70,stack_pair_80.first);
  fn_82CEDE90(param_2,0xffffffff82132954,uStack_78,
                    (double)((float)((double)uStack_78 * dVar9) / (float)stack_pair_80.first));
  iVar4 = fn_82CE5410();
  (**(int (***)())(**(int **)(iVar4 + 0x14) + 0x28))(*(int **)(iVar4 + 0x14),&stack_pair_80.first);
  if (iVar2 == stack_pair_80.second) {
    fn_82CEDE90(param_2,0xffffffff82132aa4);
  }
  else {
    fn_82CE7340(0xffffffff82132a98,param_2,&stack_pair_80.first,0x7fffffff);
  }
  return;
}

