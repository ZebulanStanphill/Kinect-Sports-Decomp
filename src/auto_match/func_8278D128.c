extern int fn_8268ACE8();
extern int fn_8268B508();
extern int fn_8268BEA8();
extern int fn_826BCF78();
extern int fn_8278CF00();
extern int fn_82F66570();


void fn_8278D128(int param_1,unsigned short *param_2,unsigned int param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned short uVar5;
  unsigned short *puVar6;
  
  if (param_3 == 0xffffffff) {
    param_3 = thunk_FUN_82f64ce0(param_2);
  }
  if ((*(unsigned short *)(param_1 + 0x2a) >> 0xb & 1) != 0) {
    uVar2 = fn_8268ACE8((unsigned int *)(param_1 + 8));
    if (uVar2 == param_3) {
      uVar2 = 0;
      puVar6 = param_2;
      if (param_3 != 0) {
        do {
          uVar1 = *puVar6;
          iVar3 = fn_826BCF78(*(unsigned char *)
                                     ((*(unsigned int *)(param_1 + 8) & 0xfffffffc) + uVar2 + 8));
          iVar4 = fn_826BCF78(uVar1);
          if (iVar3 != iVar4) goto LAB_8278d1d0;
          uVar2 = uVar2 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar2 < param_3);
      }
    }
    else {
LAB_8278d1d0:
      fn_8278CF00(param_1);
    }
  }
  fn_8268BEA8(param_1 + 8);
  fn_8268B508(param_1 + 8,param_2,param_3);
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x2a) | 4;
  iVar3 = fn_82F66570(((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0xfffffffc) + 8,0x2c);
  if (iVar3 == 0) {
    uVar5 = *(unsigned short *)(param_1 + 0x2a) | 0x1000;
  }
  else {
    uVar5 = *(unsigned short *)(param_1 + 0x2a) & 0xefff;
  }
  *(unsigned short *)(param_1 + 0x2a) = uVar5;
  return;
}

