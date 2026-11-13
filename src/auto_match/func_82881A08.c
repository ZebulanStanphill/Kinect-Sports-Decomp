extern int fn_8289F160();
extern int fn_828EA790();
extern unsigned int iStack_30;
extern unsigned int lbl_83212A04;
extern unsigned int uRam831599f8;
extern unsigned int uRam83212a10;
extern unsigned int uRam83212a14;


unsigned __int64 fn_82881A08(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iStack_30;
  int aiStack_2c;
  
  if ((uRam83212a14 & 1) == 0) {
    uRam83212a14 = uRam83212a14 | 1;
    uVar5 = 0x7fffffff;
    uRam83212a10 = 0x7fffffff;
  }
  else {
    uVar5 = (unsigned __int64)uRam83212a10;
  }
  uVar6 = -(unsigned __int64)(uVar5 != (unsigned __int64)uRam831599f8 + 1) & (unsigned __int64)uRam831599f8 + 1;
  aiStack_2c = (int)uVar6;
  fn_8289F160(&iStack_30,0xffffffff83212a00,&aiStack_2c);
  iVar2 = lbl_83212A04;
  iVar3 = (int)uVar6;
  if (iStack_30 != lbl_83212A04) {
    fn_828EA790(&iStack_30);
    while (iStack_30 != iVar2) {
      uVar1 = *(unsigned int *)(iStack_30 + 0xc);
      uVar4 = uVar6 + 1;
      if ((uVar4 & 0xffffffff) < (unsigned __int64)uVar1) {
        if ((int)uVar4 != -1) {
          uRam831599f8 = (int)uVar4;
          return uVar4;
        }
        break;
      }
      fn_828EA790(&iStack_30);
      uVar6 = (unsigned __int64)uVar1;
    }
    if ((int)uVar6 == (int)uVar5) {
      uVar6 = 0xffffffffffffffff;
      uRam831599f8 = -1;
      iVar3 = uRam831599f8;
    }
    else {
      uVar6 = uVar6 + 1;
      iVar3 = (int)uVar6;
    }
  }
  uRam831599f8 = iVar3;
  return uVar6;
}

