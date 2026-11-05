typedef struct S_82E819E8 {
  int a; char pad4[0x40]; int b; char pad48[0x24]; int c;
} S_82E819E8;

void fn_82E819E8(int *p, S_82E819E8 s)
{
  int v;
  p[0x213] = 0;
  p[0x7a8] = 0;
  if (s.c != 0 && p[0] == 0) {
    v = s.c != -1 ? s.c : 0;
    p[0x213] = v;
    p[0x7a8] = v;
  }
  if (p[0x705] == 0 || p[0x76b] == 1) {
    p[0x213] = 0;
    p[0x7a8] = 0;
  }
  if (s.a != 0 && p[0] == 0) {
    p[0x213] = s.b;
    p[0x7a8] = s.b;
  }
  if (p[0x213] < 0) {
    p[0x213] = 0;
    p[0x7a8] = 0;
  } else if (p[0x213] > 7 && p[0] == 0) {
    p[0x213] = 7;
    p[0x7a8] = 7;
  }
  if (p[0x792] > p[0x213] + 1) {
    return;
  }
  p[0x213] = 0;
  p[0x7a8] = 0;
}
