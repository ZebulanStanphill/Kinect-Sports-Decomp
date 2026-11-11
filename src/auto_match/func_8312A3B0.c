typedef struct { unsigned char b[0x48]; } B48;
extern void *memset(void *, int, unsigned);
extern void *memcpy(void *, const void *, unsigned);
typedef struct {
  char a[0x1a];
  char b[0x1f6];
  char c[0x48];
  char d[0x1b8];
  int g0, g1, g2, g3, g4, g5, g6, g7;
} G_8312A3B0;
extern G_8312A3B0 lbl_8315DDB8;

void fn_8312A3B0(void)
{
  memset(lbl_8315DDB8.b, 0, 0x1f6);
  *(B48 *)lbl_8315DDB8.c = *(B48 *)L"Copyright (c) Microsoft Corporation";
  memset(lbl_8315DDB8.d, 0, 0x1b8);
  lbl_8315DDB8.g0 = 0xb;
  lbl_8315DDB8.g1 = 1;
  lbl_8315DDB8.g2 = 0;
  lbl_8315DDB8.g3 = 1;
  lbl_8315DDB8.g4 = 1;
  lbl_8315DDB8.g5 = 1;
  lbl_8315DDB8.g6 = 1;
}
