extern unsigned int *auStack_120;
extern int fn_828F5960();
extern int fn_828FA8D8();
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_21;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64
fn_82975B00(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned char auStack_120 [255];
  unsigned char uStack_21;
  
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  fn_828F5960(auStack_120,0x100,param_4,&stack0x00000030);
  iVar2 = 0;
  uStack_21 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 3) {
      iVar2 = param_2 + 0x10;
    }
    else if (iVar1 == 6) {
      iVar2 = *(int *)(param_2 + 0x14) + 0x10;
    }
    else if (iVar1 == 0xe) {
      iVar2 = param_2 + 0x30;
    }
  }
  fn_828FA8D8(*(unsigned int *)(param_1 + 0xc4),iVar2,param_3,0xffffffff821c4da8,auStack_120);
  *(unsigned int *)(param_1 + 0xd4) = 1;
  return 0;
}

