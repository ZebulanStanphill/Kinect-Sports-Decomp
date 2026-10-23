extern void fn_828E07B0();
extern void fn_828E08A0();
extern unsigned __int64 fn_828AC950();

void fn_828E1760(int p1, int p2, int p3, int p4, int p5, unsigned char p6, int p7, unsigned char p8,
                 unsigned char p9, int p10, unsigned char p11, unsigned char p12)
{
  unsigned int v;
  fn_828E07B0(p1,0,p2,0x24);
  fn_828E07B0(p1,1,p3,8);
  fn_828E07B0(p1,2,p4,0x10);
  fn_828E08A0(p1,1,3,0);
  fn_828E08A0(p1,0,4,0);
  fn_828E08A0(p1,p5,5,0);
  fn_828E08A0(p1,p6,6,0);
  v = (unsigned int)fn_828AC950(p7);
  fn_828E08A0(p1,v,7,0);
  fn_828E08A0(p1,p8,8,0);
  fn_828E08A0(p1,p9,9,0);
  fn_828E08A0(p1,p10,10,0);
  fn_828E08A0(p1,p11,0xb,0);
  fn_828E08A0(p1,p12,0xc,0);
}
