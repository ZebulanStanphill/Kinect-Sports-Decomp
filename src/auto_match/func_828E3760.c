typedef unsigned char bool;
extern int fn_8289DF30();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_828E3760(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  RtlEnterCriticalSection(param_1 + 3);
  uVar6 = (unsigned __int64)(unsigned int)param_1[1];
  puVar1 = (unsigned int *)*param_1;
  if (uVar6 != 0) {
    do {
      puVar5 = (unsigned int *)(uVar6 + 4);
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,uVar6 + 4);
        *puVar5 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  RtlLeaveCriticalSection(param_1 + 3);
  piVar2 = *(int **)*puVar1;
  piVar3 = (int *)*piVar2;
  if (piVar3 != piVar2) {
    do {
      piVar2 = (int *)piVar3[2];
      (**(int (***)())(*piVar2 + 8))(piVar2);
      *(unsigned char *)(piVar2 + 1) = 0;
      (**(int (***)())(*piVar2 + 0xc))(piVar2);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)*puVar1);
  }
  if (uVar6 != 0) {
    fn_8289DF30(uVar6);
  }
  return;
}

