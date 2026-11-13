extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED2F8();
extern int fn_82CED628();


void fn_82E148C0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)(param_1 + 0x10);
  iVar2 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0x14) == (*(unsigned int *)(param_1 + 0x18) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),puVar4,8);
  }
  lVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) & 0x1fffffff) * 8 + (unsigned __int64)*puVar4;
  if (lVar3 != 0) {
    fn_82CED2F8(lVar3);
    fn_82CED2F8(lVar3 + 4);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0x14) = uVar1 + 1;
                    /* WARNING: Subroutine does not return */
  fn_82CED628(((unsigned __int64)uVar1 & 0x1fffffff) * 8 + (unsigned __int64)*puVar4,param_2);
}

