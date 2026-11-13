extern int fn_830069B8();
extern int fn_83008158();
extern unsigned int uStack_28;
extern unsigned int uStack_30;


unsigned __int64 fn_83006FF8(int *param_1,unsigned __int64 param_2)

{
  char cVar2;
  int iVar1;
  unsigned __int64 uVar3;
  unsigned __int64 uStack_30;
  unsigned int uStack_28;
  
  (**(int (***)())(*param_1 + 0xd8))();
  uVar3 = 2;
  uStack_28 = uStack_28 | 0x80000000;
  cVar2 = fn_830069B8(param_1);
  if ((cVar2 != '\0') &&
     (iVar1 = fn_83008158((unsigned __int64)(unsigned int)param_1[8] + 0x24,param_2,uStack_30,
                                (unsigned __int64)uStack_28 << 0x20), iVar1 != 0)) {
    uVar3 = 1;
  }
  (**(int (***)())(*param_1 + 0xdc))(param_1);
  return uVar3;
}

