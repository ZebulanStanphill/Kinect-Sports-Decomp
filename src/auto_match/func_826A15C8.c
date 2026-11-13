extern unsigned int *auStack_50;
extern int fn_8267BED0();
extern int fn_8269D958();
extern int fn_8269D9C0();
extern int fn_8269EC08();
extern int fn_826A0F98();
extern unsigned int iStack_38;
extern unsigned int uStack_34;


void fn_826A15C8(__int64 param_1,int *param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int auStack_50 [4];
  int *piStack_40;
  unsigned int *puStack_3c;
  int iStack_38;
  unsigned int uStack_34;
  
  piStack_40 = (int *)*param_2;
  if ((piStack_40 == (int *)0x40) || (piStack_40 == (int *)0x80)) {
    puStack_3c = (unsigned int *)0x0;
    iStack_38 = 0xff;
    uStack_34 = ((((unsigned __int64)(uStack_34)) & (~(((unsigned __int64)0xFFFFFF) << 8))) | ((((unsigned __int64)((((unsigned __int64)(uStack_34) >> 8) & 0xFFFFFF) & 0xffff)) & ((unsigned __int64)0xFFFFFF)) << 8));
    uStack_34 = (unsigned int)(((unsigned __int64)(uStack_34) >> 8) & 0xFFFFFF);
  }
  else {
    puStack_3c = (unsigned int *)param_2[1];
    iStack_38 = param_2[2];
    uStack_34 = param_2[3];
  }
  lVar4 = param_1 + 0x88;
  lVar1 = fn_8269D9C0(lVar4,&piStack_40);
  uVar2 = -(unsigned __int64)(lVar1 != 0) & lVar1 + 0x10U;
  if (uVar2 == 0) {
    auStack_50[0] = 0x143;
    puVar3 = (unsigned int *)fn_8267BED0(param_1,0xc,auStack_50);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    fn_8269D958(puVar3,param_3);
    piStack_40 = param_2;
    puStack_3c = puVar3;
    fn_826A0F98(lVar4,lVar4,&piStack_40);
    if (puVar3 != (unsigned int *)0x0) {
      fn_8269EC08(puVar3,1);
    }
  }
  else {
    fn_8269D958(uVar2,param_3);
  }
  return;
}

