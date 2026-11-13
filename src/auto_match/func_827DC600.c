extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_827DC918();
extern int fn_827DE048();
extern int fn_827E0DD8();
extern int fn_82F691F0();


void fn_827DC600(unsigned int *param_1,int *param_2,unsigned int param_3)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int *puStack00000014;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [64];
  
  puStack00000014 = param_1;
  uVar2 = (**(int (***)())(*param_2 + 0x10))(param_2);
  *param_1 = uVar2;
  uVar1 = fn_827DE048(auStack_60);
  fn_827DC918(param_1 + 1,uVar1);
  uVar1 = fn_827DE048(auStack_40);
  fn_827DC918(param_1 + 0xb,uVar1);
  param_1[0x2d6] = param_3;
  uVar1 = fn_827DE048(auStack_60);
  fn_827E0DD8(param_1 + 0x2d7,auStack_70,uVar1);
  uVar1 = fn_827DE048(auStack_40);
  fn_827DC918(param_1 + 0x2f5,uVar1);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x15,0,0xa00);
}

