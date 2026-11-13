extern int fn_82A1E108();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


int fn_82F8DDF0(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  int *piStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  
  piStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  while (((iVar1 = (**(int (***)())(*piStack00000014 + 8))(piStack00000014), -1 < iVar1 &&
          (iVar1 = (**(int (***)())(*piStack00000014 + 0xc))
                             (piStack00000014,0,uStack0000001c,uStack00000024,uStack0000002c,0),
          -1 < iVar1)) && (iVar1 == 0x540002))) {
    fn_82A1E108(0x32);
  }
  return iVar1;
}

