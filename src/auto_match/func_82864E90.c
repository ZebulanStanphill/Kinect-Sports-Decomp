extern void *fn_82865170(void);
extern void *lbl_832116DC;
void *fn_82864E90(void)
{
  if (lbl_832116DC == 0) {
    lbl_832116DC = fn_82865170();
  }
  return lbl_832116DC;
}
