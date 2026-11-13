extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_8267C4F0();
extern int fn_8278E7B0();
extern int fn_8278FD18();
extern int fn_82790678();
extern int fn_82792F70();
extern int fn_82794EE8();
extern unsigned int iStack_30;


void fn_82795EE0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar4;
  unsigned short *puVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar5;
  unsigned int auStack_40 [2];
  unsigned char auStack_38 [8];
  int iStack_30;
  
  cVar4 = fn_8278FD18();
  if (cVar4 == '\0') {
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
    if ((uVar5 != 0) && (cVar4 = fn_8278FD18(param_1), cVar4 != '\0')) {
      uVar5 = uVar5 - 1;
    }
    puVar3 = (unsigned short *)fn_82792F70(param_1,param_2,uVar5,1);
    if (((puVar3 != (unsigned short *)0x0) && (*puVar3 = 0, *(int *)(param_1 + 0x14) == 0)) &&
       ((param_3 & 0xffffffff) != 0)) {
      uVar1 = fn_8278E7B0(param_2,param_3);
      auStack_40[0] = (unsigned int)uVar1;
      uVar2 = fn_82790678(auStack_38,uVar5,1,auStack_40);
      fn_82794EE8(param_1 + 0x10,uVar2);
      if (iStack_30 != 0) {
        fn_8267C4F0();
      }
      if ((uVar1 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar1);
      }
    }
  }
  return;
}

