extern unsigned int *auStack_50;
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_826809F0();
extern int memcpy();


void fn_827B5D20(int param_1,int param_2,__int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int auStack_50;
  
  iVar1 = *(int *)(param_1 + 0x2d0);
  if (((iVar1 == 0) || ((unsigned __int64)*(unsigned int *)(iVar1 + 0xc) < (param_5 & 0xffffffff))) ||
     ((unsigned __int64)*(unsigned int *)(iVar1 + 0x10) < (param_6 & 0xffffffff))) {
    auStack_50 = 3;
    uVar2 = fn_8267BED0(param_1,0x30,&auStack_50);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_826809F0(uVar2,9,param_5 + 0x10,param_6 + 0x10);
    }
    if (*(int *)(param_1 + 0x2d0) != 0) {
      fn_8267C498();
    }
    *(unsigned int *)(param_1 + 0x2d0) = uVar3;
  }
  uVar4 = 0;
  if ((param_6 & 0xffffffff) != 0) {
    do {
      memcpy((__int64)*(int *)(*(int *)(param_1 + 0x2d0) + 0x14) * (__int64)(int)uVar4 +
                   (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x2d0) + 0x18),
                   (__int64)(int)(uVar4 + param_4) * (__int64)*(int *)(param_2 + 0x14) +
                   (unsigned __int64)*(unsigned int *)(param_2 + 0x18) + param_3,param_5);
      uVar4 = uVar4 + 1;
    } while ((unsigned __int64)uVar4 < (param_6 & 0xffffffff));
  }
  return;
}

