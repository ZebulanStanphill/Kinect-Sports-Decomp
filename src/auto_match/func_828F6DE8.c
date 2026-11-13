extern unsigned int *auStack_50;
extern int fn_8265C940();
extern int fn_828F59D0();
extern int fn_828F6C70();
extern int fn_82930318();
extern int fn_82930940();
extern unsigned int uStack_48;


unsigned __int64 fn_828F6DE8(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned int auStack_50 [2];
  unsigned int uStack_48;
  
  puVar3 = (unsigned int *)fn_8265C940(0x14,0x24810000);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
  }
  if (puVar3 != (unsigned int *)0x0) {
    auStack_50[0] = 2;
    uStack_48 = param_3;
    uVar1 = fn_82930318(0x30);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82930940(uVar1,auStack_50);
    }
    puVar3[2] = iVar4;
    if (iVar4 != 0) {
      uVar2 = fn_828F6C70(param_1,puVar3);
      return uVar2;
    }
    fn_828F59D0(puVar3,1);
  }
  return 0xffffffff8007000e;
}

