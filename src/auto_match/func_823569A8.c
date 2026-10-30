extern void fn_8225DBF8(unsigned int, void *);
extern unsigned int fn_8225C590(void);
extern void fn_82292450(unsigned int, int);
extern void fn_823577F0(void *, void *);
extern void fn_824BDE68(void *, int);
extern void fn_82512B70(unsigned int);
extern char lbl_821B2420[];
typedef struct In_823569A8 { void *vt; char pad[0x504]; unsigned int f508; int pad2; int f510; } In;
typedef struct Self_823569A8 { char pad[0x30]; In *f30; char pad2[0x398]; char f3cc[8]; char f3d4[0x1c]; unsigned int f3f0; } Self;
typedef struct Loc_823569A8 { void *vt; char pad[12]; void *self; } Loc;
void fn_823569A8(Self *s)
{
  Loc l;
  In *in;
  if (s->f30 != 0) {
    fn_824BDE68(s->f30, 0);
    in = s->f30;
    *(int *)(*(int *)((int)in->vt + 0x14) + 0x20) = 0;
    in->f510 = 0;
    if (in->f508 != 0) fn_82292450(in->f508, 1);
    in->f508 = 0;
    s->f30 = 0;
  }
  fn_823577F0(s->f3cc, s->f3d4);
  if (s->f3f0 != 0) {
    fn_82512B70(s->f3f0);
    s->f3f0 = 0;
  }
  l.self = &l;
  l.vt = lbl_821B2420;
  fn_8225DBF8(fn_8225C590(), &l);
}
