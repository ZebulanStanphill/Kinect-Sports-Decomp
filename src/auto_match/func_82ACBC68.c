extern int fn_82AA66A8();
extern int fn_82ACA4F0();
extern int fn_82ACAD38();
extern int fn_82ACB228();
extern int fn_82ACBB48();


unsigned __int64 fn_82ACBC68(int *param_1,unsigned __int64 param_2,char param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  uVar3 = fn_82ACB228(param_1,0,param_2,4);
  if ((int)uVar3 == -1) {
    puVar1 = (unsigned int *)param_1[1];
    if ((~(unsigned int)puVar1 & 1) == 0) {
      uVar3 = 0x1f;
    }
    else {
      uVar3 = ((unsigned __int64)*puVar1 & 0x7ffffff) * 0x20 - 1;
    }
    if ((((uVar3 & 0xffffffff) >> 2) - 1 & 0xffffffff) < 0xff) {
      if ((~(unsigned int)puVar1 & 1) == 0) {
        lVar5 = 0x1f;
      }
      else {
        lVar5 = ((unsigned __int64)*puVar1 & 0x7ffffff) * 0x20 + -1;
      }
      fn_82ACBB48(param_1 + 1,lVar5 + 4);
      uVar3 = fn_82ACB228(param_1,0,param_2,4);
      if ((int)uVar3 != -1) goto LAB_82acbd70;
      if (param_3 != '\0') {
        iVar2 = *param_1;
        if (*(int *)(iVar2 + 0x318) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(iVar2,0xdbe);
        }
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(iVar2,0xded);
      }
    }
    else if (param_3 != '\0') {
      iVar2 = *param_1;
      if (*(int *)(iVar2 + 0x318) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(iVar2,0xdbe);
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(iVar2,0xded);
    }
    uVar3 = 0xffffffffffffffff;
  }
  else {
LAB_82acbd70:
    uVar6 = (uVar3 & 0xffffffff) >> 2 & 0x3ffffffc;
    uVar4 = fn_82ACA4F0(uVar3 & 0xf,param_2);
    fn_82ACAD38(param_1 + 1,uVar6,uVar6 + 3,uVar4);
    uVar3 = uVar3 & 0xfffffff0 | uVar4 & 0xffffffff0000000f;
  }
  return uVar3;
}

