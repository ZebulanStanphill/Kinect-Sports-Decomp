extern unsigned int *auStack_40;
extern int fn_83049F40();
extern int fn_8304A158();
extern int fn_8304A3A8();
extern int fn_8304A420();
extern int fn_8304A498();
extern int fn_8304D6F0();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E6E0();
extern unsigned int iStack_38;
extern unsigned int iStack_3c;


unsigned __int64 fn_8304ACF8(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  unsigned char auStack_40 [4];
  int iStack_3c;
  int iStack_38;
  
  (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x20))();
  fn_8304A420(param_1);
  fn_83049F40(param_1);
  fn_8304D6F0(param_1,((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x6c) + 0x20) *
                       (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0xd0)) / 48000 & 0xffffffff,
               (unsigned int *)(param_1 + 0x5c),(unsigned short *)(param_1 + 0x1c));
  *(unsigned char *)(param_1 + 0x7e) = 0;
  if ((*(unsigned int *)(param_1 + 0x5c) < *(unsigned int *)(param_1 + 0x78)) &&
     (iVar2 = fn_8304A498(param_1), iVar2 == 1)) {
    iVar2 = *(int *)(param_1 + 8);
    *(unsigned int *)(iVar2 + 0xd0) = *(unsigned int *)(param_1 + 0x5c) & 0x7f;
    *(unsigned char *)(iVar2 + 0xdb) = *(unsigned char *)(iVar2 + 0xdb) & 0x7f;
    iVar2 = fn_8304A3A8(param_1);
    if (iVar2 != 0) {
      (**(int (***)())(**(int **)(param_1 + 0x2c) + 0xc))(*(int **)(param_1 + 0x2c),auStack_40);
      uVar1 = *(unsigned short *)(param_1 + 0x1c);
      if ((uVar1 == 0) || (1 < uVar1)) {
        iStack_3c = *(int *)(param_1 + 0x54);
        iStack_38 = *(int *)(param_1 + 0x58) + iStack_3c;
      }
      else {
        iStack_3c = 0;
        iStack_38 = 0;
      }
      (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),auStack_40);
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x1c))();
      if (iVar2 == 1) {
        fn_8307DE78(*(unsigned int *)(param_1 + 0x28));
        fn_8307E6E0(*(unsigned int *)(param_1 + 0x28));
        fn_8304A158(param_1);
        fn_8307E060(*(unsigned int *)(param_1 + 0x28));
        return 1;
      }
    }
  }
  return 2;
}

