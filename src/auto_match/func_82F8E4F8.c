extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_82CE2220();
extern int memset();
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F90B28();
extern int fn_82F93910();
extern int fn_82F93988();
extern unsigned int iStack00000014;
extern unsigned int uStack_18;


unsigned int fn_82F8E4F8(int param_1)

{
  char cVar2;
  unsigned int uVar1;
  int iStack00000014;
  unsigned char auStack_40 [12];
  unsigned int auStack_34 [3];
  unsigned int uStack_18;
  
  iStack00000014 = param_1;
  fn_82F90628(auStack_40,param_1 + 0xc);
  if (*(int *)(iStack00000014 + 0x98) != 0) {
    fn_82F93988(*(unsigned int *)(iStack00000014 + 0x98));
    *(unsigned int *)(iStack00000014 + 0x98) = 0;
  }
  *(unsigned int *)(iStack00000014 + 0x74) = 0;
  cVar2 = fn_82F90B28(iStack00000014);
  if (cVar2 == '\0') {
    fn_82F90680(auStack_40);
    uStack_18 = 0x8054002c;
  }
  else {
    uStack_18 = fn_82CE2220(0,10,auStack_34,iStack00000014 + 0x94);
    if (uStack_18 == 0) {
      uVar1 = fn_82F93910(auStack_34[0]);
      *(unsigned int *)(iStack00000014 + 0x98) = uVar1;
      if (*(int *)(iStack00000014 + 0x98) != 0) {
                    /* WARNING: Subroutine does not return */
        memset(iStack00000014 + 0x78,0,0x1c);
      }
      fn_82F90680(auStack_40);
      uStack_18 = 0x8007000e;
    }
    else {
      (**(int (***)())(*(int *)(iStack00000014 + 8) + 0x1c))
                (iStack00000014 + 8,uStack_18,0xffffffff8216b828);
      if (0 < (int)uStack_18) {
        uStack_18 = uStack_18 & 0xffff | 0x80070000;
      }
      fn_82F90680(auStack_40);
    }
  }
  return uStack_18;
}

