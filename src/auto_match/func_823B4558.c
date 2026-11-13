extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_8223C610();
extern int fn_82365BD8();
extern int fn_823B4800();
extern int fn_823B4900();
extern int fn_823B4970();
extern int fn_823BC468();
extern int fn_828E9D60();
extern int fn_828E9D90();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int stack0x00000000;


void fn_823B4558(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar8;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int uVar9;
  unsigned int uVar10;
  int *piStack_60;
  int iStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  
  uVar4 = fn_823B4900(param_2,0x1e,0,0);
  *(unsigned __int64 *)(param_1 + 0x88) = uVar4;
  puVar8 = (unsigned int *)fn_823B4800(&stack0x00000000 + -0x58);
  uVar9 = 0;
  uVar10 = 0;
  if ((unsigned int *)(&stack0x00000000 + -0x60) != puVar8) {
    uVar10 = puVar8[1];
    puVar8[1] = 0;
    uVar9 = *puVar8;
    *puVar8 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  *(unsigned int *)(param_1 + 0x84) = uVar10;
  *(unsigned int *)(param_1 + 0x80) = uVar9;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  lVar5 = fn_828E9D90(param_2);
  iVar2 = *(int *)(iVar1 + 0x308);
  uVar10 = *(unsigned int *)(iVar2 + 0x14);
  uVar3 = *(unsigned int *)(iVar2 + 0x10);
  uVar9 = *(unsigned int *)(iVar2 + 0x18);
  uVar6 = fn_8223C610(param_2,uVar10,0,0);
  while ((uVar6 & 0xffffffff) != (unsigned __int64)uVar3) {
    fn_8223C610(param_2,uVar9,0,0);
    uVar4 = fn_823BC468(*(unsigned int *)(iVar1 + 0x308),uVar6);
    fn_82365BD8(&stack0x00000000 + -0x60,uVar4);
    (**(int (***)())(*piStack_60 + 4))(piStack_60,param_2,0);
    uVar6 = fn_8223C610(param_2,uVar10,0,0);
    if (iStack_5c != 0) {
      fn_822315A0(iStack_5c);
    }
  }
  lVar7 = fn_828E9D90();
  fn_828E9D60(param_2,lVar5);
  fn_823B4970(*(unsigned int *)(param_1 + 0x80),param_2,lVar7 - lVar5,0);
  return;
}

