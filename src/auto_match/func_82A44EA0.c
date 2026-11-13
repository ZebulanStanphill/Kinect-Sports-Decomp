extern unsigned int *auStack_4c;
extern int fn_82A443F0();
extern int fn_82F691F0();


void fn_82A44EA0(int param_1)

{
  unsigned char auStack_4c [76];
  
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  fn_82A443F0(param_1);
  KeGetCurrentProcessType();
  if (*(short *)(param_1 + 0xd8) == 2) {
    trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x40),0);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_4c,0,0x24);
}

