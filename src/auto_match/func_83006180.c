extern int fn_82FA5060();
extern int fn_83004E00();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_83006180(int param_1,int param_2,unsigned char param_3)

{
  unsigned int *puVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    if (param_3 == '\0') {
      return 1;
    }
    puVar1 = (unsigned int *)fn_82FA5060(lbl_831BC768,0x40);
    *(unsigned int **)(param_1 + 0x28) = puVar1;
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0xffffffff;
      puVar1[4] = 0;
      *(unsigned char *)(puVar1 + 5) = 0;
      puVar1[6] = 0xffffffff;
      puVar1[7] = 0;
      *(unsigned char *)(puVar1 + 8) = 0;
      puVar1[9] = 0xffffffff;
      puVar1[10] = 0;
      *(unsigned char *)(puVar1 + 0xb) = 0;
      puVar1[0xc] = 0xffffffff;
      puVar1[0xd] = 0;
      *(unsigned char *)(puVar1 + 0xe) = 0;
      *(unsigned char *)(puVar1 + 0xf) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == 0) {
      return 0x34;
    }
  }
  *(char *)(param_2 * 0xc + iVar2 + 0x14) = param_3;
  if ((param_3 != '\0') && (*(unsigned int *)(param_2 * 0xc + *(int *)(param_1 + 0x28) + 0x10) != 0)) {
    fn_83004E00(param_1,param_2);
  }
  return 1;
}

