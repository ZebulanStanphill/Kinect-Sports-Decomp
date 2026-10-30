extern void fn_822315A0(unsigned int x);
extern void fn_822B5CE8(unsigned int *p);
extern void fn_822E6008(unsigned int *p, unsigned int x);
extern unsigned int lbl_821ADF14;


void fn_822E41C8(unsigned int *p)
{
  p[0] = (unsigned int)&lbl_821ADF14;
  fn_822E6008(p,p[0x83]);
  p[0x83] = 0;
  fn_822E6008(p,p[0x84]);
  p[0x84] = 0;
  { unsigned int *q = p + 0x9e; *q = 0; }
  if (p[0xb3] != 0) {
    fn_822315A0(p[0xb3]);
  }
  if (p[0xb1] != 0) {
    fn_822315A0(p[0xb1]);
  }
  if (p[0xae] != 0) {
    fn_822315A0(p[0xae]);
  }
  if (p[0xac] != 0) {
    fn_822315A0(p[0xac]);
  }
  if (p[0x9c] != 0) {
    fn_822315A0(p[0x9c]);
  }
  if (p[0x9a] != 0) {
    fn_822315A0(p[0x9a]);
  }
  if (p[0x82] != 0) {
    fn_822315A0(p[0x82]);
  }
  if (p[0x80] != 0) {
    fn_822315A0(p[0x80]);
  }
  if (p[0x7e] != 0) {
    fn_822315A0(p[0x7e]);
  }
  if (p[0x7c] != 0) {
    fn_822315A0(p[0x7c]);
  }
  if (p[0x7a] != 0) {
    fn_822315A0(p[0x7a]);
  }
  if (p[0x78] != 0) {
    fn_822315A0(p[0x78]);
  }
  if (p[0x76] != 0) {
    fn_822315A0(p[0x76]);
  }
  if (p[0x74] != 0) {
    fn_822315A0(p[0x74]);
  }
  if (p[0x6b] != 0) {
    fn_822315A0(p[0x6b]);
  }
  if (p[0x69] != 0) {
    fn_822315A0(p[0x69]);
  }
  fn_822B5CE8(p);
}

