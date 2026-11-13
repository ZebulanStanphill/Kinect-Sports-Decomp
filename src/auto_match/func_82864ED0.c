extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822BD338();
extern int fn_82865100();
extern int fn_82865EE0();


unsigned __int64
fn_82864ED0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  cVar2 = fn_822BD338(param_3,0xffffffff8201f9f0);
  if (cVar2 == '\0') {
    uVar1 = fn_82865100();
    fn_82865EE0(param_1,uVar1,param_3,param_4);
  }
  else {
    fn_82230110(auStack_50,0xffffffff8201f9f4);
    fn_82230110(auStack_70,0xffffffff8201f9fc);
    uVar1 = fn_82865100();
    fn_82865EE0(param_1,uVar1,auStack_70,auStack_50);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_50,1,0);
  }
  return param_1;
}

