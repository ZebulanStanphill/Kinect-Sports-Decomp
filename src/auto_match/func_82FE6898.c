extern void *memcpy(void *, const void *, unsigned);
extern int fn_8300F140(void);
extern void fn_8300F208(int, void *, unsigned short);
extern int lbl_832642E4;
typedef struct P_82FE6898 {
  unsigned short a;
  unsigned short type;
  int v;
  unsigned char data[0x24];
} P_82FE6898;
void fn_82FE6898(void *param_1, int param_2)
{
  P_82FE6898 p;
  p.type = 0xb;
  p.v = param_2;
  memcpy(p.data, param_1, 0x24);
  fn_8300F208(lbl_832642E4, &p, fn_8300F140());
}
