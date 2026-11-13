extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_828095F8();
extern unsigned int lbl_82195628;
extern unsigned int ltcg_pool_0_0f;


double fn_8255A2F8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  
  fVar1 = in_register_00010020 * in_register_00010010 +
          in_register_00010028 * in_register_00010018 + in_register_00010024 * in_register_00010014;
  fVar2 = SQRT(in_register_00010020 * in_register_00010020 +
               in_register_00010028 * in_register_00010028 +
               in_register_00010024 * in_register_00010024) *
          SQRT(in_register_00010010 * in_register_00010010 +
               in_register_00010018 * in_register_00010018 +
               in_register_00010014 * in_register_00010014);
  if (lbl_82195628 <= fVar2) {
    fVar3 = ABS(fVar1);
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
    dVar4 = (double)fn_828095F8((double)(fVar1 / fVar2));
  }
  else {
    dVar4 = (double)ltcg_pool_0_0f;
  }
  return dVar4;
}

