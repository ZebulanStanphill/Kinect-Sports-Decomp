extern char lbl_821CACCC[];
extern int fn_8262F8D8(void *, int, int, unsigned int, int, unsigned int, unsigned int, int, int);
extern void fn_8262FBD8(void *, unsigned int, int);
extern void fn_8262FEC8(void *);
extern void fn_82545950(void *);
extern void fn_82545A90(void *);
extern void fn_82552B50(void *, int);
typedef struct { char pad[0x18]; unsigned int f18; unsigned int f1c; } B;
typedef struct { void *vt; char pad[0x80]; B *f84; int f88; void *f8c; void *f90; char pad2[0xc7 - 0x94]; char fc7; } O;
void fn_82616FD8(O *o)
{
  B *b = o->f84;
  o->vt = lbl_821CACCC;
  if (b != 0) {
    unsigned int v = b->f18 & 0xfffffffc;
    o->f88 = fn_8262F8D8(b, 10, 0, v, 0, v, b->f1c & 0x3fffffc, 0, 0x3000000);
    fn_8262FBD8(o->f84, o->f84->f18 & 0xfffffffc, 0);
    fn_8262FEC8(o->f84);
    o->f84 = 0;
    o->f88 = 0;
  }
  if (o->f8c != 0) fn_82545950(&o->f8c);
  if (o->f90 != 0) fn_82545A90(&o->f90);
  if (o->fc7 != 0) fn_82552B50((char *)o + 0xb4, 1);
}
