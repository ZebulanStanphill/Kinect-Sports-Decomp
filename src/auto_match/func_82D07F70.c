extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D07808();
extern int fn_82D07980();
extern int fn_82D07CB0();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82D07F70(unsigned char *param_1,int *param_2)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  int iStack_44;
  
  bVar1 = param_1[0x14];
  if (bVar1 == 0) {
    fn_82D07808(*param_1,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),param_2);
  }
  else if (bVar1 == 1) {
    if ((2 < *param_1) && (*param_1 < 5)) {
      uVar3 = *(unsigned int *)(param_1 + 8);
      stack_pair_50.first = 0;
      stack_pair_50.second = 0;
      uStack_48 = 0x80000000;
      piVar4 = (int *)fn_82CE5410();
      uStack_48 = uVar3 | 0x80000000;
      stack_pair_50.first = *piVar4;
      *piVar4 = (uVar3 * 2 + 0x7f & 0xffffff80) + stack_pair_50.first;
      iStack_44 = stack_pair_50.first;
      fn_82D07CB0(*param_1,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 8),0,
                    &stack_pair_50.first);
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        iVar7 = 0;
        do {
          uVar2 = *(unsigned short *)(iVar7 + stack_pair_50.first);
          iVar5 = fn_82CE5410();
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),param_2,4);
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 2;
          *(unsigned int *)(param_2[1] * 4 + *param_2) = (unsigned int)uVar2;
          param_2[1] = param_2[1] + 1;
        } while (iVar6 < *(int *)(param_1 + 8));
      }
      iVar6 = iStack_44;
      stack_pair_50.second = -(unsigned int)(stack_pair_50.first != iStack_44) & stack_pair_50.second;
      piVar4 = (int *)fn_82CE5410();
      *piVar4 = iVar6;
      iVar6 = fn_82CE5410();
      stack_pair_50.second = 0;
      if ((uStack_48 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),stack_pair_50.first,uStack_48 & 0x3fffffff,2);
      }
    }
  }
  else if (((bVar1 < 3) && (bVar1 = *param_1, 2 < bVar1)) && (bVar1 < 5)) {
    fn_82D07980(bVar1,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 8),0,param_2);
  }
  return;
}

