extern int fn_82A3AAB8();
extern int fn_82A3D828();


void fn_82A3B710(int param_1)

{
  int iVar1;
  
  fn_82A3D828(param_1,8,param_1 + 0x42de,param_1 + 0x430e,param_1 + 0x42fe,1);
  iVar1 = 0;
  do {
    fn_82A3AAB8(param_1,3,*(unsigned char *)(param_1 + 0x430e + iVar1));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

