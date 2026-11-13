#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_18;
extern int fn_82F72DD0();
extern int fn_82F72F40();
extern int fn_82F73228();
extern int fn_82F73680();
extern int fn_82F75998();
extern unsigned int lbl_82169B90;
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_20;


unsigned __int64 * fn_82F75CD0(unsigned __int64 *param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack_20;
  unsigned char auStack_18 [8];
  
  if ((~lbl_832635D0 & 1) == 0) {
    uVar3 = ZEXT48(lbl_82169B90) + 2;
  }
  else {
    uVar3 = ZEXT48(lbl_82169B90);
  }
  fn_82F72F40(&uStack_20,uVar3);
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F72DD0(&uStack_20,1);
  }
  else {
    lbl_832635C0 = lbl_832635C0 + 1;
    if (cVar1 == '0') {
      fn_82F73680(&uStack_20,0xffffffff8202f48c);
    }
    else if (cVar1 == '2') {
      uVar2 = fn_82F75998(auStack_18);
      fn_82F73228(&uStack_20,uVar2);
    }
    else if (cVar1 == '5') {
      *(unsigned char *)((int)param_1 + 5) = 0;
      *(unsigned char *)((int)param_1 + 4) = 2;
      *(unsigned int *)param_1 = 0;
      return param_1;
    }
  }
  fn_82F73680(&uStack_20,0xffffffff8209a968);
  *param_1 = uStack_20;
  return param_1;
}

