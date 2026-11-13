extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C0814;
extern unsigned int lbl_831C0818;
extern unsigned int lbl_831C081C;
extern unsigned int lbl_831C0820;
extern unsigned int lbl_831C0824;
extern unsigned int lbl_83296890;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;


unsigned __int64 fn_8259F600(int param_1)

{
  unsigned __int64 *puVar1;
  
  if (lbl_831C0820 == lbl_831C0824) {
    if (((lbl_831C0814 != ltcg_pool_0_0f) && (lbl_831C0818 != ltcg_pool_0_0f)) &&
       (lbl_831C081C != ltcg_pool_0_0f)) {
      return 1;
    }
  }
  else if (((lbl_831C0814 != ltcg_pool_0_0f) && (lbl_831C0818 != ltcg_pool_0_0f)) &&
          (lbl_831C081C != ltcg_pool_0_0f)) {
    if (*(int *)(&lbl_83296C80 + param_1 * 0xb0) == 0) {
      puVar1 = &lbl_83296890;
    }
    else {
      puVar1 = (unsigned __int64 *)(&lbl_83296C20 + param_1 * 0xb0);
    }
    if (-(*(float *)(puVar1 + 6) * *(float *)(puVar1 + 2) +
         *(float *)(puVar1 + 7) * *(float *)(puVar1 + 3) +
         *(float *)((int)puVar1 + 0x34) * *(float *)((int)puVar1 + 0x14)) < lbl_831C0824) {
      return 0;
    }
    return 1;
  }
  return 0;
}

