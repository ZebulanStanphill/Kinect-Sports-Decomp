extern int fn_8267C498();
extern int fn_8269CEE0();
extern int fn_826FD340();


void fn_826FE548(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  int *apiStack_30 [12];
  
  if (param_2 != 0) {
    if ((((*(char *)(param_2 + 0x1c) != '\0') && ((*(unsigned char *)(param_1 + 0xac8) & 1) != 0)) &&
        (iVar5 = *(int *)(param_2 + 4), -1 < iVar5)) && (iVar5 < *(int *)(param_1 + 0xad0))) {
      piVar4 = *(int **)(iVar5 * 4 + *(int *)(param_1 + 0xacc));
      fn_8269CEE0(apiStack_30,param_1 + 0xad8);
      if (apiStack_30[0] != (int *)0x0) {
        apiStack_30[0][1] = apiStack_30[0][1] + 1;
        fn_8267C498(apiStack_30[0]);
      }
      if (apiStack_30[0] != piVar4) {
        *(unsigned short *)(param_1 + 0xae0) = *(unsigned short *)(param_2 + 0x18);
        uVar1 = *(unsigned int *)(param_2 + 0x14);
        uVar2 = *(unsigned int *)(param_2 + 0x10);
        uVar3 = *(unsigned int *)(param_2 + 0xc);
        *(unsigned int *)(param_1 + 0xae4) = *(unsigned int *)(param_2 + 8);
        *(unsigned int *)(param_1 + 0xae8) = uVar3;
        *(unsigned int *)(param_1 + 0xaec) = uVar2;
        *(unsigned int *)(param_1 + 0xaf0) = uVar1;
        fn_826FD340(param_1,piVar4,0,2);
        if ((piVar4 == (int *)0x0) || (iVar5 = (**(int (***)())(*piVar4 + 0x9c))(piVar4), iVar5 != 4)) {
          uVar6 = *(unsigned int *)(param_1 + 0xb00) | 0x10000;
        }
        else {
          uVar6 = *(unsigned int *)(param_1 + 0xb00) & 0xfffeffff;
        }
        *(unsigned int *)(param_1 + 0xb00) = uVar6;
        *(unsigned int *)(param_1 + 0xb00) = uVar6 | 0x400;
      }
      if (apiStack_30[0] != (int *)0x0) {
        fn_8267C498(apiStack_30[0]);
      }
    }
  }
  return;
}

