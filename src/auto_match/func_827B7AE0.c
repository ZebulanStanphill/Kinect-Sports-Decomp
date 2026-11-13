#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT42(h,l) ((unsigned __int64)((((unsigned int)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT62(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 16) | ((unsigned short)(l))))
extern int fn_827B6CF8();
extern int fn_827B7A60();


void fn_827B7AE0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  fn_827B7A60(param_1,*(unsigned int *)(*(int *)(param_2 + 8) + 0x10));
  fn_827B7A60(param_1,*(unsigned int *)(*(int *)(param_2 + 8) + 0x14));
  if (**(int **)(param_2 + 8) != 0) {
    fn_827B6CF8(param_1 + 0x84);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if ((*(short *)(iVar1 + 6) != 0) && (param_2 == *(int *)(iVar1 + 0x14))) {
    *(short *)(param_2 + 0x24) = *(short *)(param_2 + 0x24) + *(short *)(iVar1 + 6);
    *(unsigned short *)(iVar1 + 6) = 0;
  }
  **(unsigned int **)(param_2 + 8) = 0;
  *(unsigned __int64 *)(*(int *)(param_2 + 8) + 0x18) =
       CONCAT62(CONCAT42(CONCAT22(*(unsigned short *)(param_2 + 0x22),
                                  *(unsigned short *)(*(int *)(param_2 + 0x1c) + 2)),
                         *(unsigned short *)(param_2 + 0x24)),
                *(unsigned short *)(*(int *)(param_2 + 0x1c) + 4));
  *(unsigned int *)(*(int *)(param_2 + 8) + 0x10) = 0;
  *(unsigned int *)(*(int *)(param_2 + 8) + 0x14) = 0;
  *(unsigned short *)(param_2 + 0x26) = 0;
  if ((*(unsigned short *)(param_2 + 0x20) & 0x4000) != 0) {
    *(unsigned short *)(param_2 + 0x20) = *(unsigned short *)(param_2 + 0x20) & 0xbfff;
    uVar2 = *(unsigned int *)(param_1 + 0x54);
    *(int *)(param_2 + 0x14) = param_1 + 0x3c;
    *(unsigned int *)(param_2 + 0x18) = uVar2;
    *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2;
    *(int *)(param_1 + 0x54) = param_2;
  }
  return;
}

