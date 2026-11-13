extern int fn_829D36D8();
extern int fn_82A1DDC0();
extern int fn_82F691F0();


unsigned __int64 fn_829D4038(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  
  iVar1 = fn_829D36D8(param_1,*(unsigned int *)(param_2 + 0x1c));
  if (iVar1 == 0) {
    return 0xffffffff800700aa;
  }
  if (*(int *)(param_2 + 0x10) != -2) {
    puVar2 = (unsigned int *)(*(int *)(param_2 + 0x10) * 0x18 + (int)param_1);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0xfe;
    puVar2[5] = 0;
  }
  fn_82A1DDC0(iVar1,param_2,0x58);
  *(unsigned int *)(iVar1 + 0x58) = param_3;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2,0,0x58);
}

