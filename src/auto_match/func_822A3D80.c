extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8243E0D8();
extern int fn_82526C70();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_826728E8();


void fn_822A3D80(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned char auStack_50 [80];
  
  if (*(int *)(*param_1 + 0x28) != 0) {
    lVar4 = 0;
    do {
      lVar4 = lVar4 + 1;
      fn_82526C70(auStack_50,0x20,0xffffffff821a87dc,lVar4);
      uVar1 = *(unsigned int *)(*param_1 + 0x28);
      uVar3 = fn_8266F6B8();
      fn_826728E8(uVar1,auStack_50,uVar3);
    } while ((int)lVar4 < 8);
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    fn_8243E0D8(iVar2 + 0xa0);
    iVar5 = iVar2 + 0xa0;
    lVar4 = 2;
    do {
      iVar5 = iVar5 + -0x18;
      fn_8243E0D8(iVar5);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar2);
  }
  return;
}

