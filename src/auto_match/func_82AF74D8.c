extern int fn_82AF62F8();
extern int fn_82AF71C8();


void fn_82AF74D8(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar3 = fn_82AF71C8();
  if (iVar3 == 0) {
    if (param_1[1] != 0) {
      uVar1 = *(unsigned int *)(param_1[1] + 0xc);
      uVar2 = *(unsigned int *)(param_2[1] + 0xc);
    }
    else {
      uVar2 = *(unsigned int *)(*param_2 + 0xc);
      uVar1 = *(unsigned int *)(*param_1 + 0xc);
    }
    fn_82AF62F8(uVar1,uVar2);
  }
  return;
}

