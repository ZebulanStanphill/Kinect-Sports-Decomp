extern unsigned int *auStack_28;
extern unsigned int *auStack_40;
extern int fn_82A1F2F8();
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F90DB0();
extern int fn_82F916A0();
extern unsigned int iStack0000003c;
extern unsigned int stack0x0000003c;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;


int fn_82F91008(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6)

{
  int iVar1;
  int *piStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  int iStack0000003c;
  unsigned char auStack_40 [24];
  unsigned char auStack_28 [24];
  
  piStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  iStack0000003c = param_6;
  fn_82F90628(auStack_40,param_1 + 3);
  iVar1 = fn_82A1F2F8();
  if ((piStack00000014[0x17] == 0) || (29999 < (unsigned int)(iVar1 - piStack00000014[0x17]))) {
    if (iStack0000003c != 0) {
      fn_82F916A0(auStack_28,piStack00000014 + 0x1a,&stack0x0000003c);
    }
    if ((piStack00000014[0x16] == 0) && (iVar1 = fn_82F90DB0(piStack00000014), iVar1 < 0)) {
      fn_82F90680(auStack_40);
      return iVar1;
    }
    fn_82F90680(auStack_40);
    iVar1 = 0x540002;
  }
  else {
    iVar1 = (**(int (***)())(*piStack00000014 + 0x18))
                      (piStack00000014,uStack0000001c,uStack00000024,uStack0000002c,uStack00000034);
    fn_82F90680(auStack_40);
  }
  return iVar1;
}

