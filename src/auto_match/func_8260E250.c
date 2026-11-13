extern unsigned int *auStack_20;
extern int fn_823AB478();
extern int fn_82569980();
extern int fn_82594298();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83296AE0;


void fn_8260E250(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_20 [16];
  
  if ((param_5 == 0) && (*(int *)(param_3 + 0x14) != 0)) {
    iVar3 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
    if (iVar3 == -1) {
      if (lbl_83296AE0 != 0) {
        puVar1 = (unsigned int *)(lbl_83296AE0 + 0x10U & 0xfffffff0);
        in_register_000104d0 = *puVar1;
        in_register_000104d4 = puVar1[1];
        in_register_000104d8 = puVar1[2];
        in_vr77 = puVar1[3];
      }
      puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
    }
    else {
      puVar1 = (unsigned int *)
               (*(int *)(*(int *)((int)param_1 + 0xd8) + iVar3 * 0x30 + 0x10) + 0x50U & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
    }
    if (lbl_83265988 != 0) {
      fn_823AB478();
      fn_82594298((double)lbl_821CA460,param_3 + 0x14,auStack_20);
    }
  }
  return;
}

