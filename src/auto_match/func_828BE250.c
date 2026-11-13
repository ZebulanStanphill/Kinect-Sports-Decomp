extern unsigned int *auStack_30;
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55C0();
extern int fn_828BE158();


void fn_828BE250(unsigned __int64 param_1,__int64 param_2,int *param_3)

{
  int iVar1;
  unsigned char auStack_30 [16];
  
  fn_828B5580(auStack_30,param_3 + 5);
  fn_828B55C0(param_2 + 0x60,auStack_30);
  fn_828B55B0(auStack_30);
  iVar1 = (*(int (**)())(*param_3 + 4))(param_3);
  fn_828BE158(param_1,param_2,*(unsigned int *)(iVar1 + 0x3c),0);
  return;
}

