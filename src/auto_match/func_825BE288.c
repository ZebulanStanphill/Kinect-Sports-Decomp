extern int fn_822315A0();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern int fn_827D5070();
extern int fn_827D50B8();


void fn_825BE288(int *param_1,unsigned int *param_2)

{
  int bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  
  if ((*param_1 != 0) && (iVar3 = fn_827D50B8(*param_1), iVar3 == 0)) {
    bVar1=0;
    RtlEnterCriticalSection((unsigned __int64)*param_2 + 0x234);
    uVar2 = *param_2;
    if(param_2[3] != *(unsigned int *)(uVar2+0x230))bVar1=1;
    if (!bVar1) {
      uVar4 = fn_827D5070(*param_1);
      *(unsigned int *)(param_2[2] * 4 + *(int *)(uVar2 + 0x1e4)) = uVar4;
    }
    RtlLeaveCriticalSection((unsigned __int64)*param_2 + 0x234);
    if (bVar1) {
      fn_827D5070(*param_1);
      fn_8251FA58();
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    if (param_2[1] != 0) {
      fn_822315A0((void*)param_2[1]);
    }
    fn_8265CA20(param_2);
  }
  if ((void*)param_1[1] != 0) {
    fn_822315A0((void*)param_1[1]);
  }
  return;
}

