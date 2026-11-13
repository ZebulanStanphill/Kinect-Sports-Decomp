extern unsigned int *auStack_2c;
extern int fn_82A2BAF0();
extern int fn_82A2DC18();
extern unsigned int iStack_30;


unsigned __int64 fn_82A2EBA0(int param_1,unsigned __int64 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  int iStack_30;
  unsigned char auStack_2c [44];
  
  iVar3 = fn_82A2BAF0(param_1,param_2,1,&iStack_30,auStack_2c);
  if ((iVar3 == 0) &&
     ((param_3 == 0 || (iVar3 = fn_82A2DC18(param_1,param_2,0,&iStack_30), iVar3 < 0)))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = param_2 + ((param_2 & 0xffffffff) / 0xaa) * -0xaa;
    iVar3 = 0;
    while ((uVar2 = (unsigned __int64)*(unsigned int *)((int)uVar2 * 0x18 + iStack_30 + 0x14) & 0xffffff,
           uVar2 != 0xffffff && (uVar2 / 0xaa == (param_2 & 0xffffffff) / 0xaa))) {
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 % 0xaa;
    }
    uVar4 = iStack_30 - *(int *)(param_1 + 0x34);
    iVar1 = (((int)uVar4 >> 0xc) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
  }
  return uVar2;
}

