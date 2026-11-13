extern unsigned int *auStack_620;
extern int fn_8264DA70();
extern int fn_8264DB08();
extern int fn_8264DC48();
extern int fn_8264DD40();


void fn_82647E90(unsigned __int64 param_1,int param_2,unsigned char *param_3)

{
  unsigned __int64 uVar1;
  short sVar2;
  unsigned __int64 uVar3;
  short *psVar4;
  __int64 lVar5;
  unsigned char auStack_620 [1022];
  short asStack_222 [273];
  
  if (param_3 == (unsigned char *)0x0) {
    uVar3 = 0;
    psVar4 = asStack_222;
    if (param_2 == 0x28280136) {
      lVar5 = 0x80;
      do {
        sVar2 = (short)((uVar3 & 0xffffffff) / 0x7f);
        uVar3 = uVar3 + 0xffff;
        psVar4[-0x1ff] = sVar2;
        psVar4[-0xff] = sVar2;
        psVar4[1] = sVar2;
        sVar2 = (short)((uVar3 & 0xffffffff) / 0x7f) - sVar2;
        psVar4[-0x1fe] = sVar2;
        psVar4[-0xfe] = sVar2;
        psVar4 = psVar4 + 2;
        *psVar4 = sVar2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      fn_8264DB08(auStack_620,auStack_620,0);
      param_3 = auStack_620;
      goto LAB_82647f68;
    }
    lVar5 = 0x100;
    do {
      uVar1 = uVar3 & 0xffffffff;
      uVar3 = uVar3 + 0x3ff;
      sVar2 = (short)(uVar1 / 0xff << 6);
      psVar4[-0x1ff] = sVar2;
      psVar4[-0xff] = sVar2;
      psVar4 = psVar4 + 1;
      *psVar4 = sVar2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_8264DA70(auStack_620,auStack_620,0);
    param_3 = auStack_620;
  }
  if (param_2 != 0x28280136) {
    fn_8264DC48(param_1,param_3);
    return;
  }
LAB_82647f68:
  fn_8264DD40(param_1,param_3);
  return;
}

