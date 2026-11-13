extern int fn_82A59718();
extern int fn_82A598F0();
extern int fn_82A761A0();
extern int fn_82A81840();
extern unsigned int iStack_28;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82A76968(int param_1)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  
  uVar2 = fn_82A81840();
  if (-1 < (int)uVar2) {
    iVar3 = fn_82A59718(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 0x7c));
    iVar4 = fn_82A598F0(param_1 + 0x10,iVar3);
    if (iVar4 != 0) {
      fn_82A761A0(iVar3);
      *(int *)(param_1 + 0x78) = iVar3;
      uVar6 = (unsigned __int64)*(unsigned short *)(*(int *)(iVar3 + 0x2c) + 0xc);
      trapWord(6,uVar6,0);
      uVar5 = (**(int (***)())(**(int **)(param_1 + 8) + 0x30))
                        (*(int **)(param_1 + 8),*(unsigned int *)(iVar3 + 0x34) / uVar6);
      *(unsigned int *)(param_1 + 0x80) = uVar5;
      iStack_28 = *(int *)(iVar3 + 0x2c);
      if (iStack_28 != 0) {
        uStack_30 = (**(int (***)())(**(int **)(param_1 + 0x84) + 0x1c))();
        uStack_2c = *(unsigned int *)(param_1 + 0x80);
        uVar1 = *(unsigned short *)(*(int *)(iVar3 + 0x2c) + 0xc);
        trapWord(6,(unsigned __int64)uVar1,0);
        uStack_24 = *(unsigned int *)(iVar3 + 0x34) / (unsigned int)uVar1;
        uVar2 = (**(int (***)())(**(int **)(param_1 + 8) + 0x20))
                          (*(int **)(param_1 + 8),1,&iStack_28,1,&uStack_30);
        return uVar2;
      }
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

