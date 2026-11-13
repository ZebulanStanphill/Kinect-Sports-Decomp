typedef unsigned char bool;
extern int fn_828A45E8();
extern int fn_828A6468();
extern int fn_828A64E0();
extern int fn_828A6938();
extern int fn_828E3AF0();
extern int fn_828E6DF8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828E9410(int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (*param_2 == param_1[4]) {
    iVar1 = *param_1;
  }
  else {
    iVar1 = *(int *)(*param_2 + 0x18);
  }
  fn_828A45E8(param_1,iVar1,param_4);
  uVar5 = (unsigned __int64)*param_2;
  uVar2 = *(unsigned int *)(iVar1 + 4);
  if ((uVar5 != (unsigned int)param_1[4]) &&
     (cVar4 = fn_828E6DF8(param_1,param_3,uVar5 + 0xc), cVar4 != '\0')) {
    fn_828A64E0(&uStack_40,param_1 + 3,uVar5);
  }
  piVar6 = param_1 + 3;
  uVar5 = fn_828E3AF0(piVar6,param_3);
  if (((uVar5 & 0xffffffff) == (unsigned __int64)(unsigned int)param_1[4]) ||
     (cVar4 = fn_828E6DF8(param_1,uVar5 + 0xc,param_3), cVar4 == '\0')) {
    uStack_40 = *param_3;
    uStack_3c = *(char *)(param_3 + 1) != '\0';
    if ((bool)uStack_3c) {
      uStack_38 = param_3[2];
    }
    uStack_34 = uVar2;
    uVar3 = fn_828A6468(piVar6,&uStack_40);
    fn_828A6938(&uStack_40,piVar6,uVar3,0);
  }
  return;
}

