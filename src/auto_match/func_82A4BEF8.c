extern int fn_82A3FF60();
extern int fn_82A4B9B0();
extern int fn_82A4BB80();
extern int fn_82A59970();
extern int fn_82A5A1A8();
extern int fn_82A5A720();
extern int fn_82A5AA58();


__int64 fn_82A4BEF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar2;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x1c);
  (**(int (***)())(*(int *)(param_1 + 0x1c) + 8))(piVar5);
  *(unsigned int *)(param_1 + 0x50) = param_4;
  uVar1 = fn_82A3FF60(0xffffffff83219d50,0x22c,0x20970006,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82A59970(uVar1,param_2,param_3);
  }
  *(int *)(param_1 + 0x44) = iVar3;
  if (iVar3 == 0) {
LAB_82a4c01c:
    lVar2 = -0x7ff8fff2;
  }
  else {
    puVar4 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0xe4,0x20970006,0);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      fn_82A5A1A8(puVar4 + 2);
    }
    *(unsigned int **)(param_1 + 0x4c) = puVar4;
    if (puVar4 == (unsigned int *)0x0) goto LAB_82a4c01c;
    lVar2 = fn_82A4B9B0(puVar4,4);
    if (-1 < lVar2) {
      uVar1 = fn_82A3FF60(0xffffffff83219d50,0x2b0,0x20970006,0);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82A5AA58(uVar1,param_2,param_3,param_1 + 0xc,
                                  *(unsigned int *)(param_1 + 0x44),*(unsigned int *)(param_1 + 0x4c));
      }
      *(int *)(param_1 + 0x48) = iVar3;
      if (iVar3 == 0) goto LAB_82a4c01c;
      lVar2 = fn_82A5A720();
      if (-1 < lVar2) {
        *(unsigned int *)(param_1 + 0x18) = 1;
        goto LAB_82a4c02c;
      }
    }
  }
  fn_82A4BB80(param_1);
LAB_82a4c02c:
  (**(int (***)())(*piVar5 + 0x14))(piVar5);
  return lVar2;
}

