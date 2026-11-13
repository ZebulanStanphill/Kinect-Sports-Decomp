typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE250();
extern int fn_82B16D20();
extern int fn_82B1A538();
extern int fn_82B20A98();
extern int fn_82B476D0();
extern int fn_82B4B410();
extern unsigned int iStack_58;
extern unsigned int uStack_5c;


void fn_82B25038(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  char cVar11;
  unsigned int *puVar9;
  int iVar10;
  unsigned __int64 *puVar12;
  unsigned int *puStack_60;
  unsigned int uStack_5c;
  int iStack_58;
  
  iStack_58 = 0;
  uStack_5c = -(unsigned int)((param_2[1] & 1) == 0) & param_2[1];
  puStack_60 = param_2;
  uVar7 = fn_82B1A538(&puStack_60);
  do {
    if ((uStack_5c == 0) || (bVar6 = false, iStack_58 == *(int *)(uStack_5c + 8))) {
      bVar6 = true;
    }
    if (bVar6) break;
    uVar8 = fn_82B1A538(&puStack_60);
    cVar11 = fn_82B16D20(uVar8,uVar7);
    uVar7 = uVar8;
  } while (cVar11 == '\0');
  if ((uStack_5c == 0) || (bVar6 = false, iStack_58 == *(int *)(uStack_5c + 8))) {
    bVar6 = true;
  }
  if (!bVar6) {
    puVar9 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
    puVar9[1] = (unsigned int)puVar9 | 1;
    *puVar9 = (unsigned int)(puVar9 + 1) | 1;
    fn_82B476D0(puVar9,param_2);
    while ((uStack_5c = puVar9[1], (uStack_5c & 1) == 0 && (uStack_5c != 0))) {
      iStack_58 = 0;
      uStack_5c = -(unsigned int)((uStack_5c & 1) == 0) & uStack_5c;
      puStack_60 = puVar9;
      uVar7 = fn_82B1A538(&puStack_60);
      while( true ) {
        if ((uStack_5c == 0) || (bVar6 = false, iStack_58 == *(int *)(uStack_5c + 8))) {
          bVar6 = true;
        }
        if (bVar6) break;
        uVar8 = fn_82B1A538(&puStack_60);
        cVar11 = fn_82B16D20(uVar8,uVar7);
        if (cVar11 != '\0') {
          uVar7 = uVar8;
        }
      }
      puVar12 = (unsigned __int64 *)uVar7;
      uVar1 = *(unsigned int *)puVar12;
      uVar2 = *(unsigned int *)((int)puVar12 + 4);
      uVar3 = *(unsigned int *)(puVar12 + 1);
      if ((param_2[1] & 1) == 0) {
        uVar5 = *param_2 & 0xfffffffe;
        iVar10 = uVar5 - 4;
        if ((iVar10 == 0) || (*(unsigned int *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82b251f4;
      }
      else {
LAB_82b251f4:
        iVar10 = fn_82B4B410(param_2,1);
      }
      iVar4 = *(int *)(iVar10 + 8) * 0xc + iVar10;
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
      *(unsigned int *)(iVar4 + 0x10) = uVar1;
      *(unsigned int *)(iVar4 + 0x14) = uVar2;
      *(unsigned int *)(iVar4 + 0x18) = uVar3;
      fn_82B20A98(puVar9,*puVar12,(unsigned __int64)*(unsigned int *)(puVar12 + 1) << 0x20);
    }
  }
  return;
}

