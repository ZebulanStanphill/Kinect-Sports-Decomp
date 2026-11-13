extern int fn_82E50CB8();
extern int fn_82E50F10();
typedef struct I I;
typedef struct { int f0; void (*AddRef)(I *); void (*Release)(I *); } IVT;
struct I { IVT *vt; };
typedef struct { char pad[0x60]; I *obj; } S;
int fn_82E513A0(S *param_1, I *param_2)
{
  I *o;
  fn_82E50CB8((char *)param_1 + 100);
  o = param_1->obj;
  if (o != 0) {
    o->vt->Release(o);
    param_1->obj = 0;
  }
  if (param_2 != 0) {
    param_1->obj = param_2;
    param_2->vt->AddRef(param_2);
  } else {
    param_1->obj = 0;
  }
  fn_82E50F10((char *)param_1 + 100);
  return 0;
}
