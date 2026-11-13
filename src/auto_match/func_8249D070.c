typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define NAN(x) ((x) != (x))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
extern unsigned int fStack0000002c;
extern unsigned int fStack_24;
extern int fn_8249D310();
extern unsigned int iStack_20;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D76EC;
extern unsigned int uStack00000028;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_8249D070(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  unsigned int in_stack_00000020;
  unsigned int uStack00000028;
  float fStack0000002c;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  float fStack_24;
  int iStack_20;
  
  fStack_24 = lbl_831D76EC;
  fStack0000002c = (float)param_3;
  iVar2 = *(int *)(param_1 + 0x50);
  fVar3 = fStack0000002c - lbl_831D76EC;
  bVar1 = NAN(ltcg_pool_0_0f);
  bVar4 = fVar3 < ltcg_pool_0_0f;
  *(int *)(param_1 + 0x50) = iVar2 + 1;
  if (*(float *)(&lbl_821954D8 + ((unsigned int)(unsigned char)(bVar4 << 2) | (unsigned int)(NAN(fVar3) || bVar1) << 2)) <
      0.0) {
    fStack_24 = fStack0000002c;
  }
  uStack00000028 = (unsigned int)((unsigned __int64)param_3 >> 0x20);
  _uStack00000028 = CONCAT44(uStack00000028,fStack_24);
  uStack_28 = uStack00000028;
  stack_pair_30.first = in_stack_00000020;
  stack_pair_30.second = param_2;
  iStack_20 = iVar2;
  fn_8249D310(param_1 + 0x30,&stack_pair_30.first);
  return iVar2;
}

