#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT41(h,l) ((unsigned __int64)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT51(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT61(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT71(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82230300();
extern int fn_82238148();
extern int fn_822381A8();
extern int fn_8223B688();
extern int fn_8224AB50();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_822376D8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned char param_5,unsigned char param_6,unsigned char param_7,unsigned char param_8)

{
  unsigned __int64 uVar1;
  unsigned char auStack_80 [32];
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned __int64 uStack_58;
  unsigned char auStack_50 [28];
  int (**pcStack_34)();
  int (**pcStack_30)();
  
  uVar1 = fn_8223B688(auStack_80,param_4);
  stack_pair_60.first = (unsigned int)param_2;
  uStack_58 = CONCAT71(CONCAT61(CONCAT51(CONCAT41((unsigned int)CONCAT21(0x101,param_5) << 8,1),param_6),
                                param_7),param_8);
  stack_pair_60.second = param_3;
  fn_8223B688(auStack_50,uVar1);
  pcStack_34 = fn_82238148;
  pcStack_30 = fn_8224AB50;
  fn_82230300(uVar1,1,0);
  fn_822381A8(param_1,param_2,&stack_pair_60.first);
  fn_82230300(auStack_50,1,0);
  return param_1;
}

