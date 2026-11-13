#define true 1
extern unsigned int *auStack_20;
extern int fn_8281B938();
extern int fn_828223C8();
extern int fn_82822798();


void fn_82818620(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int auStack_20 [4];
  
  auStack_20[0] = fn_82822798();
  while( true ) {
    fn_828223C8(auStack_20[0],auStack_20);
    if (auStack_20[0] == 0) break;
    fn_8281B938(param_2,0,*(unsigned int *)(auStack_20[0] + 0x2c),
                      *(unsigned int *)(auStack_20[0] + 0x30),auStack_20[0],0);
  }
  return;
}

