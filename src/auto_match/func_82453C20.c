extern unsigned int *auStack_60;
extern unsigned int fStack_50;
extern int fn_82250A18();
extern int fn_823B65F8();
extern int fn_823B6A20();
extern unsigned int iStack_6c;
extern unsigned int lbl_821B9BC8;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_4c;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


void fn_82453C20(double param_1,int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned __int64 param_5,unsigned char param_6)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  __int64 lVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char **ppuStack_70;
  int iStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [16];
  float fStack_50;
  unsigned char uStack_4c;
  
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) != '\0') {
    piVar1 = *(int **)(param_2 + 0x40);
    uVar2 = piVar1[0x45];
    ppuStack_70 = &lbl_821B9BC8;
    lVar5 = (unsigned __int64)uVar2 - 4;
    puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    fStack_50 = (float)param_1;
    iStack_6c = (int)lVar5 - ((uVar2 - 5) + (unsigned int)(lVar5 == 0));
    uStack_68 = param_3;
    uStack_64 = param_4;
    uStack_4c = param_6;
    iVar4 = fn_823B6A20(*(unsigned int *)(*piVar1 + 0x8c));
    if (iVar4 != 0) {
      fn_823B65F8(*(unsigned int *)(**(int **)(param_2 + 0x40) + 0x8c),&ppuStack_70);
    }
  }
  return;
}

