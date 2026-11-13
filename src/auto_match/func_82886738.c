extern int fn_8265C9E0();
extern int fn_82887F18();
extern unsigned int lbl_83212A18;
extern unsigned int lbl_83212A1C;
extern unsigned int lbl_83212A20;
extern unsigned int lbl_83212A24;
extern unsigned int lbl_83212A28;
extern unsigned int lbl_83212A2C;
extern unsigned int lbl_83212A30;


void fn_82886738(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  lVar5 = (param_1 & 0x3fffffff) << 2;
  lbl_83212A24 = (int)param_1;
  lbl_83212A28 = param_2;
  lbl_83212A2C = param_3;
  lbl_83212A18 = fn_8265C9E0(lVar5);
  lbl_83212A1C = (unsigned int *)fn_8265C9E0(lVar5);
  iVar2 = fn_8265C9E0(param_1);
  iVar3 = 0;
  lbl_83212A20 = iVar2;
  if (0 < (int)param_1) {
    iVar1 = lbl_83212A18 - (int)lbl_83212A1C;
    uVar6 = param_1;
    puVar4 = lbl_83212A1C;
    do {
      *(unsigned int *)(iVar1 + (int)puVar4) = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      *(unsigned char *)(iVar2 + iVar3) = 0;
      iVar3 = iVar3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lbl_83212A30 = 0;
  fn_82887F18(param_1);
  return;
}

