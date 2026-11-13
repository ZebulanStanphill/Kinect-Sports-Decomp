extern unsigned int *auStack_20;
extern int fn_82BE5240();
extern int fn_82BE56B0();
extern int fn_82BF2DC8();
extern int fn_82D7E470();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_83175308;
extern unsigned int lbl_8322B1DC;


unsigned __int64 fn_82BE7790(void)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  unsigned int auStack_20 [4];
  
  uVar3 = 0;
  auStack_20[0] = 0;
  iVar2 = fn_82D7E470(auStack_20);
  if (iVar2 == 0) {
    uVar1 = fn_82BE56B0(0x1c);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar3 = fn_82BF2DC8(uVar1,lbl_83175308,1);
    }
  }
  else {
    uVar1 = fn_82BE56B0(0x1c);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar3 = fn_82BF2DC8(uVar1,auStack_20[0],1);
    }
    (*(int (**)())lbl_831751CC)(auStack_20[0]);
  }
  if (((uVar3 & 0xffffffff) == 0) && (lbl_8322B1DC != 0)) {
    fn_82BE5240(lbl_8322B1DC,0x65,0xffffffff820e99bc);
  }
  return uVar3;
}

