#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_48 ((*(unsigned __int64*)&fStack_48))
#define _fStack_50 ((*(unsigned __int64*)&fStack_50))
#define _fStack_58 ((*(unsigned __int64*)&fStack_58))
extern unsigned int *auStack_60;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82265CC8();
extern int fn_82266000();
extern int fn_8227E638();
extern int fn_8227E790();
extern int fn_82A1DD38();


void fn_82267AC0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  float fStack_80;
  float fStack_7c;
  struct { float first; float second; } stack_pair_78;

  float fStack_70;
  float fStack_6c;
  unsigned char auStack_60 [8];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  uVar5 = 0;
  piVar1 = *(int **)*param_1;
  if (piVar1 != (int *)*param_1) {
    iVar4 = 0;
    do {
      iVar2 = piVar1[2];
      iVar3 = fn_82266000(iVar2,&fStack_80,&fStack_70);
      if (iVar3 != 0) {
        stack_pair_78.first = fStack_70 - fStack_80;
        stack_pair_78.second = fStack_6c - fStack_7c;
        fn_8227E638(param_1[6],*(unsigned int *)(iVar2 + 0x40),&fStack_80,&stack_pair_78.first);
        _fStack_58 = CONCAT44(fStack_80 + stack_pair_78.first,fStack_7c);
        _fStack_48 = CONCAT44(fStack_80,fStack_7c + stack_pair_78.second);
        _fStack_50 = CONCAT44(fStack_80 + stack_pair_78.first,fStack_7c + stack_pair_78.second);
        fn_8227E790(param_1[6],uVar5,auStack_60);
        iVar3 = *(int *)(param_1[6] + 0xc);
        if ((uVar5 & 0xffffffff) < (unsigned __int64)(unsigned int)(*(int *)(param_1[6] + 0x10) - iVar3 >> 2)) {
          iVar3 = *(int *)(iVar4 + iVar3);
          fn_82A1DD38(iVar3 + 0x94,iVar2 + 0x544,0x60);
          *(unsigned int *)(iVar3 + 0xf4) = 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      }
      if (*(int *)(iVar2 + 0xdc) != 0) {
        fn_82265CC8(iVar2);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return;
}

