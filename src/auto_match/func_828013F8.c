extern int fn_827F9E08(void *);
extern void fn_82802488(void *, int, unsigned, int);
extern void fn_828029E8(void *);
extern void fn_82802A40(void *, unsigned short);
extern void fn_82802A48(void *, int);
extern void fn_82802A50(void *, float);
extern void fn_82802A58(void *, int);
extern void fn_82802A68(void *, int);
extern void fn_82802A70(void *, int, int, int);
void fn_828013F8(void *a1, float a2, int a3, int a4, unsigned a5, int a6, int a7, int a8, unsigned short a9, int a10)
{
  char obj[0x30];
  int x;
  fn_828029E8(obj);
  fn_82802A58(obj, a8);
  fn_82802A50(obj, a2);
  fn_82802A68(obj, a10);
  fn_82802A40(obj, a9);
  x = fn_827F9E08(a1);
  switch ((unsigned)x) {
  case 0: fn_82802A48(obj, 0); break;
  case 1: fn_82802A48(obj, 1); break;
  default: break;
  }
  fn_82802A70(obj, a3, a4, a6);
  if (a5 != 0) fn_82802488(obj, a3, a5, 0);
}
