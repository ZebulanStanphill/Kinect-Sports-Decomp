extern int fn_82CF0460();


void fn_82CF04C8(unsigned int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 1000;
  do {
    iVar1 = (int)param_1 / (int)uVar5;
    uVar2 = iVar1 / 10 + (iVar1 >> 0x1f);
    uVar3 = uVar5 & ~((((unsigned __int64)param_1 & 0x7fffffff) << 1 | (unsigned __int64)(param_1 >> 0x1f)) - 1);
    uVar4 = (__int64)(int)uVar2 + (unsigned __int64)(uVar2 >> 0x1f);
    trapWord(6,uVar5,0);
    trapWord(5,uVar3,0xffff);
    fn_82CF0460((__int64)iVar1 + (uVar4 + (uVar4 & 0x3fffffff) * 4 & 0x7fffffff) * -2,param_2,
                  param_3,uVar3);
    iVar1 = (int)uVar5 / 10;
    uVar5 = (unsigned __int64)iVar1;
    param_3 = param_3 + 0x1c;
  } while (0 < iVar1);
  return;
}

