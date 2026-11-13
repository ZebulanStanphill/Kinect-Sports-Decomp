typedef unsigned char bool;
#define true 1
extern int fn_827EC970();
extern float lbl_821916FC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


bool fn_8226A9D8(int param_1,__int64 param_2)

{
  int iVar1;
  bool bVar2;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uStack_20 = *(unsigned int *)(param_1 + 0x38);
    uStack_1c = *(unsigned int *)(param_1 + 0x3c);
    uStack_18 = ltcg_pool_0_0f;
    iVar1 = fn_827EC970((double)(*(float *)(param_1 + 0x30) * lbl_821916FC),&uStack_20,param_2,
                         param_2,param_2 + 0x10);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

