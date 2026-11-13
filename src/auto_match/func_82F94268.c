extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F94750();
extern int fn_82F949D0();
extern int fn_82F95200();
extern int fn_82F952E8();


void fn_82F94268(int *param_1)

{
  unsigned __int64 uVar1;
  char cVar2;
  int *piStack00000014;
  unsigned char auStack_50 [1];
  unsigned char auStack_44 [4];
  unsigned __int64 auStack_40;
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [24];
  
  piStack00000014 = param_1;
  fn_82F90628(auStack_50,0xffffffff832641cc);
  if (piStack00000014[2] == 0) {
    if (piStack00000014 != (int *)0x0) {
      (**(int (***)())(*piStack00000014 + 0x2c))(piStack00000014,1);
    }
    fn_82F95200(&auStack_40,0xffffffff832641f0,auStack_44);
    uVar1 = fn_82F94750(auStack_30,0xffffffff832641f0);
    cVar2 = fn_82F952E8(&auStack_40,uVar1);
    if (cVar2 != '\0') {
      fn_82F949D0(auStack_28,0xffffffff832641f0,auStack_40);
    }
  }
  fn_82F90680(auStack_50);
  return;
}

