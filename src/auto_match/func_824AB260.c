extern void *fn_8265C9E0(int);
extern void fn_82F53A20(void *, int);
extern char lbl_821BFB3C[];

typedef struct Obj_824AB260 {
  char *vt;
  char pad[0x38];
  int f3c;
  int f40;
  int f44;
  float f48;
} Obj_824AB260;

Obj_824AB260 *fn_824AB260(int a)
{
  Obj_824AB260 *p = (Obj_824AB260 *)fn_8265C9E0(0x4c);
  if (p != 0) {
    float f;
    fn_82F53A20(p, a);
    p->f3c = 0;
    f = 0.0f;
    p->f40 = 0;
    p->f48 = f;
    p->f44 = 0;
    p->vt = lbl_821BFB3C;
    return p;
  }
  return 0;
}
