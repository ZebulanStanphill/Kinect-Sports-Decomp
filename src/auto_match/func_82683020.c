extern void fn_82682D30(int, int, void *, int);
extern void fn_826944C8(void *);
extern void *fn_82694700(char *, int);
extern void fn_82696330(void *);

struct Obj;
typedef struct OVT { char pad[0x5c]; int (*f5c)(struct Obj *); } OVT;
typedef struct Obj { OVT *vt; } Obj;
typedef struct Rc { int a; int b; int count; } Rc;
typedef struct Var { unsigned char tag; Rc *rc; int pad[2]; } Var;

void fn_82683020(int param_1, int param_2, int param_3)
{
  int iVar1;
  Rc *rc;
  Var v;
  Obj *o = *(Obj **)(param_1 + 0x68);
  int n;
  iVar1 = o->vt->f5c(o);
  { char *q = (char *)*(int *)(iVar1 + 0x78); char *sub = q + 8; rc = (Rc *)fn_82694700(sub + 0x24c, param_3); }
  rc->count = rc->count + 1;
  v.tag = 5;
  v.rc = rc;
  rc->count = rc->count + 1;
  fn_82682D30(param_1, iVar1, &v, param_2);
  fn_82696330(&v);
  n = rc->count - 1;
  rc->count = n;
  if (n == 0) fn_826944C8(rc);
}
