#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_38 ((*(unsigned __int64*)&fStack_38))
#define _fStack_40 ((*(unsigned __int64*)&fStack_40))
#define _fStack_48 ((*(unsigned __int64*)&fStack_48))
extern unsigned int *auStack_50;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82270220();
extern int fn_82270B70();
extern int fn_8227E638();
extern int fn_8227E790();
extern int fn_8247FF88();


void fn_82483100(int param_1)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  __int64 lVar4;
  float fStack_70;
  float fStack_6c;
  struct { float first; float second; } stack_pair_68;

  float fStack_60;
  float fStack_5c;
  unsigned char auStack_50 [8];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar1 = fn_82270B70();
    for (iVar3 = **(int **)(iVar1 + 0x5c); iVar3 != (*(int **)(iVar1 + 0x5c))[1];
        iVar3 = iVar3 + 0x30) {
      if (*(int *)(*(int *)(iVar3 + 0x24) + 0x530) == 0) {
        return;
      }
    }
    fn_8247FF88(param_1);
  }
  else {
    lVar2 = 0;
    lVar4 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + *(int *)(param_1 + 0x48) + 0x838) != 4) {
        iVar1 = fn_82270220(&fStack_70,&fStack_60,lVar2);
        if (iVar1 != 0) {
          stack_pair_68.first = fStack_60 - fStack_70;
          stack_pair_68.second = fStack_5c - fStack_6c;
          fn_8227E638(*(unsigned int *)(param_1 + 0xec),lVar4,&fStack_70,&stack_pair_68.first);
          _fStack_48 = CONCAT44(fStack_70 + stack_pair_68.first,fStack_6c);
          _fStack_38 = CONCAT44(fStack_70,fStack_6c + stack_pair_68.second);
          _fStack_40 = CONCAT44(fStack_70 + stack_pair_68.first,fStack_6c + stack_pair_68.second);
          fn_8227E790(*(unsigned int *)(param_1 + 0xec),lVar4,auStack_50);
        }
        lVar2 = lVar2 + 1;
      }
      iVar3 = iVar3 + 0x420;
      lVar4 = lVar4 + 1;
    } while (iVar3 < 0x1080);
  }
  return;
}

