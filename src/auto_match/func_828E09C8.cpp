extern "C" void fn_828E07B0(int, int, unsigned char *, int);
extern "C" void fn_828E08A0(int, int, int, int);

extern "C" void fn_828E09C8(int p1)
{
  unsigned char a[0x24] = {0};
  fn_828E07B0(p1,0,a,0x24);
  unsigned char b[8] = {0};
  fn_828E07B0(p1,1,b,8);
  unsigned char c[0x10] = {0};
  fn_828E07B0(p1,2,c,0x10);
  fn_828E08A0(p1,0,3,0);
  fn_828E08A0(p1,0,4,0);
  fn_828E08A0(p1,0,5,0);
  fn_828E08A0(p1,0,6,0);
  fn_828E08A0(p1,0,7,0);
  fn_828E08A0(p1,0,8,0);
  fn_828E08A0(p1,0,9,0);
  fn_828E08A0(p1,0,10,0);
  fn_828E08A0(p1,0,0xb,0);
  fn_828E08A0(p1,0,0xc,0);
}
