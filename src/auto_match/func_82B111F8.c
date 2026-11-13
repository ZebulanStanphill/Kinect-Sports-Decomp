typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD1B28();
extern int fn_82AE93B0();
extern int fn_82B10EA8();
extern int fn_82B89810();


bool fn_82B111F8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  bool bVar1;
  char cVar3;
  int iVar2;
  unsigned int uVar4;
  bool bVar5;
  unsigned int uVar6;
  
  bVar5 = false;
  if ((*param_4 & 0x10) == 0) {
    uVar6 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
    uVar4 = *(unsigned int *)(param_4[3] + 8) >> 7 & 0x7f;
    if ((uVar4 == 0x7d) || (bVar1 = false, uVar4 == 0x7c)) {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar6 = *(unsigned int *)(param_2 + 0x1c);
    }
    if (*(unsigned int *)(param_2 + 0x1c) == uVar6) {
      uVar4 = param_2 & 0xfffffffc;
    }
    else {
      uVar4 = uVar6 + 0x18 & 0xfffffffe | 2;
    }
    cVar3 = fn_82B89810(param_1,uVar6,uVar4,param_4);
    uVar4 = param_4[3];
    if (cVar3 == '\0') {
      fn_82AD1B28(uVar4);
      fn_82AE93B0(uVar4);
      *(unsigned int *)(uVar4 + 8) = *(unsigned int *)(uVar4 + 8) | 0x1000000;
    }
    if (*(unsigned int *)(param_2 + 0x1c) != uVar6) {
      iVar2 = fn_82B10EA8(param_1,param_4,1);
      bVar5 = (*(unsigned int *)(iVar2 + 8) & 0x3f80) == 0x3700;
    }
  }
  else {
    cVar3 = fn_82B89810(param_1,*(unsigned int *)(param_2 + 0x1c),param_2 & 0xfffffffc);
    if (cVar3 == '\0') {
      uVar6 = param_4[3];
      fn_82AD1B28(uVar6);
      fn_82AE93B0(uVar6);
      *(unsigned int *)(uVar6 + 8) = *(unsigned int *)(uVar6 + 8) | 0x1000000;
    }
  }
  return bVar5;
}

