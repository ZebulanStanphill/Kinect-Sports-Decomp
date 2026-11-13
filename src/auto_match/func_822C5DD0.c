typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82D7E470();
extern unsigned int lbl_831D84F1;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


unsigned int *
fn_822C5DD0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  char cVar2;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  unsigned __int64 uStack_20;
  
  *param_1 = 0;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack_28 = param_3;
  uStack_20 = param_4;
  cVar2 = fn_82D7E470(&uStack_30);
  if (cVar2 == '\0') {
    if ((unsigned __int64 *)(param_1 + 2) != (unsigned __int64 *)0x0) {
      *(unsigned __int64 *)(param_1 + 2) = uStack_30;
      *(unsigned __int64 *)(param_1 + 4) = uStack_28;
      *(unsigned __int64 *)(param_1 + 6) = uStack_20;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *param_1 = &lbl_831D84F1;
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}

