extern int fn_826957D0();
extern int fn_82697610();
extern int fn_827A2738();
extern int fn_827A4240();
extern int fn_827A4850();


void fn_8272DC58(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned short uVar6;
  unsigned __int64 uVar4;
  unsigned short uVar7;
  int *piVar8;
  unsigned char bStack_30;
  unsigned char abStack_2f [47];
  
  piVar8 = (int *)(*(int *)(param_1 + 8) + -0x68);
  if (*(int *)(param_1 + 8) == 0) {
    piVar8 = (int *)0x0;
  }
  if (*(int *)(piVar8[0x28] + 0x114) != 0) {
    uVar7 = *(unsigned short *)(*(int *)(piVar8[0x28] + 0x114) + 0x68);
    if (((uVar7 & 1) == 0) || ((uVar7 >> 1 & 1) != 0)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar5 = fn_82697610(uVar3,uVar1);
      if (uVar5 == 0) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        uVar5 = fn_82697610(uVar3,uVar1);
        abStack_2f[0] = (unsigned char)(uVar5 >> 0x10) | 0x80;
        fn_827A4850(*(unsigned int *)(piVar8[0x28] + 0x114),uVar5 & 0xffff,abStack_2f);
        if ((uVar5 & 0xffff) == 0x2d) {
          if (*(int *)(piVar8[0x28] + 0x114) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(unsigned short *)(*(int *)(piVar8[0x28] + 0x114) + 0x68) >> 7 & 1;
          }
          (**(int (***)())(*piVar8 + 0x164))(piVar8,uVar7 == 0);
        }
      }
      else if (uVar5 == 1) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        uVar4 = fn_82697610(uVar3,uVar1);
        bStack_30 = (unsigned char)(uVar4 >> 0x10) | 0x80;
        fn_827A2738(*(unsigned int *)(piVar8[0x28] + 0x114),uVar4 & 0xffff,&bStack_30);
      }
      else if (uVar5 < 3) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar2 = *(unsigned int *)(piVar8[0x28] + 0x114);
        uVar3 = fn_826957D0(param_1,1);
        uVar6 = fn_82697610(uVar3,uVar1);
        fn_827A4240(uVar2,uVar6);
      }
    }
  }
  return;
}

