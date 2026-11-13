extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB198();
extern int fn_8236C6A0();


void fn_8230C590(int param_1)

{
  unsigned char auStack_30 [32];
  
  fn_82230110(auStack_30,"idleset_default");
  fn_822FB198(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_30);
  fn_82230300(auStack_30,1,0);
  fn_8236C6A0(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0xc));
  return;
}

