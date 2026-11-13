extern int fn_82FA5190();
extern int fn_8301D0D8();
extern int fn_83021E70();
extern int fn_830245A0();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;


void fn_82FED378(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int iVar8;
  
  puVar1 = (unsigned int *)*param_1;
  puVar3 = (unsigned int *)0x0;
  while (puVar2 = puVar1, puVar2 != (unsigned int *)0x0) {
    if (puVar2[4] == 2) {
      fn_830245A0(param_1 + 4);
      puVar1 = lbl_831BC794;
      puVar5 = lbl_831BC794;
      puVar6 = (unsigned int *)0x0;
      while (puVar4 = puVar1, puVar4 != (unsigned int *)0x0) {
        if (puVar2[5] == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(*(int *)(puVar2[5] + 0xfc) + 8);
        }
        if (puVar4[1] == iVar8) {
          puVar1 = (unsigned int *)*puVar4;
          puVar7 = puVar1;
          if (puVar4 != puVar5) {
            *puVar6 = puVar1;
            puVar7 = lbl_831BC794;
          }
          lbl_831BC794 = puVar7;
          if (puVar4 == lbl_831BC798) {
            lbl_831BC798 = puVar6;
          }
          *puVar4 = lbl_831BC79C;
          lbl_831BC7A8 = lbl_831BC7A8 + -1;
          puVar5 = lbl_831BC794;
          lbl_831BC79C = puVar4;
        }
        else {
          puVar1 = (unsigned int *)*puVar4;
          puVar6 = puVar4;
        }
      }
      puVar1 = (unsigned int *)*puVar2;
      if (puVar2 == (unsigned int *)*param_1) {
        *param_1 = puVar1;
      }
      else {
        *puVar3 = puVar1;
      }
      if (puVar2 == (unsigned int *)param_1[1]) {
        param_1[1] = puVar3;
      }
      param_1[2] = param_1[2] + -1;
      fn_8301D0D8(puVar2 + 2);
      fn_83021E70(puVar2 + 0x6b);
      puVar2[0x68] = &lbl_8217D040;
      fn_82FA5190(lbl_831BC770,puVar2);
    }
    else {
      puVar1 = (unsigned int *)*puVar2;
      puVar3 = puVar2;
    }
  }
  return;
}

