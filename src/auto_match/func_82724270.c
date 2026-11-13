extern int fn_8267C498();
extern __int64 fn_8278FDC8();

typedef struct {
  int a0;
  int refs;
} Obj;

unsigned __int64 fn_82724270(int param_1)
{
  int iVar1;
  Obj *o;
  unsigned __int64 uVar2;

  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if (iVar1 != 0) {
    o = *(Obj **)(iVar1 + 0x14);
    if (o != 0) {
      o->refs = o->refs + 1;
      uVar2 = fn_8278FDC8((int)o + 0x14);
      fn_8267C498(o);
      return uVar2;
    }
  }
  return 0;
}
