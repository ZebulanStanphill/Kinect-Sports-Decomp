extern void *lbl_83298F8C[4];
extern unsigned char lbl_83298FA0;
extern void fn_8251E608(void);
extern void fn_8251E6F0(void);
extern void fn_825918A0(void);
extern void fn_82BA02A8(void);

void **fn_825918B8(void)
{
  if (lbl_83298FA0 == 0) {
    lbl_83298F8C[0] = (void *)fn_825918A0;
    lbl_83298F8C[1] = (void *)fn_8251E608;
    lbl_83298F8C[2] = (void *)fn_8251E6F0;
    lbl_83298F8C[3] = (void *)fn_82BA02A8;
    lbl_83298FA0 = 1;
  }
  return lbl_83298F8C;
}
