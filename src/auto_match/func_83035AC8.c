#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack_4c;
extern int fn_82FF2510();
extern int fn_83015B10();
extern int fn_83017108();
extern int fn_830177C8();
extern unsigned int iStack_48;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_44;


unsigned __int64
fn_83035AC8(int param_1,int param_2,float *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  char cVar1;
  int *piVar2;
  double dVar3;
  unsigned char abStack_50 [4];
  struct { float first; int second; } stack_pair_4c;

  unsigned int uStack_44;

  for (piVar2 = *(int **)(param_1 + 0x10);
      (piVar2 != *(int **)(param_1 + 0x14) && (*piVar2 != *(int *)(param_2 + 0xc)));
      piVar2 = piVar2 + 6) {
  }
  if (((param_4 & 1) != 0) && ((*(unsigned int *)(param_1 + 0x1c) & 1) != 0)) {
    dVar3 = (double)fn_830177C8(lbl_832642FC,param_1,0,param_6);
    *param_3 = (float)(dVar3 + (double)*param_3);
  }
  if (((param_4 & 2) != 0) && ((*(unsigned int *)(param_1 + 0x1c) >> 2 & 1) != 0)) {
    dVar3 = (double)fn_830177C8(lbl_832642FC,param_1,2,param_6);
    param_3[2] = (float)(dVar3 + (double)param_3[2]);
  }
  if (((param_4 & 4) != 0) && ((*(unsigned int *)(param_1 + 0x1c) >> 3 & 1) != 0)) {
    dVar3 = (double)fn_830177C8(lbl_832642FC,param_1,3,param_6);
    param_3[3] = (float)(dVar3 + (double)param_3[3]);
  }
  if (((param_4 & 8) != 0) && ((*(unsigned int *)(param_1 + 0x1c) >> 1 & 1) != 0)) {
    dVar3 = (double)fn_830177C8(lbl_832642FC,param_1,1,param_6);
    param_3[1] = (float)(dVar3 + (double)param_3[1]);
  }
  if ((*(int *)(param_1 + 0x24) != 0) && (piVar2[3] != 0)) {
    abStack_50[0] = 1;
    cVar1 = fn_83017108(lbl_832642FC,*(int *)(param_1 + 0x24),param_6,&stack_pair_4c.first,abStack_50);
    if (cVar1 == '\0') {
      stack_pair_4c.first = *(float *)(param_1 + 0x28);
      abStack_50[0] = 0;
    }
    dVar3 = (double)fn_83015B10((double)stack_pair_4c.first,piVar2 + 3);
    if ((dVar3 != (double)lbl_82005CCC) || (abStack_50[0] != 0)) {
      uStack_44 = (unsigned int)(LZCOUNT((unsigned int)abStack_50[0]) << 0x1a) & 0x80000000 | uStack_44 & 0x3fffffff
      ;
      stack_pair_4c.second = param_1;
      fn_82FF2510(param_5,CONCAT44(param_1,uStack_44));
    }
  }
  return 1;
}
