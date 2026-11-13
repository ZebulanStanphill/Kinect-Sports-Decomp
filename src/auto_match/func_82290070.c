extern int fn_82270B70();
extern int fn_822848B8();
extern int fn_8228F478();
extern int fn_8249ABC0();
extern int fn_825552C8();
extern int fn_8266F628();
extern int fn_8266F660();
extern int fn_82672C20();
extern int fn_82BFEDE8();
extern int fn_82BFFBC0();
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;


void fn_82290070(int param_1)

{
  unsigned int *puVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  int aiStack_20 [2];
  
  uVar5 = *(unsigned int *)(param_1 + 0xc);
  if (uVar5 == 0) {
    iVar3 = fn_8249ABC0();
    if (((*(int *)(iVar3 + 0x98) == 0) && (lbl_83265A58 != 1)) && (lbl_83265A5C == 0))
    goto LAB_82290298;
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar4 = fn_825552C8();
      *(unsigned int *)(param_1 + 0x6c) = uVar4;
    }
    fn_8228F478(param_1,0xffffffff821a9a00);
    fn_82672C20(*(unsigned int *)(param_1 + 0x14),0xffffffff821a9c50,0,0);
    if (*(int *)(param_1 + 0x50) != 0) {
      fn_822848B8();
      *(unsigned int *)(param_1 + 0x50) = 0;
    }
    uVar4 = 1;
  }
  else if (uVar5 == 1) {
    iVar3 = fn_82270B70();
    if (((*(int *)(iVar3 + 0xa0) != 2) && (lbl_83265A58 != 1)) && (lbl_83265A5C == 0))
    goto LAB_82290298;
    iVar3 = fn_8249ABC0();
    if (*(int *)(iVar3 + 0x98) != 0) {
      fn_8266F628(*(unsigned int *)(param_1 + 0x14),1);
    }
    fn_8266F660(*(unsigned int *)(param_1 + 0x14),0);
    uVar4 = 2;
  }
  else if (uVar5 < 3) {
    iVar3 = fn_8249ABC0();
    if (((*(int *)(iVar3 + 0x98) != 0) || (lbl_83265A58 == 1)) || (lbl_83265A5C != 0))
    goto LAB_82290298;
    fn_8266F660(*(unsigned int *)(param_1 + 0x14),1);
    fn_8266F628(*(unsigned int *)(param_1 + 0x14),0);
    uVar4 = 3;
  }
  else {
    if (uVar5 != 3) goto LAB_82290298;
    iVar3 = fn_82270B70();
    if (((*(int *)(iVar3 + 0xa0) != 0) || (lbl_83265A58 == 1)) || (lbl_83265A5C != 0))
    goto LAB_82290298;
    puVar1 = *(unsigned int **)(param_1 + 0x1c);
    if (puVar1 != (unsigned int *)0x0) {
      if (puVar1[6] == 0) {
        uVar5 = 0;
      }
      else {
        uVar2 = fn_82BFEDE8(puVar1[6],aiStack_20);
        if (aiStack_20[0] == 5) {
          uVar2 = fn_82BFFBC0(puVar1[6]);
        }
        *puVar1 = 1;
        uVar5 = (unsigned int)((uVar2 & 0xffffffff) >> 0x1f) ^ 1;
      }
      *(unsigned int *)(param_1 + 0x6c) = (unsigned int)LZCOUNT(uVar5) >> 5;
    }
    fn_8228F478(param_1,0xffffffff821a99f0);
    fn_82672C20(*(unsigned int *)(param_1 + 0x14),0xffffffff821a9c70,0,0);
    uVar4 = 0;
  }
  *(unsigned int *)(param_1 + 0xc) = uVar4;
LAB_82290298:
  if (((*(int *)(param_1 + 0xc) == 1) || (*(int *)(param_1 + 0xc) == 2)) &&
     ((*(int *)(param_1 + 0x1c) != 0 && (*(int *)(param_1 + 0x6c) == 0)))) {
    uVar4 = fn_825552C8();
    *(unsigned int *)(param_1 + 0x6c) = uVar4;
  }
  return;
}

