typedef unsigned char bool;
extern int fn_83006E68();
extern int fn_8302AF48();
extern int fn_8302AFF8();
extern int fn_8302B0A8();
extern int fn_8302B158();
extern unsigned int iStack_20;


unsigned __int64 fn_83007888(int param_1,__int64 param_2)

{
  bool bVar1;
  int iVar2;
  int iStack_20;
  
  iVar2 = fn_83006E68();
  if ((iVar2 != 0) && ((*(unsigned char *)(param_1 + 0x3d) & 4) != 0)) {
    if ((param_2 - 1U & 0xffffffff) < 8) {
      bVar1 = (int)(param_2 - 1U) != 0;
      if (param_2 == 2 && bVar1) {
        iStack_20 = fn_8302AFF8();
      }
      else if (param_2 != 3 || !bVar1) {
        if (param_2 == 4 && bVar1) {
          iStack_20 = fn_8302B0A8();
        }
        else if (((param_2 != 5 || !bVar1) && (param_2 != 6 || !bVar1)) && (param_2 != 7 || !bVar1))
        {
          if (bVar1) {
            iStack_20 = fn_8302B158();
          }
          else {
            iStack_20 = fn_8302AF48();
          }
        }
      }
    }
    if (iStack_20 == 1) {
      return 0;
    }
  }
  return 1;
}

