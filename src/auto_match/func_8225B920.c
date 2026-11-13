typedef unsigned char bool;
extern int fn_82522ED8();
extern int fn_825231B8();
extern int fn_82A1DD38();
extern unsigned int lbl_83265A38;


bool fn_8225B920(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)((param_2 & 0xffffffff) << 3);
  bVar1 = *(int *)((int)&lbl_83265A38 + iVar2) <= param_4 << 3;
  if (bVar1) {
    iVar3 = fn_825231B8();
    fn_82A1DD38(*(unsigned int *)(iVar3 + 8),param_3,
                      ((unsigned __int64)*(unsigned int *)((int)&lbl_83265A38 + iVar2) + 7 & 0xffffffff) >> 3);
    fn_82A1DD38(*(unsigned int *)
                       (*(int *)((int)((param_2 + 0x3c & 0xffffffff) << 2) + param_1) + 8),
                      *(unsigned int *)(iVar3 + 8),*(unsigned int *)(iVar3 + 4));
    fn_82522ED8(iVar3);
  }
  return bVar1;
}

