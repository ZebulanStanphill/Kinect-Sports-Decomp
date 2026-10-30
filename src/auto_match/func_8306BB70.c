extern unsigned int lbl_831BCA64;
extern unsigned int lbl_832650B8;
extern void KeTlsFree(unsigned);

void fn_8306BB70(void)
{
  unsigned t = lbl_832650B8;
  t = t ? 0 : t;
  lbl_832650B8 = t;
  if (lbl_831BCA64 != -1) {
    KeTlsFree(lbl_831BCA64);
    lbl_831BCA64 = -1;
  }
}
