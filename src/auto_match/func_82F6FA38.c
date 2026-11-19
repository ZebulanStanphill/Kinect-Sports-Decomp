extern int _amsg_exit();
extern int _getptd_noexit();


int  _getptd(void)

{
  int ptd;
  
  ptd = _getptd_noexit();
  if (ptd == 0) {
    _amsg_exit(0x10);
  }
  return ptd;
}

