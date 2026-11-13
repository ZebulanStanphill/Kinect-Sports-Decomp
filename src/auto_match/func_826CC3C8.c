extern int fn_826C8E20();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


unsigned int fn_826CC3C8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iStack0000001c;
  
  piVar3 = (int *)(param_1 + 0x14);
  iStack0000001c = param_2;
  iVar2 = fn_826C8E20(piVar3,0,*(unsigned int *)(param_1 + 0x18),&stack0x0000001c,0xffffffff826c5190
                       );
  if (iVar2 != 0) {
    iVar1 = (iVar2 + -1) * 4;
    if (*(int *)(*(int *)(iVar1 + *piVar3) + 0xc) == param_2) {
      if (param_3 != (int *)0x0) {
        *param_3 = iVar2 + -1;
      }
      return *(unsigned int *)(iVar1 + *piVar3);
    }
  }
  return 0;
}

