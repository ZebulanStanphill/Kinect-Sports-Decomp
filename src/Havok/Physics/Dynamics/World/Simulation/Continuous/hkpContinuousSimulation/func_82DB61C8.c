extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_8323B464;


void fn_82DB61C8(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_220 [1];
  unsigned char auStack_210 [496];

  if (*(unsigned int *)(param_1 + 0x34) == (*(unsigned int *)(param_1 + 0x38) & 0x3fffffff)) {
    fn_82CEE578(auStack_220,auStack_210,0x200);
    fn_82CEDB38(auStack_220,0xffffffff82142448);
    (**(int (***)())(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0xfffffffff0323454,auStack_210,0xffffffff82142408,0x43b);
    fn_82CED958(auStack_220);
    return;
  }
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = (int)(uVar6 + 1);
  uVar8 = lbl_821AAD20;
  lVar7 = (uVar6 + 1) - uVar6;
  if (0 < lVar7) {
    lVar5 = uVar6 * 0x70 + (unsigned __int64)*(unsigned int *)(param_1 + 0x30) + 0x18;
    do {
      if (lVar5 != 0x18) {
        *(unsigned int *)lVar5 = uVar8;
        ((unsigned int *)lVar5)[1] = uVar8;
      }
      lVar5 = lVar5 + 0x70;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = uVar6 * 0x70 + (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
  puVar3 = (unsigned int *)lVar7;
  lVar5 = 5;
  *puVar3 = *(unsigned int *)(param_2 + 0x3030);
  puVar4 = (unsigned int *)(param_2 + 0x304c);
  lVar7 = lVar7 + 0x14;
  *(unsigned char *)(puVar3 + 2) =
       *(unsigned char *)
        (*(char *)(param_3 + 0xc) * 0x40 + *(int *)(*(int *)(param_1 + 0xc) + 0x80) + 0x1c34);
  puVar3[1] = *(unsigned int *)(param_2 + 0x3034);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x3010 & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (unsigned int *)((int)puVar3 + in_r0 + 0x50 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar1 = (unsigned int *)(param_2 + 0x3020U & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(puVar3 + 0x18) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar3[3] = (int)*(char *)(*(int *)(param_3 + 0x10) + 0x10) + *(int *)(param_3 + 0x10);
  puVar3[4] = (int)*(char *)(*(int *)(param_3 + 0x14) + 0x10) + *(int *)(param_3 + 0x14);
  do {
    puVar4 = puVar4 + 1;
    lVar7 = lVar7 + 4;
    *(unsigned int *)lVar7 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar3[5] = *(unsigned int *)(param_3 + 8);
  puVar3[0xb] = *(unsigned int *)(param_2 + 0x3064);
  puVar3[0xc] = *(unsigned int *)(param_2 + 0x3068);
  puVar3[0xd] = *(unsigned int *)(param_2 + 0x306c);
  puVar3[0xe] = *(unsigned int *)(param_2 + 0x3070);
  puVar3[0xf] = *(unsigned int *)(param_2 + 0x3074);
  puVar3[0x10] = *(unsigned int *)(param_2 + 0x3078);
  puVar3[0x11] = *(unsigned int *)(param_2 + 0x307c);
  return;
}
