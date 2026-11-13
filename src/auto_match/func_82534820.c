typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_40;
extern int fn_822A8928();
extern int fn_82864848();
extern int fn_82864898();
extern unsigned int lbl_8327F878;


bool fn_82534820(unsigned int param_1)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  unsigned char auStack_40 [40];
  
  uVar1 = lbl_8327F878;
  if ((param_1 & 0xffffffff) == 0) {
    bVar3 = false;
  }
  else {
    fn_82864848(auStack_40);
    iVar2 = fn_822A8928(uVar1,1,param_1,auStack_40);
    bVar3 = iVar2 == 0;
    fn_82864898(auStack_40);
  }
  return bVar3;
}

