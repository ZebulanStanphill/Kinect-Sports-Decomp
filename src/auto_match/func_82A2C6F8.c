typedef unsigned char bool;
extern unsigned int *auStack_1c;
extern int fn_82A2BAF0();
extern unsigned int iStack_20;


bool fn_82A2C6F8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iStack_20;
  unsigned char auStack_1c [1];
  
  iVar2 = fn_82A2BAF0(param_1,param_2,1,&iStack_20,auStack_1c);
  if (iVar2 != 0) {
    uVar3 = iStack_20 - *(int *)(param_1 + 0x34);
    iVar1 = (((int)uVar3 >> 0xc) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
  }
  return iVar2 != 0;
}

