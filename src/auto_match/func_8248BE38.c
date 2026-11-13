#define true 1
extern unsigned int *auStack_20;
extern int fn_8248C5E0();
extern int fn_8248DE88();


void fn_8248BE38(int param_1,int param_2)

{
  int iVar1;
  unsigned char auStack_20 [8];
  
  iVar1 = *(unsigned int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == *(unsigned int *)(param_1 + 0x1c)) {
      return;
    }
    if (*(unsigned int *)(iVar1 + 0x2c) == param_2) break;
    iVar1 = iVar1 + 0x68;
  }
  fn_8248DE88(iVar1);
  fn_8248C5E0(auStack_20,param_1 + 0x18,iVar1);
  return;
}

