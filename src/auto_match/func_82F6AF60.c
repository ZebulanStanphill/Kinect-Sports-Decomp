#define true 1
extern unsigned int *auStack_30;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F704C8();
extern int fn_82F81918();
extern unsigned int lbl_82005710;
extern unsigned int lbl_831BBCA8;


unsigned __int64 fn_82F6AF60(unsigned char *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char *puVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_30 [24];
  
  puVar4 = lbl_831BBCA8;
  if (param_1 == (unsigned char *)0x0) {
    puVar1 = (unsigned int *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
    uVar5 = lbl_82005710;
  }
  else {
    while( true ) {
      if (*(int *)(puVar4 + 0xac) < 2) {
        uVar2 = *(unsigned short *)((unsigned int)*param_1 * 2 + *(int *)(puVar4 + 200)) & 8;
      }
      else {
        uVar2 = fn_82F704C8(*param_1,8,0xffffffff831bbca8);
        puVar4 = lbl_831BBCA8;
      }
      if (uVar2 == 0) break;
      param_1 = param_1 + 1;
    }
    iVar3 = fn_82F81918(auStack_30,param_1,0xffffffff831bbca8);
    uVar5 = *(unsigned __int64 *)(iVar3 + 0x10);
  }
  return uVar5;
}

