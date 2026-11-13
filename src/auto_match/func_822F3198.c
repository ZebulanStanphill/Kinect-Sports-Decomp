extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822F24E8();
extern int fn_822F32E0();
extern int fn_82397F88();


void fn_822F3198(int param_1)

{
  int iVar1;
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [32];
  
  fn_822F24E8();
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) ||
     (iVar1 = fn_82397F88(*(unsigned int *)(param_1 + 0x10)), iVar1 != 0)) {
    fn_822F32E0(param_1);
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    fn_82230110(auStack_50,"idle_crouched");
    fn_822E5340(*(unsigned int *)(param_1 + 0xc),auStack_50);
    fn_82230300(auStack_50,1,0);
    fn_82230110(auStack_30,"locomotion_crouched");
    fn_822E53F8(*(unsigned int *)(param_1 + 0xc),auStack_30);
    fn_82230300(auStack_30,1,0);
  }
  return;
}

