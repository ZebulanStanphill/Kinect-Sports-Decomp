extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82336760();
extern int fn_82865FA8();
extern int fn_82F64020();


unsigned __int64 fn_82865EE0(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  *param_2 = *param_2 + 1;
  fn_82F64020(auStack_a0,9,0xffffffff8201fbec);
  uVar1 = fn_82230110(auStack_50,auStack_a0);
  uVar2 = fn_82230110(auStack_70,0xffffffff8201fbf4);
  uVar3 = fn_82865FA8(auStack_90,param_3,param_4);
  uVar2 = fn_82336760(uVar3,uVar2);
  uVar1 = fn_82336760(uVar2,uVar1);
  fn_82240378(param_1,uVar1);
  fn_82230300(auStack_90,1,0);
  fn_82230300(auStack_70,1,0);
  fn_82230300(auStack_50,1,0);
  return param_1;
}

