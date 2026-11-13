extern int fn_82865170();
extern int fn_82866418();
extern int fn_828684F8();
extern int fn_82870B98();
extern int fn_82870BA0();


/* WARNING: Removing unreachable block (ram,0x8286be48) */

unsigned __int64 fn_8286BDF8(unsigned int *param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = (**(int (***)())*param_1)();
  if (iVar2 < 0) {
    fn_82865170();
    fn_82866418();
    uVar1 = 0xffffffffa00f0000;
  }
  else {
    uVar1 = fn_828684F8();
    fn_82870B98(uVar1,0);
    fn_82870BA0(0,0);
    uVar1 = fn_828684F8();
    fn_82870B98(uVar1,0);
    uVar1 = 0x200f0000;
  }
  return uVar1;
}

