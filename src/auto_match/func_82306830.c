extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB198();


void fn_82306830(int param_1)

{
  unsigned char auStack_30 [32];
  
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x200) = 1;
  fn_82230110(auStack_30,"idleset_default");
  fn_822FB198(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}

