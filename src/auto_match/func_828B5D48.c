extern int fn_8223C478();
extern int fn_8288B4F0();
extern int fn_8288DD10();
extern int fn_828A12E8();
extern int fn_828E9DB8();
extern int fn_82F622E0();


void fn_828B5D48(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned short *puVar7;
  
  uVar1 = *(unsigned short *)(param_1 + 0x14);
  fn_8223C478(param_3,2,0);
  fn_828E9DB8(param_3,uVar1,2);
  uVar5 = 0xffffffffffffffff;
  uVar6 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0) {
    do {
      fn_8223C478(param_3,1,0);
      fn_828E9DB8(param_3,1,1);
      iVar4 = *(int *)(param_1 + 4);
      if ((unsigned int)(*(int *)(param_1 + 8) - iVar4 >> 2) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      puVar7 = (unsigned short *)(uVar6 * 4 + iVar4);
      if (uVar6 == 0) {
LAB_828b5e2c:
        uVar2 = *puVar7;
        uVar3 = fn_828A12E8(param_2);
        fn_8288B4F0(uVar3,uVar2,param_3);
      }
      else {
        uVar2 = *puVar7;
        fn_8223C478(param_3,1,0);
        fn_828E9DB8(param_3,uVar2 != uVar5,1);
        if (uVar2 != uVar5) goto LAB_828b5e2c;
      }
      uVar5 = (unsigned __int64)*puVar7;
      uVar3 = fn_828A12E8(param_2);
      iVar4 = fn_8288DD10(uVar3,uVar5);
      uVar2 = puVar7[1];
      uVar1 = *(unsigned short *)(iVar4 + 0x20);
      fn_8223C478(param_3,uVar1,0);
      fn_828E9DB8(param_3,uVar2,uVar1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (unsigned int)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
  }
  fn_8223C478(param_3,1,0);
  fn_828E9DB8(param_3,0,1);
  return;
}

