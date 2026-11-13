extern unsigned int *auStack_30;
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5C88();
extern int fn_828BEFD0();


void fn_828BD5C8(int *param_1,int param_2)

{
  int iVar1;
  int uVar2;
  unsigned char cVar3;
  unsigned char auStack_30 [16];
  
  uVar2 = (*(int (**)())(*param_1 + 4))();
  fn_828BEFD0(uVar2,param_2);
  cVar3 = (*(int (**)())(*param_1 + 0x70))(param_1);
  if (cVar3 != '\0') {
    iVar1 = param_1[0x1b];
    fn_828B5580(auStack_30,param_1 + 0x18);
    fn_828B5C88(auStack_30,iVar1,param_2);
    fn_828B55B0(auStack_30);
  }
  (*(int (**)())(*param_1 + 0x50))(param_1,param_2);
  return;
}

