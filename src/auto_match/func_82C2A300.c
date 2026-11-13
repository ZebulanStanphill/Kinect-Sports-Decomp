extern unsigned int *auStack_40;
extern int fn_82C10AD0();
extern int memset();


void fn_82C2A300(void)

{
  int iVar1;
  unsigned __int64 in_r6;
  unsigned int auStack_40;
  
  auStack_40 = 0;
  iVar1 = fn_82C10AD0(in_r6,0x1f,0x80,&auStack_40);
  if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_40,0,0x80);
  }
  return;
}

