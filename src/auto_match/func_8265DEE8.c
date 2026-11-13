extern int fn_822300F0();
extern int fn_8265D8A0();
extern int fn_8265DAB8();
extern int fn_8265DDA0();
extern int fn_8265E0B0();
extern int fn_82663D38();
extern unsigned int iStack00000024;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;


void fn_8265DEE8(unsigned int *param_1,unsigned int param_2,int param_3)

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
  
  uStack_1c = param_2 | 0xf;
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
  uVar6 = fn_8265E0B0(puStack00000014 + 6,(unsigned __int64)uStack_1c + 1,0);
  iVar2 = iStack00000024;
  if (iStack00000024 != 0) {
    uVar4 = fn_8265DDA0(puStack00000014);
    fn_822300F0(uVar6,uVar4,iVar2);
  }
  fn_8265D8A0(puStack00000014,1,0);
  *puStack00000014 = uVar6;
  puStack00000014[5] = uStack_1c;
  fn_8265DAB8(puStack00000014,iStack00000024);
  return;
}

