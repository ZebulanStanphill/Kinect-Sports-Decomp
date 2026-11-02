typedef struct { unsigned char b[0x48]; } B48;
extern void *memset(void *, int, unsigned);
extern void *memcpy(void *, const void *, unsigned);
typedef struct {
  char a[0x2c];
  char b[0x1e4];
  char c[0x48];
  char d[0x1b8];
  int g0, g1, g2, g3, g4, g5, g6, g7;
} G;
extern G lbl_8315EA48;

void fn_8312A560(void)
{
  memset(lbl_8315EA48.b, 0, 0x1e4);
  *(B48 *)lbl_8315EA48.c = *(B48 *)L"Copyright (c) Microsoft Corporation";
  memset(lbl_8315EA48.d, 0, 0x1b8);
  lbl_8315EA48.g0 = 1;
  lbl_8315EA48.g1 = 0;
  lbl_8315EA48.g2 = 11;
  lbl_8315EA48.g3 = 1;
  lbl_8315EA48.g4 = 1;
  lbl_8315EA48.g5 = 1;
  lbl_8315EA48.g6 = 1;
}
