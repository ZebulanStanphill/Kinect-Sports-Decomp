typedef unsigned char byte;
typedef unsigned int uint;
extern int fn_83010868();
extern int fn_830109F8();
extern unsigned int lbl_832642E4;

void fn_83011C00(int param_1, int param_2, int param_3, unsigned char param_4)
{
  int iVar1;

  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x14) & 0xffffff00) == 0x501100) {
    switch (param_2) {
    case 0x1000000:
    case 0x2000000:
      if (param_4) {
        *(int *)(iVar1 + 0x20) = 0;
        *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0x7f;
        if (param_2 == 0x2000000) {
          fn_830109F8(lbl_832642E4, param_1 - 4);
        }
      }
      break;
    case 0x4000000:
    case 0x8000000:
      if (param_4) {
        *(int *)(iVar1 + 0x24) = 0;
        *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xbf;
        if (param_2 == 0x4000000) {
          fn_83010868(lbl_832642E4, param_1 - 4);
        }
        *(int *)(iVar1 + 0x9c) = 0;
      }
      break;
    }
  }
}
