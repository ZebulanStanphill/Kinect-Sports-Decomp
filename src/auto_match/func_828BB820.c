extern int fn_8223C478();
extern int fn_828E9DB8();
extern int fn_828E9F18();
extern int fn_828EA268();
extern int fn_828EA2D8();
extern unsigned int lbl_8321404C;


void fn_828BB820(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  double dVar8;
  
  uVar3 = lbl_8321404C;
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  fn_8223C478(param_2,lbl_8321404C,0);
  fn_828E9DB8(param_2,uVar2,uVar3);
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 - 1U < 7) {
    if (iVar6 == 2) {
      uVar7 = *(unsigned __int64 *)(param_1 + 0x10);
      fn_8223C478(param_2,0x40,0);
      fn_828E9F18(param_2,uVar7,0x40);
    }
    else if (iVar6 == 3) {
      dVar8 = *(double *)(param_1 + 0x10);
      fn_8223C478(param_2,0x40,0);
      fn_828E9F18(param_2,(__int64)dVar8,0x40);
    }
    else {
      if (iVar6 == 4) {
        uVar4 = fn_828EA268(*(unsigned int *)(param_1 + 0x10));
        if ((uVar4 & 0xffffffff) != 0) {
          uVar4 = uVar4 - 1;
        }
        fn_8223C478(param_2,5,0);
        fn_828E9DB8(param_2,uVar4,5);
        uVar2 = *(unsigned int *)(param_1 + 0x10);
        fn_8223C478(param_2,uVar4 + 1,0);
        fn_828E9DB8(param_2,uVar2,uVar4 + 1);
        iVar6 = *(int *)(param_1 + 0x10);
        if (iVar6 == 0) {
          return;
        }
        iVar5 = iVar6 << 4;
        iVar6 = iVar6 << 1;
      }
      else {
        if (iVar6 == 5) {
          fVar1 = *(float *)(param_1 + 0x10);
          fn_8223C478(param_2,0x20,0);
          fn_828E9DB8(param_2,(__int64)fVar1 & 0xffffffff,0x20);
          return;
        }
        if (iVar6 != 6) {
          if (iVar6 == 1) {
            uVar2 = *(unsigned int *)(param_1 + 0x10);
            fn_8223C478(param_2,0x20,0);
            fn_828E9DB8(param_2,uVar2,0x20);
            return;
          }
          fn_8223C478(param_2,0x40,0);
          fn_828EA2D8(param_2,param_1 + 0x10,8);
          return;
        }
        uVar4 = fn_828EA268(*(unsigned int *)(param_1 + 0x10));
        if ((uVar4 & 0xffffffff) != 0) {
          uVar4 = uVar4 - 1;
        }
        fn_8223C478(param_2,5,0);
        fn_828E9DB8(param_2,uVar4,5);
        uVar2 = *(unsigned int *)(param_1 + 0x10);
        fn_8223C478(param_2,uVar4 + 1,0);
        fn_828E9DB8(param_2,uVar2,uVar4 + 1);
        iVar6 = *(int *)(param_1 + 0x10);
        if (iVar6 == 0) {
          return;
        }
        iVar5 = iVar6 << 3;
      }
      uVar2 = *(unsigned int *)(param_1 + 0x14);
      fn_8223C478(param_2,iVar5,0);
      fn_828EA2D8(param_2,uVar2,iVar6);
    }
  }
  return;
}

