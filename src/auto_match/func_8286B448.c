#define true 1
extern int fn_822402F8();
extern int fn_8260D428();
extern int fn_8286B190();


void fn_8286B448(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = (iVar3 + 1U) * 2;
    if (param_3 <= iVar4) break;
    iVar1 = (iVar3 + 1U & 0x7fffffff) * 0x38 + param_1;
    puVar2 = (unsigned int *)(iVar1 + -0x1c);
    if (0xf < *(unsigned int *)(iVar1 + -8)) {
      puVar2 = (unsigned int *)*puVar2;
    }
    iVar1 = fn_8260D428(iVar1,0,*(unsigned int *)(iVar1 + 0x10),puVar2,*(unsigned int *)(iVar1 + -0xc))
    ;
    if (iVar1 < 0) {
      iVar4 = iVar4 + -1;
    }
    fn_822402F8(iVar3 * 0x1c + param_1,iVar4 * 0x1c + param_1);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    fn_822402F8(iVar3 * 0x1c + param_1,param_3 * 0x1c + param_1 + -0x1c);
    iVar3 = param_3 + -1;
  }
  fn_8286B190(param_1,iVar3,param_2,param_4);
  return;
}

