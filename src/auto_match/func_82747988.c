typedef struct { unsigned char type; char pad[15]; } Buf_82747988;
typedef struct Rc_82747988 { int pad[2]; unsigned int cnt; } Rc_82747988;
typedef struct Obj_82747988 Obj_82747988;
typedef struct {
  int pad[2];
  int (*f8)(Obj_82747988 *);
  int pad2[13];
  int (*f40)(Obj_82747988 *);
} Vt_82747988;
struct Obj_82747988 { Vt_82747988 *vt; };
typedef struct { int pad0; int f4; Obj_82747988 *f8; int pad[3]; int f18; int f1c; } Self_82747988;
extern int fn_8267B890(int, int, int);
extern int fn_826824B0(void *);
extern int fn_826957D0(Self_82747988 *, int);
extern int fn_82695FA0(Buf_82747988 *, int);
extern int fn_82696330(Buf_82747988 *);
extern int fn_82696BC8(int, void *);
extern int fn_82745128(void *, int, Buf_82747988 *);
extern void *fn_82746C20(int, int);

void fn_82747988(Self_82747988 *param_1)
{
  Rc_82747988 *iVar3;
  Rc_82747988 *rc;
  Rc_82747988 *t;
  Obj_82747988 *o;
  int i;
  Buf_82747988 *p;
  Buf_82747988 e[4];
  unsigned int uVar1;

  if (param_1->f8 == 0 || param_1->f8->vt->f8(param_1->f8) != 0x11 ||
      ((unsigned char)param_1->f8->vt->f40(param_1->f8)) != 0) {
    uVar1 = fn_8267B890(*(int *)(*(int *)(param_1->f18 + 0x78) + 0x288), 0x30, 0);
    t = uVar1 != 0 ? fn_82746C20(uVar1, param_1->f18) : 0;
    iVar3 = t;
  }
  else {
    rc = param_1->f8 != 0 ? (Rc_82747988 *)((char *)param_1->f8 - 0x10) : 0;
    if (rc != 0) {
      rc->cnt = (rc->cnt + 1) & 0x8fffffff;
    }
    iVar3 = rc;
  }
  fn_82696BC8(param_1->f4, iVar3);
  if (param_1->f1c > 0) {
    for (i = 0; i < 4; i++) {
      e[i].type = 0;
    }
    fn_82695FA0(&e[0], fn_826957D0(param_1, 0));
    if (param_1->f1c > 1) {
      fn_82695FA0(&e[1], fn_826957D0(param_1, 1));
      if (param_1->f1c > 2) {
        fn_82695FA0(&e[2], fn_826957D0(param_1, 2));
        if (param_1->f1c > 3) {
          fn_82695FA0(&e[3], fn_826957D0(param_1, 3));
        }
      }
    }
    fn_82745128(iVar3, param_1->f18 + 0x78, &e[0]);
    p = e + 4;
    i = 3;
    do {
      p = p - 1;
      fn_82696330(p);
      i = i - 1;
    } while (i >= 0);
  }
  if (iVar3 != 0) {
    fn_826824B0(iVar3);
  }
}
