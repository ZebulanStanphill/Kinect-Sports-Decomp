extern int fn_82297D98();
extern int fn_82663538();
extern int fn_82663848();
extern int fn_82663B70();
extern int fn_82663D38();
extern int fn_82663F58();
extern unsigned int iStack00000024;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;


void fn_82663D90(unsigned int *param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar5;
  __int64 lVar3;
  unsigned int uVar6;
  unsigned __int64 uVar4;
  unsigned int *puStack00000014;
  unsigned int uStack0000001c;
  int iStack00000024;
  unsigned int uStack_1c;
  
  uStack_1c = param_2 | 7;
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  iStack00000024 = param_3;
  uVar5 = fn_82663D38(param_1);
  puVar1 = puStack00000014;
  if (uVar5 < uStack_1c) {
    uStack_1c = uStack0000001c;
  }
  else if ((unsigned __int64)uStack_1c / 3 < (unsigned __int64)(unsigned int)puStack00000014[5] / 2) {
    lVar3 = fn_82663D38(puStack00000014);
    if ((lVar3 - (unsigned __int64)(unsigned int)puStack00000014[5] / 2 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar1[5])
    {
      uStack_1c = fn_82663D38(puStack00000014);
    }
    else {
      uStack_1c = puStack00000014[5] + (unsigned int)puStack00000014[5] / 2;
    }
  }
  uVar6 = fn_82663F58(puStack00000014 + 6,(unsigned __int64)uStack_1c + 1,0);
  iVar2 = iStack00000024;
  if (iStack00000024 != 0) {
    uVar4 = fn_82663B70(puStack00000014);
    fn_82297D98(uVar6,uVar4,iVar2);
  }
  fn_82663538(puStack00000014,1,0);
  *puStack00000014 = uVar6;
  puStack00000014[5] = uStack_1c;
  fn_82663848(puStack00000014,iStack00000024);
  return;
}

