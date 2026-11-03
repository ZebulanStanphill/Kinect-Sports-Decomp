typedef struct Out_822A2E90 { int *px; int *rep; } Out_822A2E90;
typedef struct In_822A2E90 {
  int kind;
  int w4;
  int w8;
  char pad[0x1c - 0xc];
  int w1c;
} In_822A2E90;
extern int fn_8227F950();
extern int fn_8227FC90();
extern int fn_82356F98();
extern int fn_82520158();
extern int *fn_8265C9E0(int);
extern char lbl_821A8D8C[];

Out_822A2E90 *fn_822A2E90(Out_822A2E90 *out, In_822A2E90 *in, int *flag)
{
  int k;
  int uVar2;
  int *p;
  char buf[16];

  *flag = 1;
  k = in->kind;
  if (k == 2 || k == 3 || k == 4 || k == 5 || k == 6 || k == 7) {
    *flag = 0;
    fn_82520158("loadingscreen_sportflash", buf, 0);
    uVar2 = *(int *)(*(int *)((char *)in + (in->kind * 4 + 0x89) * 4) + *(int *)((char *)in + 0x2a4) * 8);
    p = fn_8265C9E0(0x140);
    if (p != 0) {
      p[1] = 1;
      p[2] = 1;
      p[0] = (int)lbl_821A8D8C;
      if (p + 4 != 0) fn_8227F950(p + 4, buf, uVar2, in->w4);
      goto done;
    }
  } else if (k == 1) {
    *flag = 1;
    fn_82520158("loadingscreen_quitsportflash", buf, 0);
    p = fn_8265C9E0(0x140);
    if (p != 0) {
      p[1] = 1;
      p[2] = 1;
      p[0] = (int)lbl_821A8D8C;
      if (p + 4 != 0) fn_8227FC90(p + 4, buf, (char *)in + 0x1c);
      goto done;
    }
  } else {
    *flag = 0;
    fn_82356F98(out);
    return out;
  }
  p = 0;
done:
  out->rep = p;
  out->px = p + 4;
  return out;
}
