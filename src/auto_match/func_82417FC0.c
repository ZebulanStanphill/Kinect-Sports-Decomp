extern unsigned int *auStack_34;
extern unsigned int *auStack_50;
extern unsigned int *auStack_74;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_82417F58();


void fn_82417FC0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned char auStack_90 [28];
  unsigned char auStack_74 [36];
  unsigned char auStack_50 [28];
  unsigned char auStack_34 [36];
  
  if ((((param_1 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(*(int *)param_1 + 0x2b20)) &&
      (iVar1 = fn_82417F58(), iVar1 != 0)) &&
     (iVar1 = fn_82417F58(param_1), *(int *)(iVar1 + 0x24) != 0)) {
    fn_82230110(auStack_90,0xffffffff821b829c);
    fn_82230110(auStack_74,0xffffffff821b8294);
    fn_822C1730(param_2,auStack_90);
    fn_82230300(auStack_74,1,0);
    puVar2 = auStack_90;
  }
  else {
    fn_82230110(auStack_50,0xffffffff821b829c);
    fn_82230110(auStack_34,0xffffffff821b82a8);
    fn_822C1730(param_2,auStack_50);
    fn_82230300(auStack_34,1,0);
    puVar2 = auStack_50;
  }
  fn_82230300(puVar2,1,0);
  return;
}

