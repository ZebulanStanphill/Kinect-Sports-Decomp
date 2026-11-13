typedef unsigned char bool;
#define true 1
extern int fn_822CF710();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821929B0;


bool fn_822CDE58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  float fVar1;
  int iVar3;
  __int64 lVar2;
  bool bVar4;
  double dVar5;
  
  fVar1 = lbl_821929B0;
  if ((int)param_4 != 0) {
    fVar1 = lbl_821917C0;
  }
  dVar5 = (double)fVar1;
  iVar3 = fn_822CF710(param_1,dVar5,param_2,param_3,0xb,0xd,param_6,param_4);
  if (iVar3 == 0) {
    lVar2 = fn_822CF710(param_1,dVar5,param_2,param_3,10,0xc,param_6,param_4);
    bVar4 = lVar2 != 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

