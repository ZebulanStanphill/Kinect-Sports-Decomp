extern int atexit(void (*)(void));
extern void fn_8313FF68(void);
extern void fn_8313FFE0(void);
extern void fn_8313FFC8(void);
extern void fn_8313FFB0(void);
extern void fn_8313FF98(void);
extern char lbl_82015470[];
extern char lbl_82015490[];
extern char lbl_820154B0[];
extern char lbl_820154D0[];
extern char lbl_820154F0[];
extern void *lbl_831F1380;
extern void *lbl_831F1384;
extern void *lbl_831F1388;
extern void *lbl_831F138C;
extern void *lbl_831F1390;
extern unsigned lbl_831F1394;
extern int lbl_83156944[];

int *fn_8277B808(int unused, unsigned k)
{
  if ((lbl_831F1394 & 1) == 0) {
    lbl_831F1394 |= 1;
    lbl_831F1390 = lbl_82015470;
    atexit(fn_8313FF68);
  }
  if ((lbl_831F1394 & 2) == 0) {
    lbl_831F1394 |= 2;
    lbl_831F138C = lbl_82015490;
    atexit(fn_8313FFE0);
  }
  if ((lbl_831F1394 & 4) == 0) {
    lbl_831F1394 |= 4;
    lbl_831F1388 = lbl_820154B0;
    atexit(fn_8313FFC8);
  }
  if ((lbl_831F1394 & 8) == 0) {
    lbl_831F1394 |= 8;
    lbl_831F1384 = lbl_820154D0;
    atexit(fn_8313FFB0);
  }
  if ((lbl_831F1394 & 0x10) == 0) {
    lbl_831F1394 |= 0x10;
    lbl_831F1380 = lbl_820154F0;
    atexit(fn_8313FF98);
  }
  switch (k) {
  case 0:
    return lbl_83156944;
  case 1:
    return lbl_83156944 + 3;
  case 2:
    return lbl_83156944 + 6;
  case 3:
    return lbl_83156944 + 9;
  case 4:
    return lbl_83156944 + 12;
  }
  return lbl_83156944;
}
