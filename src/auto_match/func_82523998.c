extern unsigned int *puRam8327f254;
extern void fn_82520158(const char *, void *, int);
extern void fn_82525F28(void *, void *);
extern void fn_8259CA88(void);
extern unsigned int fn_8265C940(int, int);
extern void *fn_8265C9E0(int);
extern void fn_82A1EFC0(void *, int, int);
extern int fn_82A81FE8(int, int, int, int, unsigned int);
extern int fn_82A822A8(int, int, int, unsigned int);
extern unsigned int lbl_821C3058;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_832767EC;
extern char lbl_832767F0[];
extern unsigned int *lbl_8327F254;
extern unsigned int lbl_8327F640;

int fn_82523998(void)
{
  unsigned int uVar1;
  int iVar2;
  unsigned int *p;
  char buf20[4];
  char buf1c[4];

  uVar1 = lbl_8320A898;
  if (lbl_8327F254 == 0) {
    p = (unsigned int *)fn_8265C9E0(4);
    if (p != 0) {
      lbl_8327F254 = p;
      *p = (unsigned int)&lbl_821C3058;
    } else {
      lbl_8327F254 = 0;
    }
  }
  iVar2 = fn_82A81FE8(1, 2, 5, 4, uVar1);
  if (iVar2 >= 0) {
    fn_8259CA88();
    lbl_832767EC = fn_8265C940(0x2000, 0x21006000);
    fn_82A822A8(0, 0, 0x2000, lbl_832767EC);
    fn_82520158("XAvatarDefaultShadowLODModelMale", buf1c, 1);
    fn_82520158("XAvatarDefaultShadowLODModelFemale", buf20, 1);
    fn_82525F28(buf1c, buf20);
    fn_82A1EFC0(lbl_832767F0, 0, 0x8a60);
    lbl_8327F640 = 1;
    iVar2 = 0;
  }
  return iVar2;
}
