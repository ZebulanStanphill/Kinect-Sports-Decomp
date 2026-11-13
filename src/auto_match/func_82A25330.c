extern int fn_82A1E810();
extern int fn_82A20688();
extern int fn_82A247C0();
extern int fn_82A250F8();
extern unsigned char lbl_83219B90[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int lbl_83219C18;
extern unsigned int *lbl_83219C1C;
extern unsigned int lbl_83219C4C;
extern unsigned int lbl_83219C60;


void fn_82A25330(unsigned int *param_1)

{
  unsigned iVar1;
  
  RtlEnterCriticalSection((lbl_83219B90+0x10));
  if ((*(int *)(lbl_83219B90+0xbc)) != 0) {
    param_1[5] = 0xc0000001;
  }
  if ((*(unsigned int *)(*(int *)param_1[3] + 0x1c) & 1) != 0) {
    param_1[5] = 0xc0000120;
  }
  if ((param_1[5] & 0xc0000000) == 0xc0000000) {
    fn_82A247C0(param_1);
  }
  else {
    iVar1 = param_1[0xf];
    if (iVar1 != 0) {
      param_1[0xf] = 0;
      *(unsigned int *)(iVar1 + 8) = 0;
      *(unsigned int *)(iVar1 + 0xc) = param_1[3];
      *(int (***)())(iVar1 + 0x10) = fn_82A25330;
      *(unsigned __int64 *)(iVar1 + 0x28) =
           (unsigned __int64)*(unsigned int *)(param_1[8] + 0x24) + *(__int64 *)(param_1 + 10);
      **(int **)(iVar1 + 0x40) = **(int **)(iVar1 + 0x40) + 1;
      fn_82A20688(iVar1);
    }
    param_1[2] = 1;
    param_1[4] = fn_82A250F8;
    RtlEnterCriticalSection((lbl_83219B90+0x10));
    { unsigned *tail=*(unsigned **)(lbl_83219B90+0x8c);
    *param_1=(unsigned)(lbl_83219B90+0x88); param_1[1]=(unsigned)tail;
    *tail=(unsigned)param_1;
    *(unsigned **)(lbl_83219B90+0x8c)=param_1;
    *(unsigned *)(lbl_83219B90+0xd0)|=1; }
    RtlLeaveCriticalSection((lbl_83219B90+0x10));
    fn_82A1E810((*(unsigned *)(lbl_83219B90+0x34)));
  }
  RtlLeaveCriticalSection((lbl_83219B90+0x10));
  return;
}