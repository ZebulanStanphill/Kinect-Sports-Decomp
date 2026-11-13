#define true 1
extern unsigned int *auStack_20;
extern int fn_8248B7E0();
extern int fn_8248C888();


void fn_8248C3D8(int param_1,int param_2)

{
  int iVar1;
  unsigned char auStack_20 [8];
  
  iVar1 = *(unsigned int *)(param_1 + 0x30);
  while( true ) {
    if (iVar1 == *(unsigned int *)(param_1 + 0x34)) {
      return;
    }
    if (*(unsigned int *)(iVar1 + 0x18) == param_2) break;
    iVar1 = iVar1 + 0x20;
  }
  fn_8248B7E0(iVar1);
  fn_8248C888(auStack_20,param_1 + 0x30,iVar1);
  return;
}

