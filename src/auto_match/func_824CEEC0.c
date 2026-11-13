typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_824CC840();
extern int fn_824CD030();
extern int fn_824CFB08();
extern int fn_824D2AE8();
extern int fn_8265C9E0();
extern int fn_82F51468();
extern int fn_82F53418();
extern int fn_82F53CA0();
extern unsigned int iStack_3c;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_82195B1C;
extern unsigned int lbl_821C0C6C;
extern unsigned int lbl_821C0C90;
extern unsigned int lbl_821C0CB4;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_824CEEC0(unsigned int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  int iVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  char in_RESERVE;
  unsigned char bVar10;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned char auStack_38 [4];
  int *piStack_34;
  
  fn_824CC840();
  *(unsigned char *)(param_1 + 0x38) = 1;
  param_1[0x3c] = &lbl_821C0CB4;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x44) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0x3c] = &lbl_821C0C90;
  *param_1 = &lbl_821C0C6C;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x48) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0x3f] = 0;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x4c) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0x40] = 0;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x50) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0x54] = lbl_821CA1A0;
  param_1[0x55] = lbl_821CA1A4;
  param_1[0x56] = lbl_821CA1A8;
  param_1[0x57] = 0;
  iVar4 = fn_8265C9E0(0xae0);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_82F53CA0();
  }
  param_1[0x58] = uVar5;
  param_1[0x59] = 0;
  param_1[0xe80] = 0;
  param_1[0xe81] = 0;
  param_1[0xe82] = 0;
  iVar4 = fn_824CD030(param_1);
  bVar10 = (iVar4 == 0) << 1;
  if (iVar4 != 0) {
    uVar3 = fn_82F51468(auStack_38,param_1[8]);
    fn_824D2AE8(&uStack_40,uVar3);
    if (ZEXT48(piStack_34) != 0) {
      lVar8 = ZEXT48(piStack_34) + 8;
      do {
        puVar9 = (unsigned int *)lVar8;
        lVar7 = (unsigned __int64)*puVar9 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar7,0,lVar8);
          *puVar9 = uVar1;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
      if ((int)lVar7 == 0) {
        (**(int (***)())(*piStack_34 + 4))();
      }
    }
    iVar6 = fn_82F53418(uStack_40,param_2 + 0x30,1);
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = iVar6;
    }
    param_1[0x3f] = iVar4;
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  *(unsigned int *)(param_1[8] + 0x10) = lbl_82195B1C;
  *(unsigned int *)(param_1[8] + 0x14) = lbl_82192D74;
  fn_824CFB08(param_1);
  return param_1;
}

