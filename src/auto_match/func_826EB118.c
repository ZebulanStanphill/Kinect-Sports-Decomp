typedef unsigned char (*code)();
extern unsigned int *auStack_40;
extern void *fn_8267BED0();
extern void *fn_826EAF30();


void *
fn_826EB118(void * param_1,int *param_2,void * param_3,void * param_4,
             void * param_5)

{
  unsigned char cVar3;
  void *uVar1;
  void * uVar2;
  unsigned int auStack_40;
  
  if ((param_2 != (int *)0x0) && (cVar3 = (*(code *)(*param_2 + 0xc))(param_2), cVar3 != '\0')) {
    auStack_40 = 2;
    uVar1 = fn_8267BED0(param_1,0x1f8,&auStack_40);
    if (uVar1 != 0) {
      uVar2 = fn_826EAF30(uVar1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  return 0;
}

