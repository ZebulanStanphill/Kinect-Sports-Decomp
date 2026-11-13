extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_824CD610();
extern int fn_82897B40();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_824D4BF0(int param_1)

{
  unsigned int uVar1;
  int *a;
  int *b;
  unsigned char auStack_70 [28];
  unsigned char auStack_50 [28];
  
  fn_824CD610(param_1);
  fn_82230110(auStack_70,"Player Id");
  a=(int *)(param_1+0x99c);
  *(unsigned int *)(a + 3) = 0;
  *(unsigned int *)(a + 24) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x9f4) = 1;
  *(unsigned int *)(a + 23) = 0;
  uVar1 = fn_828EA268(0xffffffff);
  *(unsigned int *)(param_1 + 0xa00) = uVar1;
  fn_82897DF8(a,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82897B40(a);
  fn_82230110(auStack_50,"Team Id");
  b=(int *)(param_1+0xa04);
  *(unsigned int *)(b + 24) = 0xffffffff;
  *(unsigned int *)(b + 3) = 0;
  *(unsigned char *)(param_1 + 0xa5c) = 1;
  *(unsigned int *)(b + 23) = 0;
  uVar1 = fn_828EA268(0xffffffff);
  *(unsigned int *)(param_1 + 0xa68) = uVar1;
  fn_82897DF8(b,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  fn_82897B40(b);
  return;
}

