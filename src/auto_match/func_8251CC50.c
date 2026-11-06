typedef struct Holder_8251CC50 {
  int pad0;
  int pad4;
} Holder_8251CC50;

typedef struct Inner_8251CC50 {
  char pad0[0x24];
  int count;
} Inner_8251CC50;

typedef struct Node_8251CC50 {
  int pad0;
  Inner_8251CC50 *inner;
} Node_8251CC50;

typedef struct Globals_8251CC50 {
  int pad0;
  int f4;
  int f8;
  char padc[8];
  int f14;
  int f18;
  int f1c;
  int pad20;
  int f24;
  char pad28[0xc4];
  Node_8251CC50 *fec;
} Globals_8251CC50;

extern Globals_8251CC50 lbl_832960A0;

void fn_8251CC50(int a, int flag)
{
  Inner_8251CC50 *o;
  int n;
  int *arr;

  if (flag != 0)
    lbl_832960A0.f18--;
  else
    lbl_832960A0.f14--;
  if (lbl_832960A0.f18 != 0)
    return;
  if (lbl_832960A0.f14 != 0)
    return;
  if (lbl_832960A0.f1c == 0 && lbl_832960A0.f24 != 0) {
    lbl_832960A0.f4 = 3;
  } else {
    o = lbl_832960A0.fec ? lbl_832960A0.fec->inner : 0;
    n = o->count;
    arr = (int *)o;
    if (n <= 0 || arr[n + 4] != a) {
      arr[n + 5] = a;
      o->count = o->count + 1;
    }
    lbl_832960A0.f4 = 0;
  }
  lbl_832960A0.f8 = a;
  lbl_832960A0.f24 = 1;
}
