typedef struct { unsigned first; int second; } P_826DF328;
typedef struct { int *p; int idx; } I_826DF328;
typedef struct { P_826DF328 pr; I_826DF328 it; } L_826DF328;
extern void fn_826D9530(I_826DF328 *, int, P_826DF328 *);
extern void fn_826DD060(int, int, P_826DF328 *);
extern void fn_826DEF90(int, unsigned, unsigned);
extern void RtlEnterCriticalSection(int);
extern void RtlLeaveCriticalSection(int);

void fn_826DF328(int param_1,unsigned param_2,unsigned param_3,unsigned param_4)
{
  unsigned iVar1;
  L_826DF328 l;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x74) < 2) {
    iVar1 = param_1;
    RtlEnterCriticalSection(param_1 + 0xac);
  }
  fn_826DEF90(param_1 + 0xcc,param_2,param_4);
  l.pr.first = param_2;
  fn_826D9530(&l.it,param_1 + 0xcc,&l.pr);
  l.pr.first = param_3;
  l.pr.second = l.it.idx * 0x14 + *l.it.p + 0x10;
  fn_826DD060(param_1 + 0xd0,param_1 + 0xd0,&l.pr);
  if (iVar1 != 0) {
    RtlLeaveCriticalSection(iVar1 + 0xac);
  }
}
