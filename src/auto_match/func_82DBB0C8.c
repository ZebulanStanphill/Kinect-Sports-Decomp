#define TBLr 0
extern int fn_82CE5410();
extern int fn_82DBBD28();
extern int fn_82DBBF60();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;


void fn_82DBB0C8(int *param_1,int param_2,int *param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  unsigned short *puVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  iVar4 = (**(int (***)())(*param_1 + 0x40))();
  if (iVar4 != 0) {
    (**(int (***)())(*param_3 + 0x18))(param_3);
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(unsigned int **)(iVar5 + 4);
    if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
      *puVar1 = "TtSetMassChang";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
    }
    iVar5 = fn_82DBBD28(iVar4,0x18);
    if (iVar5 == 0) {
      iVar5 = fn_82CE5410();
      puVar6 = (unsigned short *)
               (**(int (***)())(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x40);
      if (puVar6 == (unsigned short *)0x0) {
        puVar6 = (unsigned short *)0x0;
      }
      else {
        *puVar6 = 0x18;
        puVar6[8] = 0x40;
      }
      fn_82DBBF60(iVar4,param_3,puVar6);
      if (param_2 == *(int *)(iVar4 + 0x14)) {
        puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar3 = (unsigned int *)((unsigned int)(puVar6 + 0x10) & 0xfffffff0);
        *puVar3 = *puVar1;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(unsigned int *)(puVar6 + 0x18) = lbl_82002AE0;
        puVar1 = (unsigned int *)((int)puVar6 + in_r0 + 0x30 & 0xfffffff0);
        *puVar1 = in_register_000100c0;
        puVar1[1] = in_register_000100c4;
        puVar1[2] = in_register_000100c8;
        puVar1[3] = in_vr12;
      }
      else {
        *(unsigned int *)(puVar6 + 0x10) = lbl_82002AE0;
        puVar1 = (unsigned int *)((int)puVar6 + in_r0 + 0x20 & 0xfffffff0);
        *puVar1 = in_register_000100d0;
        puVar1[1] = in_register_000100d4;
        puVar1[2] = in_register_000100d8;
        puVar1[3] = in_vr13;
        puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar3 = (unsigned int *)((unsigned int)(puVar6 + 0x18) & 0xfffffff0);
        *puVar3 = *puVar1;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
      }
    }
    else {
      puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      iVar7 = 0x20;
      if (param_2 != *(int *)(iVar4 + 0x14)) {
        iVar7 = 0x30;
      }
      puVar3 = (unsigned int *)(iVar5 + iVar7 & 0xfffffff0);
      *puVar3 = *puVar1;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      uVar8 = lbl_82002AE0;
      if ((*(float *)(iVar5 + 0x2c) == lbl_821AAD20) && (*(float *)(iVar5 + 0x3c) == lbl_821AAD20))
      {
        *(unsigned int *)(iVar5 + 0x2c) = lbl_82002AE0;
        *(unsigned int *)(iVar5 + 0x3c) = uVar8;
      }
    }
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(unsigned int **)(iVar4 + 4);
    if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
    }
  }
  return;
}

