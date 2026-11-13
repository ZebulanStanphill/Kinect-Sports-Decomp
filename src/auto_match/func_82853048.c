extern int fn_82639030();
extern int fn_8263A120();
extern int fn_82640680();
extern int fn_82640F10();
extern unsigned int lbl_82015BE0;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_82853048(int param_1,int param_2,int param_3)

{
  unsigned __int64 *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  float fVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  uVar3 = 1 << (*(unsigned int *)(param_1 + 0xfc) & 0x3f);
  if ((*(unsigned int *)(param_2 + 0x10) & uVar3) == 0) {
    if ((*(unsigned int *)(param_2 + 0x14) & uVar3) == 0) {
      uVar7 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
      uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0xc);
      uVar5 = *(unsigned int *)(param_2 + 4);
    }
    else {
      uVar5 = 1;
      uVar7 = (unsigned __int64)*(unsigned int *)(param_2 + 8) / 3;
      uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0xc) / 3;
    }
    fn_82640680(*(unsigned int *)(param_1 + 4),uVar5,uVar6,uVar7);
  }
  else {
    iVar8 = *(int *)(*(int *)(param_3 + 0x48) + 0x40) + *(int *)(param_2 + 0x18) * 0x3c;
    fn_8263A120(*(unsigned int *)(param_1 + 4),
                      *(unsigned int *)(*(int *)(iVar8 + 0x38) * 8 + *(int *)(iVar8 + 0x30)));
    fn_82639030(*(unsigned int *)(param_1 + 4),2);
    fVar4 = lbl_82015BE0;
    uVar3 = *(unsigned int *)(param_1 + 0xa0);
    puVar1 = *(unsigned __int64 **)(param_1 + 4);
    uVar2 = *(unsigned int *)(param_2 + 0xc);
    *(unsigned int *)((int)puVar1 + uVar3 * 0x10 + 0x784) = uStack_2c;
    *(unsigned int *)(puVar1 + uVar3 * 2 + 0xf1) = uStack_28;
    *(unsigned int *)((int)puVar1 + uVar3 * 0x10 + 0x78c) = uStack_24;
    *(float *)(puVar1 + (uVar3 + 0x78) * 2) = (float)uVar2 * fVar4;
    *puVar1 = 0x8000000000000000U >> ((unsigned __int64)(uVar3 >> 2) & 0x7f) | *puVar1;
    if (*(int *)(param_2 + 4) == 4) {
      fn_82640F10(*(unsigned int *)(param_1 + 4),0x11,0,*(unsigned int *)(param_2 + 0x1c),
                        (unsigned __int64)*(unsigned int *)(param_2 + 8) / 3);
    }
  }
  return;
}

