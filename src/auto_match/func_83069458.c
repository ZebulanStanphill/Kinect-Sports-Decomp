extern unsigned int *auStack_70;
extern int fn_82F691F0();
extern int fn_830604F0();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_830635A0();
extern int fn_83065B90();


unsigned __int64
fn_83069458(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_70 [112];
  
  fn_83061508(auStack_70);
  fn_830635A0(param_1,param_3,auStack_70,param_5,param_6);
  iVar2 = fn_830604F0(auStack_70);
  if (0 < iVar2) {
    uVar1 = fn_83065B90(*param_2 << 2);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,*param_2 << 2);
  }
  fn_83061F30(auStack_70);
  return 0xffffffffffffffff;
}

