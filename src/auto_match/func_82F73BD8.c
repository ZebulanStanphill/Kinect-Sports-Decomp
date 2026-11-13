#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_28;
extern int fn_82F728D0();
extern int fn_82F73308();
extern int fn_82F739E8();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 * fn_82F73BD8(unsigned __int64 *param_1)

{
  unsigned char bVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned char auStack_28 [1];
  
  stack_pair_30.second = stack_pair_30.second & 0xffff;
  stack_pair_30.first = 0;
  uVar4 = (unsigned int)*lbl_832635C0;
  if (uVar4 == 0) {
    fn_82F728D0(param_1,1);
    return param_1;
  }
  if (7 < uVar4 - 0x30) {
    *(unsigned char *)((int)param_1 + 5) = 0;
    *(unsigned int *)param_1 = 0;
    *(unsigned char *)((int)param_1 + 4) = 2;
    return param_1;
  }
  if (uVar4 == 0x31) {
LAB_82f73c4c:
    uVar3 = 0xffffffff82169df0;
  }
  else if ((uVar4 == 0x32) || (uVar4 == 0x33)) {
    uVar3 = 0xffffffff82169de8;
  }
  else {
    if (uVar4 == 0x34) goto LAB_82f73c80;
    if (uVar4 == 0x35) {
      uVar3 = 0xffffffff82169de0;
    }
    else {
      if ((uVar4 != 0x36) && (uVar4 == 0x30)) goto LAB_82f73c4c;
      uVar3 = 0xffffffff82169dd8;
    }
  }
  fn_82F73308(&stack_pair_30.first,uVar3);
LAB_82f73c80:
  bVar1 = *lbl_832635C0;
  if ((((bVar1 == 0x31) || (bVar1 == 0x33)) || (bVar1 == 0x35)) || (bVar1 == 0x37)) {
    lbl_832635C0 = lbl_832635C0 + 1;
    puVar2 = (unsigned __int64 *)fn_82F739E8(auStack_28,0xffffffff82169dcc,&stack_pair_30.first);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = CONCAT44(stack_pair_30.first,stack_pair_30.second);
    lbl_832635C0 = lbl_832635C0 + 1;
  }
  *param_1 = uVar3;
  return param_1;
}

