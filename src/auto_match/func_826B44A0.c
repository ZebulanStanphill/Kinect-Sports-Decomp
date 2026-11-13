extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_826828D8();
extern int fn_82695370();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696378();
extern int fn_82696610();
extern int fn_82696958();
extern int fn_826AE0C0();
extern int fn_826B3798();
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int iStack_68;
extern unsigned int iStack_90;
extern unsigned int iStack_dc;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;


unsigned __int64 fn_826B44A0(int param_1,int *param_2,char *param_3,unsigned __int64 param_4,unsigned int param_5
                       ,unsigned int param_6,unsigned int param_7)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  char cVar6;
  int iVar4;
  int iVar5;
  unsigned int uVar7;
  unsigned int *puVar8;
  int *piStack_e0;
  int iStack_dc;
  unsigned char bStack_d8;
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  int *piStack_b0;
  char *pcStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  int iStack_90;
  unsigned char *puStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned char **ppuStack_70;
  char *pcStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char uStack_5c;
  int iStack_58;
  unsigned int uStack_54;
  int iStack_50;
  
  piStack_b0 = param_2;
  pcStack_ac = param_3;
  uStack_a8 = (int)param_4;
  uStack_a4 = param_5;
  uStack_a0 = param_6;
  uStack_9c = param_7;
  uVar3 = fn_826AE0C0(param_1,&piStack_b0);
  if (((uVar3 & 0xff) == 0) || (*param_3 != '\t')) {
    if (*param_3 != '\f') {
      return uVar3;
    }
    auStack_c0[0] = 0;
    iVar5 = 0;
    cVar6 = fn_826B44A0(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0xf4,auStack_c0,param_4,0,0
                          ,0);
    if (cVar6 == '\0') {
      iVar4 = *(int *)(param_1 + 0x74);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
    }
    else {
      iVar4 = fn_82695370(auStack_c0,param_1);
      if (iVar4 == 0) {
        iVar5 = fn_82696958(auStack_c0,param_1);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + 0x10;
        }
      }
      else {
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
    }
    fn_82696378(&piStack_e0,param_3);
    puVar8 = (unsigned int *)(param_1 + 8);
    uVar7 = *(int *)(param_1 + 8) + 0x10;
    *(unsigned int *)(param_1 + 8) = uVar7;
    if (*(unsigned int *)(param_1 + 0x10) <= uVar7) {
      fn_826826A8(puVar8);
    }
    puVar1 = (unsigned char *)*puVar8;
    if (puVar1 != (unsigned char *)0x0) {
      *puVar1 = 5;
      iVar2 = *param_2;
      *(int *)(puVar1 + 4) = iVar2;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    fn_826959C8(param_3);
    *param_3 = '\0';
    iStack_68 = iVar4 + 0x68;
    if (iVar4 == 0) {
      iStack_68 = iVar5;
    }
    ppuStack_70 = &lbl_8200579C;
    uStack_5c = 0;
    uStack_64 = 0;
    iStack_50 = ((int)(*puVar8 - *(int *)(param_1 + 0xc)) >> 4) + *(int *)(param_1 + 0x1c) * 0x20 +
                -0x20;
    uStack_60 = 0;
    uStack_54 = 1;
    pcStack_6c = param_3;
    iStack_58 = param_1;
    (**(int (***)())(*piStack_e0 + 0x28))(piStack_e0,&ppuStack_70,iStack_dc,0);
    fn_826828D8(&ppuStack_70);
    fn_82696330(*puVar8);
    uVar7 = *puVar8;
    *puVar8 = uVar7 - 0x10;
    if (uVar7 - 0x10 < *(unsigned int *)(param_1 + 0xc)) {
      fn_826827F8(puVar8);
    }
    if (((bStack_d8 & 2) == 0) && (piStack_e0 != (int *)0x0)) {
      fn_826824B0();
    }
    piStack_e0 = (int *)0x0;
    if (((bStack_d8 & 1) == 0) && (iStack_dc != 0)) {
      fn_826824B0();
    }
    iStack_dc = 0;
    fn_82696330(auStack_c0);
    goto joined_r0x826b47f0;
  }
  puStack_8c = auStack_d0;
  iStack_90 = *(int *)(param_1 + 0x78) + 0xf4;
  auStack_d0[0] = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  iVar5 = 0;
  uStack_88 = (int)param_4;
  cVar6 = fn_826B3798(param_1,&iStack_90);
  if (cVar6 == '\0') {
    iVar4 = *(int *)(param_1 + 0x74);
    if (iVar4 != 0) {
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    }
LAB_826b45a4:
    if (iVar4 != 0) goto LAB_826b45ac;
  }
  else {
    iVar4 = fn_82695370(auStack_d0,param_1);
    if (iVar4 == 0) {
      iVar5 = fn_82696958(auStack_d0,param_1);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + 0x10;
      }
      goto LAB_826b45a4;
    }
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
LAB_826b45ac:
    iVar5 = iVar4 + 0x68;
  }
  fn_82696610(param_3,param_1,iVar5,param_3);
  fn_82696330(auStack_d0);
joined_r0x826b47f0:
  if (iVar4 != 0) {
    fn_8267C498(iVar4);
  }
  return uVar3;
}

