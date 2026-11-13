#define true 1
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CFFFC8();
extern int fn_82D00020();
extern int fn_82D00060();
extern int fn_82D002F0();


void fn_82E09740(__int64 param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  char acStack_30;
  
  param_1 = param_1 + 0xc;
  uVar1 = fn_82CFFFC8(param_1);
  fn_82D002F0(&acStack_30,param_1,uVar1);
  while( true ) {
    if (acStack_30 == '\0') {
      return;
    }
    uVar2 = fn_82D00020(param_1,uVar1);
    iVar3 = fn_82CE5410();
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) break;
    iVar3 = param_2[1];
    param_2[1] = iVar3 + 1;
    *(unsigned int *)(iVar3 * 4 + *param_2) = uVar2;
    uVar1 = fn_82D00060(param_1,uVar1);
    fn_82D002F0(&acStack_30,param_1,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_2,4);
}

