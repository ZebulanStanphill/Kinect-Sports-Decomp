#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_83016E90();
extern int fn_83016EF8();


unsigned __int64 fn_83017020(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  RtlEnterCriticalSection(param_1 + 0x720);
  uVar3 = CONCAT44((int)param_2,(int)param_4);
  lVar2 = param_2 + param_4 + ((param_2 + param_4 & 0xffffffff) / 0xc1) * -0xc1;
  puVar1 = (unsigned int *)fn_83016E90(param_1 + 0x310,uVar3,lVar2);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)fn_83016EF8(param_1 + 0x310,uVar3,lVar2);
    if (puVar1 == (unsigned int *)0x0) {
      uVar3 = 2;
      goto LAB_830170b4;
    }
  }
  *puVar1 = (int)param_3;
  uVar3 = 1;
LAB_830170b4:
  for (puVar1 = *(unsigned int **)(param_1 + 0x6c0); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    if ((unsigned __int64)(unsigned int)puVar1[2] == (param_2 & 0xffffffff)) {
      (**(int (***)())(*(int *)puVar1[1] + 4))((int *)puVar1[1],param_3,param_4);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return uVar3;
}

