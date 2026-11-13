extern unsigned int *auStack_50;
extern int fn_82273CD8();
extern int fn_82526A70();
extern int fn_82526A70();
extern int fn_8265CA60();
extern int fn_8266F780();


void fn_826700E0(int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int auStack_50;

  uVar6 = (unsigned int)param_3;
  if ((uVar6 == 0) || (param_2 == 0)) {
    *param_1 = 0;
  }
  else {
    lVar2 = -1;
    uVar7 = (param_3 & 0xfffffff) << 4;
    if (0xfffffff < uVar6) {
      uVar7 = 0xffffffffffffffff;
    }
    if ((uVar7 & 0xffffffff) < 0xfffffff8) {
      lVar2 = uVar7 + 8;
    }
    puVar3 = (unsigned int *)fn_8265CA60(lVar2);
    if (puVar3 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      *puVar3 = uVar6;
      puVar5 = puVar3 + 2;
      if (-1 < (__int64)(param_3 - 1)) {
        puVar3 = puVar3 + -1;
        uVar7 = param_3;
        do {
          puVar3[3] = 0;
          puVar3 = puVar3 + 4;
          *puVar3 = 0;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    *param_1 = (int)puVar5;
    if (uVar6 != 0) {
      puVar9 = (unsigned int *)(param_2 + 8);
      do {
        fn_8266F780((int)puVar9 + *param_1 + (-8 - param_2),puVar9 + -2);
        uVar6 = puVar9[-1] & 0x8f;
        if (uVar6 == 4) {
          auStack_50 = 0;
          if (((unsigned int)puVar9[-1] >> 6 & 1) == 0) {
            uVar1 = *puVar9;
          }
          else {
            uVar1 = *(unsigned int *)*puVar9;
          }
          fn_82526A70(&auStack_50,uVar1);
          uVar4 = 4;
LAB_826701f8:
          uVar1 = auStack_50;
          iVar8 = (int)puVar9 + *param_1 + (-8 - param_2);
          fn_82273CD8(iVar8,uVar4);
          *(unsigned int *)(iVar8 + 8) = uVar1;
        }
        else if (uVar6 == 5) {
          auStack_50 = 0;
          fn_82526A70(&auStack_50,*puVar9);
          uVar4 = 5;
          goto LAB_826701f8;
        }
        param_3 = param_3 - 1;
        puVar9 = puVar9 + 4;
      } while (param_3 != 0);
    }
  }
  return;
}
