typedef int (*VFunc_82514CC8)(void *self);

typedef struct Vtbl_82514CC8 {
  char pad[0x70];
  VFunc_82514CC8 f70;
} Vtbl_82514CC8;

typedef struct Obj_82514CC8 {
  Vtbl_82514CC8 *vt;
} Obj_82514CC8;

extern int fn_828A50E0(void *self);
extern int fn_828BCB88(void *self, unsigned int id, int flag, char *name);
extern int fn_828C37F0(void *self, char *group, unsigned int id, char *name);
extern unsigned int lbl_8326C06C;
extern unsigned int lbl_8326C290;
extern unsigned int lbl_8326C294;
extern unsigned int lbl_8326C298;
extern unsigned int lbl_8326C29C;
extern char lbl_83295F18[];
extern char lbl_8329EAB0[];
extern char lbl_8329EA94[];
extern char lbl_8329EA78[];
extern char lbl_8329EA5C[];
extern char lbl_8329EA40[];

void fn_82514CC8(Obj_82514CC8 *param_1)
{
  fn_828A50E0(param_1);
  fn_828C37F0(param_1, lbl_83295F18, lbl_8326C29C, lbl_8329EAB0);
  fn_828C37F0(param_1, lbl_83295F18, lbl_8326C298, lbl_8329EA94);
  fn_828BCB88(param_1, lbl_8326C294, 1, lbl_8329EA78);
  fn_828BCB88(param_1, lbl_8326C290, 1, lbl_8329EA5C);
  fn_828BCB88(param_1, lbl_8326C06C, 1, lbl_8329EA40);
  param_1->vt->f70(param_1);
}
