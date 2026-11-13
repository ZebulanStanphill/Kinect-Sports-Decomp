extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822EFBF0();
extern int fn_823D1440();
extern int fn_823F2BF0();
extern int fn_8255C820();
extern unsigned int iStack_5c;
extern unsigned int lbl_832975B0;


void fn_823D1358(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_50 [32];
  
  iVar4 = *(int *)(param_1 + 0x9a0);
  puVar5 = (unsigned int *)(iVar4 + 0x80U & 0xfffffff0);
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  iVar1 = *(int *)(iVar4 + 0x2c);
  puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uVar6 = *(unsigned int *)(iVar4 + 0x28);
  lVar3 = fn_8255C820(auStack_50,*(unsigned int *)((iVar1 + 0xa3) * 4 + param_1));
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) == '\0') {
    fn_823D1440(param_1,lVar3 != 0,iVar1,uVar6);
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    puVar5 = (unsigned int *)fn_822EFBF0(auStack_60);
    fn_823F2BF0((unsigned __int64)*(unsigned int *)*puVar5 + 0xdb0,lVar3 != 0,iVar1,uVar6);
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  return;
}

