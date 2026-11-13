extern int _amsg_exit();
extern int _getptd_noexit();


int  _getptd(void)

{
  int lVar1;
  
  lVar1 = _getptd_noexit();
  if (lVar1 == 0) {
    _amsg_exit(0x10);
  }
  return lVar1;
}

