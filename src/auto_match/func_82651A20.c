#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern int fn_82F6B030();
extern unsigned int lbl_821954B0;


double fn_82651A20(unsigned __int64 param_1,__int64 param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == 0) {
    fVar1 = (_seed_nan);
  }
  else {
    dVar2 = (double)fn_82F6B030();
    dVar2 = dVar2 * lbl_821954B0;
    dVar3 = (double)fn_82F6B030(param_2);
    fVar1 = (float)(dVar2 / dVar3);
  }
  return (double)fVar1;
}

