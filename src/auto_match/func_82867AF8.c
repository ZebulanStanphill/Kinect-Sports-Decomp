extern unsigned int *auStack_100;
extern unsigned int *auStack_40;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82868378();
extern int fn_82869A90();
extern int fn_8286ACE0();
extern int fn_8286B510();
extern int fn_8286DA10();
extern unsigned int uStack_dc;


unsigned __int64 fn_82867AF8(__int64 param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  char ****ppppcVar5;
  char ****ppppcVar6;
  unsigned char auStack_100 [16];
  char ***apppcStack_f0 [5];
  unsigned int uStack_dc;
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [1];
  unsigned char auStack_6c [44];
  unsigned char auStack_40 [64];
  
  fn_828648B8(auStack_b0);
  fn_8223B688(apppcStack_f0,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  ppppcVar6 = (char ****)apppcStack_f0[0];
  if (uStack_dc < 0x10) {
    ppppcVar6 = apppcStack_f0;
  }
  uVar2 = fn_82869A90(param_1 + 100,ppppcVar6,auStack_100);
  if (((int)uVar2 == 1) || ((int)uVar2 == 0x16)) {
    uVar2 = fn_8286ACE0(auStack_70,auStack_100,param_2);
    fn_8286B510(auStack_100,param_1 + 0x4b4,uVar2);
    fn_82864898(auStack_6c);
    uVar2 = 0x200a0000;
  }
  else {
    ppppcVar6 = (char ****)apppcStack_f0[0];
    if (uStack_dc < 0x10) {
      ppppcVar6 = apppcStack_f0;
    }
    uVar3 = fn_82230110(auStack_90,0xffffffff82020e54);
    ppppcVar5 = ppppcVar6;
    do {
      cVar1 = *(char *)ppppcVar5;
      ppppcVar5 = (char ****)((int)ppppcVar5 + 1);
    } while (cVar1 != '\0');
    uVar3 = fn_8223DFF0(uVar3,ppppcVar6,(char *)((int)ppppcVar5 + (-1 - (int)ppppcVar6)));
    uVar3 = fn_8223DFF0(uVar3,0xffffffff82020e50,2);
    fn_82240378(auStack_d0,uVar3);
    fn_82230300(auStack_90,1,0);
    uVar3 = fn_8223B688(auStack_40,auStack_d0);
    uVar4 = fn_82868378();
    fn_8286DA10(uVar4,uVar3,uVar2);
    fn_82230300(auStack_d0,1,0);
    uVar2 = 0xffffffffa00a0000;
  }
  fn_82230300(apppcStack_f0,1,0);
  return uVar2;
}

