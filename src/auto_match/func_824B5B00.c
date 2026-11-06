extern void *fn_8265C9E0(int);
extern void fn_824B4310(void *, int);
extern char lbl_821C0438[];
extern float lbl_821CC160;

typedef struct Obj_824B5B00 {
  char *vt;
  char pad[0x44];
  float f48;
  float f4c;
  int f50;
  int f54;
  int f58;
} Obj_824B5B00;

Obj_824B5B00 *fn_824B5B00(int a)
{
  Obj_824B5B00 *p = (Obj_824B5B00 *)fn_8265C9E0(0x5c);
  if (p != 0) {
    float f;
    fn_824B4310(p, a);
    p->f50 = 0;
    f = lbl_821CC160;
    p->vt = lbl_821C0438;
    p->f48 = f;
    p->f54 = 0;
    p->f4c = f;
    p->f58 = 0;
    return p;
  }
  return 0;
}
