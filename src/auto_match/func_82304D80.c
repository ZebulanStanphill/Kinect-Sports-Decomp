extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB198();


void fn_82304D80(int *param_1)

{
  unsigned char auStack_30 [32];
  
  (*(int (**)())(*param_1 + 0x1c))(param_1);
  fn_82230110(auStack_30,"idleset_default");
  fn_822FB198(*(unsigned int *)(*(int *)(param_1[3] + 0x114) + 0xc0),auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}

