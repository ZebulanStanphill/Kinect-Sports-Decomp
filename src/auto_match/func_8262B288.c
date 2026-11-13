extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_8327F94C;
extern unsigned int uRam831c1d2c;
extern unsigned int uRam8327f91c;


void fn_8262B288(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_2;
  *(unsigned int *)(iVar1 + 0x2ed8) = uRam831c1d2c;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
  fn_82631920(iVar1,uRam8327f91c);
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar1,lbl_8327F94C);
}

