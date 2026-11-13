extern unsigned int *auStack_125;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern int fn_82F674A8();
extern int memcpy();
extern int memset();


unsigned __int64 fn_82E1E288(char *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned int auStack_150 [4];
  unsigned char auStack_140 [27];
  unsigned char auStack_125 [277];
  
  if (*param_1 != '\0') {
    return 1;
  }
  auStack_150[0] = 0;
  lVar1 = fn_82F674A8(auStack_150,param_2,0xffffffff821c550c);
  auStack_150[0] = -(unsigned int)(lVar1 == 0) & auStack_150[0];
  memcpy(auStack_140,0xffffffff8214b9e8,0x1b);
                    /* WARNING: Subroutine does not return */
  memset(auStack_125,0,0xe5);
}

