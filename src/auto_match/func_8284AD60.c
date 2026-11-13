extern unsigned int *auStack_10;
extern int fn_82230218();
extern int fn_82230300();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int lbl_821961F0;


int fn_8284AD60(int param_1,int param_2)

{
  int iStack00000014;
  int iStack0000001c;
  unsigned char auStack_10 [4];
  unsigned char *puStack_c;
  
  puStack_c = auStack_10;
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  fn_82230300(param_1,0,0);
  fn_82230218(iStack00000014,iStack0000001c,0,lbl_821961F0);
  *(unsigned int *)(iStack00000014 + 0x1c) = *(unsigned int *)(iStack0000001c + 0x1c);
  return iStack00000014;
}

