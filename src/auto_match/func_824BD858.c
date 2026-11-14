extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_8248A9A8();
extern int fn_824BE400();
extern int XMemSet();
extern int iRam831c6308;


unsigned __int64 fn_824BD858(int *param_1)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  unsigned char auStack_b0 [48];
  unsigned char auStack_80 [128];
  
  uVar3 = fn_8248A9A8(param_1 + 0x44);
  if ((*(int *)(*param_1 + 4) == 0) || (*(int *)(*param_1 + 8) != 0)) {
    return 0xffffffffffffffff;
  }
  iVar2 = fn_824BE400(uVar3,param_1);
  if ((iVar2 != 0) && (lVar1 = (**(int (***)())(*(int *)*param_1 + 0x10))(), -1 < lVar1)) {
                    /* WARNING: Subroutine does not return */
    XMemSet(auStack_b0,0,0x28);
  }
  iRam831c6308 = iRam831c6308 + 1;
                    /* WARNING: Subroutine does not return */
  XMemSet(auStack_80,0,0x2c);
}

