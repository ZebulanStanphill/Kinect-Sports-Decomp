extern float fRam831d38cc;
extern int fn_82466200();
extern unsigned int lbl_821955F4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D386C;
extern unsigned int uRam831d38a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82465B68(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if (param_2 != *(int *)(param_1 + 0xd0)) {
    *(int *)(param_1 + 0xd0) = param_2;
    uVar1 = lbl_821955F4;
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0xd4) != 0) {
        *(unsigned int *)(param_1 + 0xd4) = 0;
      }
      *(unsigned int *)(param_1 + 0xdc) = ltcg_pool_0_0f;
    }
    else if (param_2 == 1) {
      uVar2 = 0;
      *(unsigned int *)(param_1 + 0xdc) = lbl_831D386C;
      *(unsigned int *)(param_1 + 0xe0) = uVar1;
      if (uRam831d38a0 != 0) {
        do {
          fn_82466200((double)fRam831d38cc,param_1,uVar2);
          uVar2 = uVar2 + 1;
        } while ((uVar2 & 0xffffffff) < (unsigned __int64)uRam831d38a0);
      }
    }
  }
  return;
}

