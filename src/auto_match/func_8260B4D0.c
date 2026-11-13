extern int fn_827F3C20();
extern int fn_827F40B8();
extern int fn_827FA1E8();
extern int memcpy();


void fn_8260B4D0(int param_1)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  
  fn_827F40B8();
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar4 = fn_827F3C20(param_1);
    iVar6 = fn_827F3C20(param_1);
    uVar1 = *(unsigned short *)(iVar6 + 0x32);
    iVar6 = fn_827F3C20(param_1);
    uVar2 = *(unsigned short *)(iVar6 + 0x2e);
    iVar6 = fn_827F3C20(param_1);
    uVar3 = *(unsigned int *)(iVar6 + 0x84);
    uVar5 = fn_827FA1E8(uVar4);
    memcpy((unsigned __int64)uVar3 + ((unsigned __int64)uVar2 + (unsigned __int64)uVar1 * 0xc) * 4,
                 *(unsigned int *)(param_1 + 0xbc),(uVar5 & 0x3fffffff) << 2);
  }
  return;
}

