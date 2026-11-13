extern int fn_822315A0();
extern int fn_828C24F0();
extern int fn_828C2670();
extern unsigned char fn_828EDCF8();
typedef struct P_828B6820 { int first; unsigned int second; } P_828B6820;

unsigned char fn_828B6820(int param_1,int param_2,int param_3)
{
  unsigned char uVar1;
  unsigned char bVar2;
  P_828B6820 a;
  P_828B6820 b;

  bVar2 = (*(char *)(param_1 + 0x4c) == 0) && (*(int *)(param_1 + 0x20) == 0);
  uVar1 = bVar2;
  if (bVar2) {
    fn_828C24F0(&a,*(int *)(param_1 + 0x14),param_2);
    fn_828C2670(&b,a.first,param_3);
    uVar1 = fn_828EDCF8(*(int *)(param_1 + 0x50),*(int *)(a.first + 8),*(int *)(b.first + 4));
    if (b.second != 0) {
      fn_822315A0(b.second);
    }
    if (a.second != 0) {
      fn_822315A0(a.second);
    }
  }
  return uVar1;
}
