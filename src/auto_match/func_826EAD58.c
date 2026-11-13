typedef unsigned char (*code)();
extern unsigned int *auStack_20;
extern void *fn_8267BED0();
extern void *fn_826EABB8();


void * fn_826EAD58(void * param_1,int *param_2)

{
  unsigned char cVar3;
  void *uVar1;
  void * uVar2;
  unsigned int auStack_20 [2];
  
  if ((param_2 != (int *)0x0) && (cVar3 = (*(code *)(*param_2 + 8))(param_2), cVar3 != '\0')) {
    auStack_20[0] = 2;
    uVar1 = fn_8267BED0(param_1,0x310,auStack_20);
    if (uVar1 != 0) {
      uVar2 = fn_826EABB8(uVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}

