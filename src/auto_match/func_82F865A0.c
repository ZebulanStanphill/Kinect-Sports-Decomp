extern int fn_82F819D0();
extern int fn_82F87280();


extern char lbl_831BBCA8[];
typedef struct Loc_82F865A0 { char a30[8]; char a28[8]; } Loc_82F865A0;
unsigned __int64 fn_82F865A0(unsigned __int64 param_1,unsigned __int64 param_2)
{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 r;
  Loc_82F865A0 loc;

  uVar1 = fn_82F819D0(loc.a28,loc.a30,param_2,0,0,0,0,lbl_831BBCA8);
  iVar2 = fn_82F87280(loc.a28,param_1);
  if ((uVar1 & 3) == 0) {
    if (iVar2 == 1) return 3;
    if (iVar2 != 2) return 0;
    return 4;
  } else if ((uVar1 & 1) != 0) return 4;
  r = 3;
  if ((uVar1 & 2) != 0) return r;
  return 0;
}
