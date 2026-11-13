typedef struct Globals_822A22C8 {
  int busy;          /* 0x00 */
  char pad04[0x14 - 0x04];
  int handle;        /* 0x14 */
  char pad18[0x20 - 0x18];
  int timed;         /* 0x20 */
  char pad24[0x28 - 0x24];
  float remaining;   /* 0x28 */
} Globals_822A22C8;

extern Globals_822A22C8 lbl_831D1298;
extern int fn_8226FDB8(int handle, int b);

int fn_822A22C8(void)
{
  if (lbl_831D1298.timed != 0) {
    if (lbl_831D1298.busy == 0) return lbl_831D1298.remaining == 0.0f;
  } else {
    if (lbl_831D1298.busy == 0 && fn_8226FDB8(lbl_831D1298.handle, 0) == 0) return 1;
  }
  return 0;
}
