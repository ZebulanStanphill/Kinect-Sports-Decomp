extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8258E3A8();


unsigned __int64 fn_822B7900(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int aiStack_50 [4];
  unsigned char auStack_40 [40];
  
  uVar1 = fn_82230110(auStack_40);
  fn_8258E3A8(aiStack_50,param_1 + 8,uVar1);
  fn_82230300(auStack_40,1,0);
  if ((aiStack_50[0] != *(int *)(param_1 + 0xc)) &&
     (*(int *)(aiStack_50[0] + 0x2c) == *(int *)(param_2 + 0x20))) {
    uVar1 = (**(int (***)())(aiStack_50[0] + 0x28))(param_2);
    return uVar1;
  }
  return 0;
}

