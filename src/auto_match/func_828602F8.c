extern int fn_828593A0();
extern int fn_828593C0();
extern int fn_828593D0();
extern int fn_82859760();
extern int fn_8285A808();
extern int fn_8285A830();


unsigned __int64
fn_828602F8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned char cVar3;
  unsigned int uVar2;
  
  fn_8285A808();
  puVar1 = (unsigned int *)fn_8285A830(param_1,param_2);
  cVar3 = fn_828593D0();
  if (cVar3 != '\0') {
    fn_828593C0();
  }
  uVar2 = fn_82859760(param_1,param_2,param_3,param_4);
  *puVar1 = uVar2;
  if (cVar3 != '\0') {
    fn_828593A0();
  }
  return 1;
}

