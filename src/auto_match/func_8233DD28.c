extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82248CC8();
extern int fn_822CB0A0();
extern int fn_822CB140();
extern int fn_8233F2E0();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_828E9D28();
extern unsigned int iStack_28;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_5d;
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


void fn_8233DD28(int *param_1)

{
  int iVar1;
  int (**pcVar2)();
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  char cVar6;
  __int64 lVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char uStack_60;
  unsigned char uStack_5f;
  unsigned char uStack_5e;
  unsigned char uStack_5d;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char *puStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    cVar6 = fn_8288B760();
    if ((cVar6 != '\0') && (*(int *)(iVar1 + 0x24) != 0)) {
      pcVar2 = *(int (***)())(*param_1 + 8);
      puVar3 = (unsigned int *)(iVar1 + 0x80U & 0xfffffff0);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar5 = (*pcVar2)(param_1);
      fn_822CB140(lVar5 + 0x144,auStack_50);
      puVar3 = (unsigned int *)(iVar1 + 0x90U & 0xfffffff0);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      pcVar2 = *(int (***)())(*param_1 + 8);
      puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar5 = (*pcVar2)(param_1);
      fn_822CB0A0(lVar5 + 0xf0,auStack_50);
      lVar5 = (**(int (***)())(*param_1 + 8))(param_1);
      puStack_30 = &uStack_60;
      uStack_60 = 0;
      iStack_28 = 0;
      uStack_5f = 0;
      uStack_5e = 0;
      uStack_5d = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_2c = 4;
      fn_828E9D28(auStack_40,&uStack_60,4);
      fn_8233F2E0(auStack_40,iVar1 + 0xe0);
      fn_82248CC8(lVar5 + 0x198,&uStack_60);
      if (iStack_28 != 0) {
        fn_8265CA20();
      }
    }
  }
  return;
}

