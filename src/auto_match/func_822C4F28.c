#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_822C6B30();
extern int fn_822C6D68();
extern int fn_822CA5B0();
extern int fn_8255A070();
extern int fn_8288B760();
extern unsigned int ltcg_pool_0_0f;


void fn_822C4F28(int param_1)

{
  float fVar1;
  unsigned int uVar2;
  __int64 lVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x168) == 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x16c);
  }
  else {
    uVar2 = fn_8288B760();
    uVar2 = uVar2 & 0xff;
  }
  if ((uVar2 == 0) && (*(int *)(param_1 + 0x168) != 0)) {
    fn_822CA5B0();
  }
  else {
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x114) + 0x50;
    fn_822C6D68(lVar3,param_1 + 0x80,param_1 + 0xc0);
    fVar1 = ltcg_pool_0_0f;
    dVar5 = (double)ltcg_pool_0_0f;
    dVar4 = (double)fn_8255A070();
    fn_822C6B30(lVar3,param_1 + 0x80,param_1 + 0xc0,CONCAT44(fVar1,(float)dVar4),
                      (unsigned __int64)(unsigned int)(float)dVar5 << 0x20);
  }
  return;
}

