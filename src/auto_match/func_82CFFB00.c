typedef struct VT2c_82CFFB00 { int pad[11]; int (*f2c)(void *, int, int); } VT2c_82CFFB00;
typedef struct Svc_82CFFB00 { VT2c_82CFFB00 *vt; } Svc_82CFFB00;
typedef struct Ctx_82CFFB00 { char pad[0x10]; Svc_82CFFB00 *svc; } Ctx_82CFFB00;
typedef struct VT14_82CFFB00 { int pad[5]; void (*f14)(void *, int, int, int, int, int); } VT14_82CFFB00;
typedef struct Obj_82CFFB00 { VT14_82CFFB00 *vt; } Obj_82CFFB00;

extern int fn_82CEB1A8(int);
extern Ctx_82CFFB00 *fn_82CE5410(void);

void fn_82CFFB00(Obj_82CFFB00 *param_1, int param_2, int param_3, int param_4)
{
  if ((param_4 & 1) == 0) {
    int a = fn_82CEB1A8(param_2);
    Svc_82CFFB00 *svc = fn_82CE5410()->svc;
    int b = svc->vt->f2c(svc, param_3, a);
    param_1->vt->f14(param_1, 0, 0, param_3, a, b);
  }
}
