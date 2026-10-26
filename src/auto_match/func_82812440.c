extern unsigned char fn_82812268(void *p);
extern int lbl_8320A3F0;
extern char lbl_8320A428[];

void fn_82812440(void)
{
  if (fn_82812268(lbl_8320A428) && lbl_8320A3F0 == 1)
    lbl_8320A3F0 = 2;
}
