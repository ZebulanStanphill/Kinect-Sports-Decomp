#define true 1
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82E14BC8(int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  for (uVar1 = (**(int (***)())(*param_1 + 0x34))(param_1,0,0); (uVar1 & 0xffffffff) != 0;
      uVar1 = (**(int (***)())(*param_1 + 0x34))(param_1,0,uVar1)) {
    fn_82E14BC8(uVar1,param_2);
  }
  uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1,0,0,0);
  while( true ) {
    if ((uVar1 & 0xffffffff) == 0) {
      return;
    }
    iVar2 = fn_82CE5410();
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) break;
    *(int *)(param_2[1] * 4 + *param_2) = (int)uVar1;
    param_2[1] = param_2[1] + 1;
    uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1,0,0,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),param_2,4);
}

