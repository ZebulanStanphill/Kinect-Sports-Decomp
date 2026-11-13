extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern int fn_82F691F0();
extern unsigned int uStack_158;


__int64 fn_82E73268(int param_1)

{
  __int64 lVar1;
  unsigned char auStack_160 [8];
  unsigned __int64 uStack_158;
  unsigned char auStack_150 [336];
  
  uStack_158 = 0;
  lVar1 = (**(int (***)())(**(int **)(param_1 + 0x1d8) + 0x28))(*(int **)(param_1 + 0x1d8),auStack_160);
  if ((-1 < lVar1) && ((((unsigned __int64)(uStack_158) >> 16) & 0xFFFF) != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_150,0,0x125);
  }
  return lVar1;
}

