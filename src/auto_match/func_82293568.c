extern int fn_822315A0();
extern int fn_82292450();
extern int fn_8229AA08();
extern int fn_8229AE10();
extern int fn_82526C70();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int lbl_821AA7BC;

typedef struct { int a; unsigned int b; int c; int d; } Tmp_82293568;

unsigned int *fn_82293568(unsigned int *self, unsigned int flags)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *iVar3;
  unsigned int *puVar4;
  int i;
  char buf[0x20];
  Tmp_82293568 tmp;

  *self = (unsigned int)&lbl_821AA7BC;
  i = 0;
  do {
    fn_82526C70(buf, 0x20, "avatar_head_team%d", i);
    puVar4 = (unsigned int *)fn_8229AE10(&tmp, self);
    uVar1 = *puVar4;
    iVar2 = fn_8266F6B8();
    fn_826728E8(uVar1, buf, iVar2);
    if (tmp.b != 0) {
      fn_822315A0(tmp.b);
    }
    i++;
  } while (i < 8);
  iVar3 = (unsigned int *)self[0x615];
  if (iVar3 != 0) {
    if (iVar3[3] != 0) {
      fn_822315A0(iVar3[3]);
    }
    fn_8265CA20(iVar3);
  }
  if (self[0x613] != 0) {
    fn_82292450(self[0x613], 1);
  }
  if (self[0x612] != 0) {
    fn_82292450(self[0x612], 1);
  }
  if (self[0x611] != 0) {
    fn_82292450(self[0x611], 1);
  }
  fn_8229AA08(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}
