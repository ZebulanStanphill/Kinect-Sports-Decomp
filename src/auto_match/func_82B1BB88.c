typedef struct {
  unsigned int pad : 4;
  unsigned int fmt : 3;
} Src;

typedef struct {
  char pad0[8];
  unsigned int pad1 : 15;
  unsigned int fmt : 3;
  char pad2[0x2c - 0xc];
  Src *a;
  Src *b;
  Src *c;
} Obj;

typedef struct {
  char pad0[0xc];
  int fc;
  void *f10;
} Arg;

extern int fn_82AC6860();
extern int fn_82AD17B0();
extern Src *fn_82AD1978();
extern Obj *fn_82B841E8();
extern Arg *fn_82ACA920();

Obj *fn_82B1BB88(int param_1,int param_2,int param_3,int param_4,int param_5,Arg *param_6)
{
  Obj *obj;

  obj = fn_82B841E8(param_1,*(int *)(param_3 + 0x1c),0,0xc,3,4);
  obj->a = fn_82AD1978(obj,fn_82AD17B0(param_1,param_4));
  obj->b = fn_82AD1978(obj,fn_82AD17B0(param_1,param_5));
  obj->c = fn_82AD1978(obj,param_6->f10 != 0 ? fn_82ACA920(param_1,param_6,param_6->fc) : param_6);
  obj->fmt = obj->a->fmt ? obj->a->fmt : 0;
  fn_82AC6860(param_1,obj,param_2,param_3);
  return obj;
}
