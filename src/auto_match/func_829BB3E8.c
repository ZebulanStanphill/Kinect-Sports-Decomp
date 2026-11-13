extern int fn_829BAD00();
extern int fn_829BB348();


void fn_829BB3E8(int *param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  puVar3 = (unsigned int *)(**(int (***)())param_1[1])(param_1,1,0x50);
  param_1[0x6b] = (int)puVar3;
  *puVar3 = fn_829BB348;
  if (param_2 != 0) {
    *(unsigned int *)(*param_1 + 0x14) = 4;
    (**(int (***)())*param_1)(param_1);
  }
  if (*(int *)(param_1[0x72] + 8) == 0) {
    iVar6 = param_1[0x50];
  }
  else {
    if (param_1[0x50] < 2) {
      *(unsigned int *)(*param_1 + 0x14) = 0x2f;
      (**(int (***)())*param_1)(param_1);
    }
    fn_829BAD00(param_1);
    iVar6 = param_1[0x50] + 2;
  }
  iVar7 = 0;
  if (0 < param_1[9]) {
    piVar8 = (int *)(param_1[0x37] + -0x38);
    puVar3 = puVar3 + 1;
    do {
      piVar2 = piVar8 + 0x17;
      uVar1 = param_1[0x50];
      uVar5 = piVar8[0x11] * *piVar2;
      piVar8 = piVar8 + 0x15;
      trapWord(6,(unsigned __int64)uVar1,0);
      trapWord(5,(unsigned __int64)uVar1 &
                 ~((((unsigned __int64)uVar5 & 0x7fffffff) << 1 | (unsigned __int64)(uVar5 >> 0x1f)) - 1),0xffff);
      uVar4 = (**(int (***)())(param_1[1] + 8))
                        (param_1,1,(__int64)*piVar8 * (__int64)*piVar2,
                         (__int64)((int)uVar5 / (int)uVar1) * (__int64)iVar6);
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar4;
    } while (iVar7 < param_1[9]);
  }
  return;
}

