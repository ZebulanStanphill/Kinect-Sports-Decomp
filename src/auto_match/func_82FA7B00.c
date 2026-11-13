extern int fn_82FA79C0();
extern int fn_82FE7CA0();
extern int fn_82FE7CB0();
extern int fn_82FE7CC0();
extern int fn_82FE7CD0();


extern int fn_82FA7340();

extern int fn_82FA7610();

extern int fn_82FAC4B8();

extern int fn_82FA6E98();

unsigned __int64 fn_82FA7B00(void)

{
  unsigned int iVar1;
  
  iVar1 = fn_82FA79C0();
  if (iVar1 != 0) {
    fn_82FE7CA0(fn_82FA7340);
    fn_82FE7CB0(fn_82FA7610);
    fn_82FE7CC0(fn_82FAC4B8);
    fn_82FE7CD0(fn_82FA6E98);
    return 1;
  }
  return 2;
}

