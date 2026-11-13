typedef void (*Handler_83022188)(int, int, int);
extern Handler_83022188 lbl_831BC890[];

unsigned short fn_83022188(int param_1, int param_2)
{
  lbl_831BC890[(*(unsigned int *)(param_1 + 0x1c) < 8 ? 3 : 0) + *(unsigned char *)(param_1 + 0x2c)]
      (param_2, param_1 + 4, *(int *)(param_1 + 0x28));
  return *(unsigned short *)(param_2 + 0xe);
}
