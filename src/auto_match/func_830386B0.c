typedef struct { int pad[2]; void (*f2)(void *); } VT_830386B0;
typedef struct { VT_830386B0 *vt; } Obj_830386B0;
extern void fn_82FEFE60(void *);
extern void fn_83032D88(void *);
extern int lbl_8217D264;
extern int lbl_8217D268;
extern int lbl_8217D270;

void fn_830386B0(unsigned *param_1)
{
  Obj_830386B0 *o;

  *param_1 = (unsigned)&lbl_8217D270;
  param_1[1] = (unsigned)&lbl_8217D268;
  param_1[3] = (unsigned)&lbl_8217D264;
  o = (Obj_830386B0 *)param_1[0x75];
  o->vt->f2(o);
  if (param_1[0x62] != 0) {
    fn_83032D88((void *)param_1[0x62]);
    param_1[0x62] = 0;
  }
  fn_82FEFE60(param_1);
}
