extern unsigned int *auStack_10;
extern int fn_82D81240();
extern int fn_82D8B6C8();


void fn_82D8DBD0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char auStack_10 [1];
  
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if ((uVar1 < 1) || (uVar1 == 1)) {
    fn_82D8B6C8(param_2,5,1,0);
  }
  else if ((uVar1 < 3) && (*(unsigned int *)(param_2 + 8) == *(unsigned int *)(param_1 + 0x14))) {
    fn_82D81240(auStack_10,*(int *)(param_1 + 0x14),param_2);
    return;
  }
  return;
}

