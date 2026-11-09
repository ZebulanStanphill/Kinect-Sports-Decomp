extern void *fn_8265C9E0(int);
extern void fn_824B4310(void *, int);
extern char lbl_821C0354[];
/* The game code's 0.0f (its link-time code generation pool copy), read by name: written as the
   literal 0.0f, its load is scheduled differently and the unit reaches 89.7%. */
extern float ltcg_pool_0_0f;

typedef struct Rect_824B5380 { float a, b, c, d; } Rect_824B5380;
typedef struct Obj_824B5380 {
  char *vt;
  char pad[0x44];
  int f48;
  Rect_824B5380 r;
} Obj_824B5380;

Obj_824B5380 *fn_824B5380(int a)
{
  Obj_824B5380 *p = (Obj_824B5380 *)fn_8265C9E0(0x5c);
  if (p != 0) {
    float f;
    Rect_824B5380 *r;
    fn_824B4310(p, a);
    p->f48 = 0;
    f = ltcg_pool_0_0f;
    p->vt = lbl_821C0354;
    r = &p->r;
    r->a = f;
    r->b = f;
    r->c = f;
    r->d = f;
    return p;
  }
  return 0;
}
