extern unsigned int *auStack_80;
extern unsigned int fn_8289D8D0(int);
extern int fn_828A9A68();
extern int fn_828AC488();
extern int fn_828B2360();
extern int fn_828B2BF8();
extern int fn_828B2DF0();
extern int fn_828B42F0();
extern int fn_828D7538();
extern int fn_828E20C8();


void fn_828D7760(int param_1,int param_2,int param_3,int param_4,
                  unsigned int param_5)

{
  unsigned int uVar1;
  unsigned int iVar4;
  unsigned int uVar2;
  int uVar3;
  int *piVar5;
  unsigned char auStack_80 [80];
  
  iVar4 = fn_8289D8D0(*(unsigned int *)(param_1 + 4));
  if ((iVar4 != 0) && (uVar2 = fn_828D7538(param_1,param_2,0), uVar2 != 0)) {
    fn_828E20C8(uVar2,param_3,param_4,param_5);
    uVar2 = fn_828A9A68(*(unsigned int *)(param_1 + 4),param_2,param_3);
    if (uVar2 != 0) {
      uVar3 = fn_828B2BF8();
      piVar5 = (int *)fn_828B2360(uVar3,uVar2);
      if ((piVar5 != (int *)0x0) &&
         (uVar2 = (*(int (**)())(*piVar5 + 8))(piVar5), uVar2 != 0)) {
        uVar1 = param_5;
        while (uVar1 != 0) {
          fn_828B2DF0(auStack_80,param_1,param_4,0);
          fn_828B42F0(uVar2,auStack_80);
          fn_828AC488(auStack_80);
          param_4 = param_4 + 0x2a;
          uVar1 = --param_5;
        }
      }
    }
  }
  return;
}

