#define true 1
extern unsigned int *auStack_20;
extern int fn_82818CE0();
extern int fn_828223C8();


extern char lbl_8320A5DC[];
void fn_82819060(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int auStack_20 [4];
  
  uVar1 =lbl_8320A5DC;
  while( true ) {
    fn_828223C8(uVar1,auStack_20);
    if (auStack_20[0] == 0) break;
    fn_82818CE0(auStack_20[0],param_1);
    uVar1 = (unsigned __int64)auStack_20[0];
  }
  return;
}

