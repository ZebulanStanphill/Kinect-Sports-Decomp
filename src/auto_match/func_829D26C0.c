typedef struct { char b[0x500]; } S;
extern void fn_829DAB78(S *);
extern S *lbl_832178F0;
void fn_829D26C0(void)
{
  unsigned int i;
  for (i = 0; i < 6; i++) fn_829DAB78(&lbl_832178F0[i]);
}
