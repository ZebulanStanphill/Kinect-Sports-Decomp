extern unsigned int *auStack_10f;
extern int fn_82654018();
extern int memset();
extern unsigned int lbl_83282408;


unsigned __int64 fn_826543B0(int param_1)

{
  unsigned __int64 in_r0;
  unsigned __int64 uVar1;
  unsigned char auStack_10f [239];
  
  DbgPrint(0xffffffff821cd6f0);
  fn_82654018(param_1,*(unsigned int *)(param_1 + 0x3548));
  if (*(int *)(param_1 + 0x3548) == 0) {
    DbgPrint(0xffffffff821cd740);
    DbgPrint(0xffffffff821cd820);
    trapWord(0x1f,in_r0,0x16);
    uVar1 = 1;
  }
  else {
    if (lbl_83282408 == 0) {
      *(unsigned char *)(param_1 + 0x2abd) = *(unsigned char *)(param_1 + 0x2abd) | 3;
      **(int **)(param_1 + 0x2a90) = *(int *)(param_1 + 0x2a9c) + -2;
      *(unsigned int *)(param_1 + 0x2b04) = 0;
                    /* WARNING: Subroutine does not return */
      memset(auStack_10f,0,0xff);
    }
    uVar1 = 0;
  }
  return uVar1;
}

