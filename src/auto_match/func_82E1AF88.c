extern char lbl_8323AE68[];
extern void fn_82CFFF50(void *, int, char *);
extern void fn_82CFFC80(void *, void *, const char *);
extern int *fn_82CFFEB8(void *, int);
extern int *fn_82CFFD78(void *, int);
extern int *fn_82CFFD88(void *, int);
extern void fn_82E1AA80(int, int, int);
extern void fn_82E1AEC0(int, int, int, int);
extern int fn_82CE5410(void);
extern void fn_82CE5338(int, int);

void fn_82E1AF88(int param_1, int param_2, int param_3)
{
  int *p;
  int v;
  int iVar3;
  char a50[8];
  char a48[8];
  char a40[8];
  char a38[8];
  char a30[16];

  fn_82CFFF50(a50, param_2, lbl_8323AE68);
  fn_82CFFC80(a48, a50, "declaredEnums");
  p = fn_82CFFEB8(a48, 0);
  fn_82E1AA80(param_1, p[0], p[1]);
  fn_82CFFC80(a40, a50, "declaredMembers");
  p = fn_82CFFEB8(a40, 0);
  fn_82E1AEC0(param_1, p[0], p[1], param_3);
  fn_82CFFC80(a38, a50, "defaults");
  p = fn_82CFFD78(a38, 0);
  v = p[0];
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(int *)(iVar3 + 0x10), v);
  fn_82CFFC80(a30, a50, "name");
  p = fn_82CFFD88(a30, 0);
  v = p[0];
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(int *)(iVar3 + 0x10), v);
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(int *)(iVar3 + 0x10), param_2);
}
