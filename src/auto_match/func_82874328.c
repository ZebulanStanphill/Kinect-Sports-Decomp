extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
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
fn_82874328(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [128];
  
  fn_82230110(auStack_c0,0xffffffff820223c4);
  fn_82230110(auStack_e0,0xffffffff820223cc);
  uVar1 = fn_82865100();
  uVar1 = fn_82865EE0(auStack_a0,uVar1,auStack_e0,auStack_c0);
  fn_828648F0(auStack_80,uVar1);
  fn_82230300(auStack_a0,1,0);
  fn_82230300(auStack_e0,1,0);
  fn_82230300(auStack_c0,1,0);
  piVar2 = (int *)fn_828685D8();
  uVar1 = (**(int (***)())(*piVar2 + 0x18))(piVar2,auStack_80,param_3,param_4,param_5,param_6);
  iVar3 = fn_82878F88(uVar1,param_7,param_8);
  if (iVar3 < 0) {
    fn_82864898(auStack_80);
    uVar1 = 0xffffffffa0120000;
  }
  else {
    iVar3 = fn_82873BB8(param_1,uVar1,param_2);
    if (iVar3 < 0) {
      fn_82865170();
      fn_82866418();
      uVar1 = 0xffffffffa0120000;
    }
    else {
      uVar1 = 0x20120000;
    }
    fn_82864898(auStack_80);
  }
  return uVar1;
}

