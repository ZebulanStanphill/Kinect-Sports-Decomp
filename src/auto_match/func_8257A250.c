extern unsigned int *auStack_220;
extern int fn_82579C28();
extern int fn_8257A320();
extern int fn_8257A660();
extern int fn_82A1F308();
extern int fn_82A1F438();
extern unsigned int iStack_230;


extern int fn_82A1F470();

unsigned int fn_8257A250(int param_1,int param_2)

{
  int uVar1;
  int iVar3;
  unsigned int uVar2;
  unsigned int iStack_230;
  unsigned int aiStack_22c;
  unsigned char auStack_220 [520];
  
  fn_82579C28();
  uVar1 = fn_82A1F308(0);
  iVar3 = fn_82A1F438(uVar1,param_2,&aiStack_22c,&iStack_230);
  if (iVar3 == 0) {
    uVar2 = fn_82A1F470();
    if (0 < (int)uVar2) {
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
  }
  else if ((aiStack_22c == 0) || (iStack_230 == 0)) {
    uVar2 = 0x80070057;
  }
  else {
    do {
      uVar2 = fn_8257A320(&aiStack_22c,&iStack_230,auStack_220);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = fn_8257A660(param_1,auStack_220);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    } while (iStack_230 != 0);
  }
  return uVar2;
}

