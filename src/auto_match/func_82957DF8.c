extern unsigned int *auStack_130;
extern int fn_82969030();
extern int fn_8296D430();
extern int fn_82F691F0();


unsigned __int64 fn_82957DF8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_130 [272];
  
  if ((*(unsigned int *)(param_1 + 0xcc) & 4) == 0) {
    uVar1 = fn_82969030(param_1);
    if ((-1 < (int)uVar1) && (uVar1 = fn_8296D430(param_1), -1 < (int)uVar1)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_130,0,100);
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

