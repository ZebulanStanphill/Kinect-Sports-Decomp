extern int fn_8267B890();
extern int fn_826C6A68();
extern unsigned int lbl_831E7E64;

typedef struct Obj {
  int a;
  int b;
  int c[7];
} Obj;

typedef struct Owner {
  char pad[0x1b4];
  Obj *obj;
} Owner;

static Obj *Obj_Init(Obj *o)
{
  o->c[0] = 0;
  o->c[1] = 0;
  o->c[2] = 0;
  o->c[3] = 0;
  o->c[4] = 0;
  o->c[5] = 0;
  o->c[6] = 0;
  o->a = 100;
  o->b = 0;
  return o;
}

void fn_826D0A40(Owner *param_1,int param_2)

{
  Obj *o;
  
  if (param_1->obj == 0) {
    o = (Obj *)fn_8267B890(lbl_831E7E64,0x24,0);
    param_1->obj = o ? Obj_Init(o) : 0;
  }
  param_1->obj->b = param_2;
  fn_826C6A68(param_1);
}
