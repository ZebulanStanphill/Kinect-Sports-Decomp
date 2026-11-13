#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8278FED0();
extern unsigned int iStack00000024;
extern unsigned int stack0x00000024;


unsigned __int64 * fn_82791070(unsigned __int64 *param_1,int param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int iStack00000024;
  
  piVar4 = (int *)(param_2 + 0xc);
  iStack00000024 = (int)param_3;
  uVar2 = fn_8278FED0(piVar4,0,*(unsigned int *)(param_2 + 0x10),&stack0x00000024,0xffffffff8278fb00
                       );
  if (uVar2 < *(unsigned int *)(param_2 + 0x10)) {
    iVar1 = *(int *)(uVar2 * 4 + *piVar4);
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c);
    if (((uVar3 <= (param_3 & 0xffffffff)) &&
        ((param_3 & 0xffffffff) < (*(unsigned int *)(iVar1 + 4) + uVar3 & 0xffffffff))) ||
       (uVar3 == param_3)) {
      if (param_4 != (int *)0x0) {
        *param_4 = (int)param_3 - *(int *)(*(int *)(*piVar4 + uVar2 * 4) + 0x1c);
      }
      *param_1 = CONCAT44(piVar4,uVar2);
      return param_1;
    }
  }
  *(unsigned int *)param_1 = 0;
  *(unsigned int *)((int)param_1 + 4) = 0xffffffff;
  return param_1;
}

