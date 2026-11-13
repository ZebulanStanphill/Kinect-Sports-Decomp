typedef unsigned char bool;
extern unsigned int lbl_8326B37C;
extern unsigned int lbl_8326B390;
extern unsigned int lbl_8328227C;
extern unsigned int lbl_83282280;
extern unsigned int lbl_83282288;
extern unsigned int lbl_8328228C;


unsigned int fn_825C7348(__int64 param_1)

{
  bool bVar1;
  
  bVar1 = (int)param_1 != 0;
  if (param_1 == 1 && bVar1) {
    return lbl_8326B390;
  }
  if (param_1 != 2 || !bVar1) {
    if (param_1 == 3 && bVar1) {
      return lbl_8326B390;
    }
    if (param_1 == 4 && bVar1) {
      return lbl_8328227C;
    }
    if (param_1 == 5 && bVar1) {
      return lbl_83282280;
    }
    if (param_1 == 6 && bVar1) {
      return lbl_83282288;
    }
    if (bVar1) {
      return lbl_8328228C;
    }
  }
  return lbl_8326B37C;
}

