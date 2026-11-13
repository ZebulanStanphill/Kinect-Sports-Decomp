typedef unsigned char bool;
#define true 1
extern int fn_82A3FF60();
extern int fn_82A412D8();
extern int fn_82A41B80();
extern int fn_82A42920();
extern int fn_82A42A28();
extern int fn_82A42AB0();
extern int fn_82A42C48();
extern int fn_82A49B30();
extern int fn_82A4F4E0();
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82A42E20(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  char in_RESERVE;
  
  piVar7 = (int *)(param_1 + 4);
  (**(int (***)())(*(int *)(param_1 + 4) + 8))(piVar7);
  lVar8 = 0;
  puVar9 = (unsigned int *)0x0;
  iVar4 = fn_82A42920(param_1,param_5);
  if (((iVar4 == 8) || (8 < param_3)) ||
     (uVar3 = fn_82A49B30(param_3), (param_4 & 0xffffffff) != (uVar3 & 0xffffffff))) {
    puVar6 = *(unsigned int **)(param_1 + 0x3c40);
    do {
      if (puVar6 == (unsigned int *)0x0) goto LAB_82a42f04;
      if (puVar6 == (unsigned int *)0x0) {
        puVar5 = (unsigned int *)0x0;
      }
      else {
        puVar5 = (unsigned int *)*puVar6;
        puVar6 = (unsigned int *)puVar6[1];
      }
    } while (((*puVar5 != param_3) || ((unsigned __int64)puVar5[1] != (param_4 & 0xffffffff))) ||
            ((unsigned __int64)puVar5[2] != (param_5 & 0xffffffff)));
    puVar9 = puVar5 + 3;
    if (puVar9 == (unsigned int *)0x0) {
LAB_82a42f04:
      puVar5 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0xfc,0x20970003,0);
      if (puVar5 == (unsigned int *)0x0) {
        puVar5 = (unsigned int *)0x0;
      }
      else {
        *puVar5 = param_3;
        puVar5[1] = (unsigned int)param_4;
        puVar5[2] = (unsigned int)param_5;
        fn_82A41B80(puVar5 + 3);
      }
      if (puVar5 == (unsigned int *)0x0) goto LAB_82a42fd4;
      iVar4 = fn_82A42AB0(param_1 + 0x3c28,puVar5);
      if (iVar4 == 0) {
        fn_82A412D8(puVar5 + 8);
        fn_82A4F4E0(puVar5);
      }
      else {
        puVar9 = puVar5 + 3;
      }
      goto LAB_82a42f7c;
    }
  }
  else {
    puVar9 = (unsigned int *)((param_3 * 8 + iVar4) * 0xf0 + param_1 + -0x758);
LAB_82a42f7c:
    if (puVar9 == (unsigned int *)0x0) goto LAB_82a42fd4;
  }
  if (param_2 == 0) {
    lVar8 = fn_82A42A28();
  }
  else {
    lVar8 = fn_82A42C48(param_1,puVar9,param_3,param_4,param_5);
    bVar1 = lVar8 == 0;
    while (!bVar1) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*(unsigned int *)lVar8 + 1,0,lVar8);
        *(unsigned int *)lVar8 = uVar2;
        bVar1 = true;
      }
    }
  }
LAB_82a42fd4:
  (**(int (***)())(*piVar7 + 0x14))(piVar7);
  return lVar8;
}

