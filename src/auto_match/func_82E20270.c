extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_8265CA20();
extern int fn_82E20100();
extern int fn_82F674A8();
extern int fn_82F68150();
extern int fn_82F68240();
extern int fn_82F6FE10();
extern unsigned int lbl_8323FDF0;


unsigned __int64 fn_82E20270(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar2;
  unsigned int auStack_140 [4];
  unsigned char auStack_130 [304];
  
  if ((param_1 & 0xffffffff) != 0) {
    uVar1 = fn_82E20100(param_1,param_3);
    auStack_140[0] = 0;
    iVar3 = fn_82F674A8(auStack_140,uVar1,param_2);
    if (iVar3 != 0) {
      auStack_140[0] = 0;
      puVar4 = (unsigned int *)fn_82F68240();
      fn_82F68150(auStack_130,0x100,*puVar4);
    }
    if ((((auStack_140[0] == 0) && ((param_3 & 0xff) != 0)) &&
        (iVar3 = thunk_FUN_82a2b798(), iVar3 == 3)) &&
       (iVar3 = fn_82F6FE10(lbl_8323FDF0), iVar3 == 0)) {
      lVar2 = fn_82F674A8(auStack_140,uVar1,param_2);
      auStack_140[0] = -(unsigned int)(lVar2 == 0) & auStack_140[0];
    }
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8265CA20(uVar1);
    }
    param_1 = (unsigned __int64)auStack_140[0];
  }
  return param_1;
}

