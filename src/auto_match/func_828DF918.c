extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_828CCCC0();
extern int fn_828E7140();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;


unsigned int * fn_828DF918(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar2;
  int *piStack_50;
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  piVar3 = (int *)(**(int (***)())(*param_2 + 8))(auStack_40);
  iVar1 = *piVar3;
  if (iStack_3c != 0) {
    fn_822315A0(iStack_3c);
  }
  if (iVar1 == 0) {
    uVar2 = (**(int (***)())*param_2)(param_2);
    fn_828E7140(&piStack_50,uVar2);
    piStack_50[3] = (int)param_3;
    *param_1 = 0;
    param_1[1] = 0;
    fn_828CCCC0(param_1,piStack_50,iStack_4c,0);
    if (iStack_4c != 0) {
      fn_822315A0(iStack_4c);
    }
  }
  else {
    puVar4 = (unsigned int *)(*(int (**)())((unsigned int *)*param_2)[2])(auStack_38,param_2);
    fn_828DF918(auStack_48,*puVar4,param_3);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    uVar2 = (**(int (***)())*param_2)(param_2);
    fn_828E7140(&piStack_50,uVar2);
    (**(int (***)())(*piStack_50 + 0x18))(piStack_50,auStack_48);
    *param_1 = 0;
    param_1[1] = 0;
    fn_828CCCC0(param_1,piStack_50,iStack_4c,0);
    if (iStack_4c != 0) {
      fn_822315A0(iStack_4c);
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

