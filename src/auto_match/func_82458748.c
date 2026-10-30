typedef struct Obj_82458748 {
  void *owner;
  float f4;
  char sub[0xd8];
  int fe0, fe4, fe8, fec, ff0, ff4, ff8, ffc, f100, f104, f108;
} Obj_82458748;
typedef struct Blk_82458748 {
  void *vt;
  int uses;
  int weaks;
  Obj_82458748 obj;
} Blk_82458748;
typedef struct Ent_82458748 { Obj_82458748 *px; Blk_82458748 *rep; } Ent_82458748;
typedef struct Hold_82458748 { char pad[0x2c]; } Hold_82458748;

extern void *fn_8265C9E0(unsigned int);
extern void fn_824584B8(void *);
extern void fn_822315A0(void *);
extern char lbl_821BAA6C[];
extern float lbl_821CC160;

void fn_82458748(Ent_82458748 *tab, void *param_2)
{
  Blk_82458748 *q;
  Obj_82458748 *obj;
  Ent_82458748 *e;
  Blk_82458748 *old;
  int idx = *(int *)((char *)param_2 + 0x2c);

  q = (Blk_82458748 *)fn_8265C9E0(0x11c);
  if (q != 0) {
    q->uses = 1;
    q->vt = lbl_821BAA6C;
    q->weaks = 1;
    obj = &q->obj;
    if (obj != 0) {
      obj->owner = param_2;
      obj->f4 = lbl_821CC160;
      fn_824584B8(obj->sub);
      obj->fe0 = 0;
      obj->fe4 = 0;
      obj->fe8 = 0;
      obj->ff0 = 0;
      obj->ff4 = 0;
      obj->ff8 = 0;
      obj->f100 = 0;
      obj->f104 = 0;
      obj->f108 = 0;
    }
  } else {
    q = 0;
  }
  obj = &q->obj;
  e = &tab[idx];
  old = e->rep;
  e->rep = q;
  e->px = obj;
  if (old != 0) {
    fn_822315A0(old);
  }
}
