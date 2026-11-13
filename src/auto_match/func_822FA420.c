extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822F9168();
extern int fn_82365BD8();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE7F0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


unsigned int *
fn_822FA420(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned char auStack_50 [8];
  unsigned char auStack_48 [72];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  puVar4 = param_1 + 3;
  if (puVar4 != (unsigned int *)0x0) {
    iVar2 = fn_82365BD8(auStack_50,param_5);
    uVar1 = fn_82365BD8(auStack_48,iVar2);
    fn_822F9168(puVar4,param_2,param_3,param_4,uVar1);
    *puVar4 = &lbl_821AE7F0;
    uVar3 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = uVar3;
    param_1[10] = ltcg_pool_0_0f;
    param_1[9] = (-uVar3 & ~uVar3) >> 0x1f;
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

