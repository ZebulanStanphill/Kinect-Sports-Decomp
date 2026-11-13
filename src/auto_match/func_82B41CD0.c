extern int fn_82B40718();
extern int fn_82B41870();
extern int fn_82F6E018();


double fn_82B41CD0(double param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
  iVar1 = fn_82F6E018();
  if ((iVar1 < 1) || (((2 < iVar1 && (iVar1 != 4)) && (iVar1 != 0x200)))) {
    fVar2 = (float)fn_82B41870((float)param_1,5,0xffffffff83223cf0,0x18,0xffffffff820d8098,
                                 0xffffffff820d8198,0xffffffff820d8298,0xffffffff820d8398);
    dVar3 = (double)fVar2;
  }
  else {
    dVar3 = (double)fn_82B40718();
  }
  return dVar3;
}

