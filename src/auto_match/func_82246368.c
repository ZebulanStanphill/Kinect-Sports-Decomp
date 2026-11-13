extern int fn_82250A18();
extern float *fn_82292AE8();
extern int fn_82512B70(void *);
extern int fn_825132E0(void *);
extern unsigned int lbl_8219793C;
extern unsigned int lbl_832975B0;

typedef struct Obj_82246368 {
  void *vt;
  char pad[0x48 - 4];
  void *f48;
} Obj_82246368;

void fn_82246368(Obj_82246368 *param_1)
{
  float *pf;
  unsigned iVar1;

  param_1->vt = &lbl_8219793C;
  pf = fn_82292AE8();
  if (pf[0x5c / 4] == 0.0f) {
    pf[0x5c / 4] = 100.0f;
  }
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  *(unsigned char *)(iVar1 + 4) = 0;
  if (param_1->f48 != 0) {
    fn_82512B70(param_1->f48);
    param_1->f48 = 0;
  }
  fn_825132E0(param_1);
}
