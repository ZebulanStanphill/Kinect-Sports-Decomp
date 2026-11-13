extern unsigned int *auStack_70;
extern unsigned int fStack_90;
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_8304D8A0();
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern float lbl_8200DFF4;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_3e;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_6c;
extern unsigned int uStack_6e;
extern unsigned int uStack_80;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


unsigned __int64 fn_8304AAD0(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned __int64 uStack_a8;
  unsigned int uStack_a0;
  float fStack_90;
  int iStack_8c;
  int iStack_88;
  unsigned char uStack_80;
  unsigned char auStack_70 [2];
  unsigned short uStack_6e;
  unsigned int uStack_6c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned short uStack_3e;
  
  uStack_a0 = 0;
  iVar2 = fn_8304D8A0(param_2,param_3,auStack_70,0x34,param_1 + 0x10,
                          (unsigned int *)(param_1 + 0x20),(unsigned int *)(param_1 + 0x24),&uStack_b0);
  if (iVar2 == 1) {
    uVar3 = (0x20 - (unsigned __int64)uStack_6e & 0xffffff) << 8;
    uVar4 = 0x1f00;
    if (uVar3 < 0x1f01) {
      uVar4 = uVar3;
    }
    *(unsigned int *)(param_1 + 0x58) = uStack_b0;
    *(unsigned int *)(param_1 + 0x34) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0x78) = uStack_58;
    *(unsigned int *)(param_1 + 0x24) = uStack_58;
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x54) = uStack_ac;
    *(unsigned short *)(param_1 + 0x1c) = *(unsigned short *)(*(int *)(param_1 + 8) + 0xd4);
    *(unsigned int *)(param_1 + 0x3c) = (unsigned int)uStack_3e;
    *(unsigned int *)(param_1 + 0x40) = uStack_54;
    if (uStack_a0 != 0) {
      uVar3 = fn_82FA5060(lbl_831BC770,(unsigned __int64)uStack_3e << 2);
      *(int *)(param_1 + 0x38) = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
        return 0x34;
      }
      fn_82A1DDC0(uVar3,(unsigned __int64)uStack_a0 + param_2,*(int *)(param_1 + 0x3c) << 2);
      *(unsigned int *)(param_1 + 0x44) = 0;
      (**(int (***)())(**(int **)(param_1 + 0x2c) + 0xc))(*(int **)(param_1 + 0x2c),&fStack_90);
      fStack_90 = (float)((double)uStack_6c * (double)uStack_b0) /
                  ((float)*(unsigned int *)(param_1 + 0x78) * lbl_8200DFF4);
      iVar2 = (int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
      uStack_a8 = ((((unsigned __int64)(uStack_a8)) & (~(((unsigned __int64)0xFF) << 56))) | ((((unsigned __int64)((unsigned char)iVar2)) & ((unsigned __int64)0xFF)) << 56));
      uStack_80 = (unsigned char)uStack_a8;
      uVar1 = *(unsigned short *)(*(int *)(param_1 + 8) + 0xd4);
      if ((uVar1 == 0) || (1 < uVar1)) {
        iStack_8c = *(int *)(param_1 + 0x54);
        iStack_88 = iStack_8c + *(int *)(param_1 + 0x58);
      }
      else {
        iStack_8c = 0;
        iStack_88 = 0;
      }
      uStack_a8 = (__int64)iVar2;
      (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),&fStack_90);
      *(unsigned char *)(param_1 + 0x51) = 2;
      trapWord(6,(unsigned __int64)uStack_6e << 1,0);
      *(char *)(param_1 + 0x50) = (char)uStack_6e;
      *(int *)(param_1 + 0x4c) = (int)(uVar4 / ((unsigned __int64)uStack_6e << 1));
      *(unsigned int *)(param_1 + 0x48) = uStack_6c;
      return 1;
    }
  }
  return 7;
}

