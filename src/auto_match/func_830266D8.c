struct O_830266D8; typedef struct O_830266D8 { struct Vt_830266D8 *vt; } O_830266D8;
struct Vt_830266D8 { void *s[2]; void (*f8)(O_830266D8 *); };
typedef struct {
  int pad0; O_830266D8 *obj; char pad8[0x58];
  int f60; int pad64; int f68; short f6c; short f6e; short f70; short pad72; void *f74; int f78; float f7c; int f80; int f84;
} S_830266D8;
extern void fn_82FA5190(int, void *);
extern int lbl_831BC770;
extern float lbl_82002AE0;
void fn_830266D8(S_830266D8 *param_1, int *param_2)
{
  float t;
  param_1->obj->vt->f8(param_1->obj);
  if (param_1->f74 != 0) fn_82FA5190(lbl_831BC770, param_1->f74);
  param_1->f60 = 0;
  param_1->f6e = 0;
  t = lbl_82002AE0;
  param_1->f6c = 0;
  param_1->f7c = t;
  param_1->f68 = 0x2b;
  param_1->f70 = 0;
  param_1->f74 = 0;
  param_1->f78 = -1;
  param_1->f80 = -1;
  param_1->f84 = 1;
  *param_2 = 0;
}
