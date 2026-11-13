extern int fn_8265C990();
extern int fn_829648E8();
extern unsigned int lbl_820387AC;


void fn_82968E90(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = &lbl_820387AC;
  fn_8265C990(param_1[0x34],0x24810000);
  puVar1 = (unsigned int *)param_1[0x39];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  fn_829648E8(param_1);
  return;
}

