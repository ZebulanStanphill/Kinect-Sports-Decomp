#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_822C6B30();
extern int fn_822C6D68();
extern int fn_822CA5B0();
extern int fn_8288B760();
extern unsigned int ltcg_pool_0_0f;


void fn_822C4E60(double param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  if (*(int *)(param_2 + 0x168) == 0) {
    uVar1 = *(unsigned int *)(param_2 + 0x16c);
  }
  else {
    uVar1 = fn_8288B760();
    uVar1 = uVar1 & 0xff;
  }
  if ((uVar1 == 0) && (*(int *)(param_2 + 0x168) != 0)) {
    fn_822CA5B0();
  }
  else {
    lVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 0x114) + 0x50;
    fn_822C6D68(lVar2,param_2 + 0x80,param_2 + 0xc0);
    fn_822C6B30(lVar2,param_2 + 0x80,param_2 + 0xc0,CONCAT44(ltcg_pool_0_0f,(float)param_1),
                      (unsigned __int64)ltcg_pool_0_0f << 0x20);
  }
  return;
}

