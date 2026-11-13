#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern unsigned int fStack_48;
extern int fn_82FFE0F0();
extern int fn_83016E90();
extern int fn_83017108();
extern int fn_830193C8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;


unsigned __int64 fn_83017558(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar4;
  float *pfVar3;
  int iVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned char auStack_50 [8];
  struct { float first; unsigned int second; } stack_pair_48;


  iVar5 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar5);
  for (puVar1 = *(unsigned int **)(param_1 + 0x6e0); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    if ((unsigned __int64)(unsigned int)puVar1[1] == (param_2 & 0xffffffff)) {
      cVar4 = fn_83017108(param_1,puVar1[2],param_3,&stack_pair_48.first,auStack_50);
      if (cVar4 == '\0') {
        pfVar3 = (float *)fn_82FFE0F0(param_1 + 0x61c,puVar1[2]);
        if (pfVar3 == (float *)0x0) {
          dVar7 = (double)lbl_821AAD20;
        }
        else {
          dVar7 = (double)*pfVar3;
        }
      }
      else {
        dVar7 = (double)stack_pair_48.first;
      }
      uVar6 = fn_830193C8(dVar7,puVar1 + 3);
      RtlLeaveCriticalSection(iVar5);
      return uVar6;
    }
  }
  stack_pair_48.second = (unsigned int)param_3;
  stack_pair_48.first = (float)param_2;
  puVar2 = (unsigned int *)fn_83016E90(param_1 + 0x310,CONCAT44(stack_pair_48.first,stack_pair_48.second),
                                param_2 + param_3 +
                                ((param_2 + param_3 & 0xffffffff) / 0xc1) * -0xc1);
  uVar6 = 0;
  if (puVar2 == (unsigned int *)0x0) {
    if ((param_3 & 0xffffffff) == 0) goto LAB_83017614;
    stack_pair_48.second = 0;
    puVar2 = (unsigned int *)fn_83016E90(param_1 + 0x310,(unsigned __int64)(unsigned int)stack_pair_48.first << 0x20,
                                  param_2 + ((param_2 & 0xffffffff) / 0xc1) * -0xc1);
    if (puVar2 == (unsigned int *)0x0) goto LAB_83017614;
  }
  uVar6 = (unsigned __int64)*puVar2;
LAB_83017614:
  RtlLeaveCriticalSection(iVar5);
  return uVar6;
}
