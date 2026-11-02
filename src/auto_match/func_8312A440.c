typedef struct { unsigned char b[0x48]; } B48;
extern void *memset(void *, int, unsigned);
extern void *memcpy(void *, const void *, unsigned);
typedef struct {
  char a[0x1e];
  char b[0x1f2];
  char c[0x48];
  char d[0x1b8];
  int g0, g1, g2, g3, g4, g5, g6, g7;
} G;
extern G lbl_8315E1E8;

void fn_8312A440(void)
{
  memset(lbl_8315E1E8.b, 0, 0x1f2);
  *(B48 *)lbl_8315E1E8.c = *(B48 *)L"Copyright (c) Microsoft Corporation";
  memset(lbl_8315E1E8.d, 0, 0x1b8);
  lbl_8315E1E8.g0 = 1;
  lbl_8315E1E8.g1 = 0;
  lbl_8315E1E8.g2 = 63;
  lbl_8315E1E8.g3 = 1;
  lbl_8315E1E8.g4 = 1;
  lbl_8315E1E8.g5 = 1;
  lbl_8315E1E8.g6 = 1;
}
