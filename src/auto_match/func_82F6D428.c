extern unsigned int *auStack_10;
extern int _tmpfile_helper();


unsigned int tmpfile(void)

{
  unsigned int auStack_10;
  
  auStack_10 = 0;
  _tmpfile_helper(&auStack_10,0x40);
  return auStack_10;
}

