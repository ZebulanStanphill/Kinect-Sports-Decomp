typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_82693A48();
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64
fn_82684C50(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  bool bVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned int auStack_40;
  
  auStack_40 = 0;
  lVar3 = fn_8267B890(lbl_831E7E64,0xc,0);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    fn_8268C510(&auStack_40,param_2);
    uVar4 = fn_82693A48(lVar3,&auStack_40,param_3,param_4);
    lVar3 = ((unsigned __int64)auStack_40 & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar6 = (unsigned int *)lVar3;
      uVar5 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
        *puVar6 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
    if (uVar5 == 1) {
      fn_8267BE38();
    }
  }
  return uVar4;
}

