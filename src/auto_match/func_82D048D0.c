#define true 1
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82D048D0(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = 1;
  iVar1 = fn_82CE5410();
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0xc),param_3,4);
  }
  *(int *)(param_3[1] * 4 + *param_3) = iVar2;
  iVar2 = param_3[1];
  while( true ) {
    param_3[1] = iVar2 + 1;
    iVar2 = 0x7fffffff;
    if (param_1[1] + -1 <= 0x7fffffff) {
      iVar2 = param_1[1] + -1;
    }
    if (iVar2 <= iVar3) {
      return;
    }
    while (*(char *)(*param_1 + iVar3) != param_2) {
      iVar3 = iVar3 + 1;
      if (iVar2 <= iVar3) {
        return;
      }
    }
    if (iVar3 < 0) {
      return;
    }
    *(unsigned char *)(*param_1 + iVar3) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = *param_1;
    iVar1 = fn_82CE5410();
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) break;
    *(int *)(param_3[1] * 4 + *param_3) = iVar2 + iVar3;
    iVar2 = param_3[1];
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(unsigned int *)(iVar1 + 0xc),param_3,4);
}

