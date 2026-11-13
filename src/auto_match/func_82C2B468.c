#define true 1
extern unsigned int lbl_83175B78;


unsigned __int64 fn_82C2B468(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned char bVar2;
  
  bVar2 = 0;
  uVar1 = 0xffffffff80500003;
  do {
    if (*(int (***)())(&lbl_83175B78)[(char)bVar2] != (int (**)())0x0) {
      uVar1 = (**(int (***)())(&lbl_83175B78)[(char)bVar2])(param_1,param_2);
      if (-1 < (int)uVar1) {
        return uVar1;
      }
      if ((uVar1 & 0xffffffff) != 0x80500003) {
        return uVar1;
      }
    }
    bVar2 = bVar2 + 1;
    if (1 < bVar2) {
      return uVar1;
    }
  } while( true );
}

