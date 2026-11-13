extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82868378();
extern int fn_8286DA10();
extern int fn_82FE7D88();


unsigned __int64 fn_828670E0(void)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  uVar1 = fn_82FE7D88();
  if ((int)uVar1 == 1) {
    uVar1 = 0x200a0000;
  }
  else {
    fn_82230110(auStack_60,0xffffffff82020d80);
    uVar2 = fn_8223B688(auStack_40,auStack_60);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_60,1,0);
    uVar1 = 0xffffffffa00a0000;
  }
  return uVar1;
}

