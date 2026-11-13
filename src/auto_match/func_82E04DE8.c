extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82CED2F8();
extern int fn_82CED5B8();
extern int fn_82CED628();
extern int fn_82E04B20();


unsigned __int64 fn_82E04DE8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned char auStack_30 [4];
  unsigned char auStack_2c [1];
  
  iVar2 = fn_82E04B20();
  if ((param_3 & 0xffffffff) == 0) {
    if (iVar2 == -1) {
      uVar1 = 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) + iVar2 * 8;
      fn_82CED5B8(iVar3 + 4);
      fn_82CED5B8(iVar3);
      iVar3 = *(int *)(param_1 + 0xc) + -1;
      *(int *)(param_1 + 0xc) = iVar3;
      if (iVar3 == iVar2) {
        uVar1 = 0;
      }
      else {
        puVar4 = (unsigned int *)(*(int *)(param_1 + 8) + iVar2 * 8);
        iVar2 = (iVar3 * 8 + *(int *)(param_1 + 8)) - (int)puVar4;
        lVar5 = 2;
        do {
          *puVar4 = *(unsigned int *)(iVar2 + (int)puVar4);
          puVar4 = puVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  if (iVar2 != -1) {
                    /* WARNING: Subroutine does not return */
    fn_82CED628(iVar2 * 8 + *(int *)(param_1 + 8) + 4,param_3);
  }
  fn_82CED2F8(auStack_30);
  fn_82CED2F8(auStack_2c);
                    /* WARNING: Subroutine does not return */
  fn_82CED628(auStack_30,param_2);
}

