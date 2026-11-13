extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82864898();
extern int fn_828648F0();
extern int fn_82865100();
extern int fn_82865170();
extern int fn_82865EE0();
extern int fn_82866418();
extern int fn_828685D8();
extern int fn_82873BB8();
extern int fn_82878F88();


unsigned __int64
fn_828741F8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  fn_82230110(auStack_b0,0xffffffff820223b4);
  fn_82230110(auStack_d0,0xffffffff820223c0);
  uVar1 = fn_82865100();
  uVar1 = fn_82865EE0(auStack_90,uVar1,auStack_d0,auStack_b0);
  fn_828648F0(auStack_70,uVar1);
  fn_82230300(auStack_90,1,0);
  fn_82230300(auStack_d0,1,0);
  fn_82230300(auStack_b0,1,0);
  piVar2 = (int *)fn_828685D8();
  uVar1 = (**(int (***)())(*piVar2 + 0x14))(param_1,piVar2,auStack_70,param_4,param_5);
  iVar3 = fn_82878F88(uVar1,param_7,param_8);
  if (iVar3 < 0) {
    fn_82864898(auStack_70);
    uVar1 = 0xffffffffa0120000;
  }
  else {
    iVar3 = fn_82873BB8(param_2,uVar1,param_3);
    if (iVar3 < 0) {
      fn_82865170();
      fn_82866418();
      uVar1 = 0xffffffffa0120000;
    }
    else {
      uVar1 = 0x20120000;
    }
    fn_82864898(auStack_70);
  }
  return uVar1;
}

