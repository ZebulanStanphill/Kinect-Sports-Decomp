#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8278FED0();
extern unsigned int iStack00000024;
extern unsigned int stack0x00000024;


unsigned __int64 * fn_82791138(unsigned __int64 *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iStack00000024;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    *(unsigned int *)param_1 = 0;
    *(unsigned int *)((int)param_1 + 4) = 0xffffffff;
  }
  else {
    piVar2 = (int *)(param_2 + 0xc);
    iStack00000024 = param_3;
    iVar1 = fn_8278FED0(piVar2,0,*(int *)(param_2 + 0x10),&stack0x00000024,0xffffffff8278fb00);
    if (iVar1 == *(int *)(param_2 + 0x10)) {
      iVar1 = iVar1 + -1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = param_3 - *(int *)(*(int *)(iVar1 * 4 + *piVar2) + 0x1c);
    }
    *param_1 = CONCAT44(piVar2,iVar1);
  }
  return param_1;
}

