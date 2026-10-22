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
} Obj;

extern int fn_82AC6860();
extern int fn_82AD17B0();
extern Src *fn_82AD1978();
extern Obj *fn_82B841E8();

Obj *fn_82B1BAD8(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  Obj *obj;

  obj = fn_82B841E8(param_1,*(int *)(param_3 + 0x1c),0,2,2,4);
  obj->a = fn_82AD1978(obj,fn_82AD17B0(param_1,param_4));
  obj->b = fn_82AD1978(obj,fn_82AD17B0(param_1,param_5));
  obj->fmt = obj->a->fmt ? obj->a->fmt : 0;
  fn_82AC6860(param_1,obj,param_2,param_3);
  return obj;
}
