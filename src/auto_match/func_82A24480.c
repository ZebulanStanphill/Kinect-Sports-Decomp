typedef struct { unsigned sev : 1; unsigned fac : 15; unsigned code : 16; } HR_82A24480;
typedef struct { char pad0[0x14]; int m14; char pad1[0x1c - 0x18]; unsigned int flags; } Obj_82A24480;
extern int fn_82A23B20(Obj_82A24480 *o, int a, char *buf, int n);
extern int fn_82A2A958(char *buf);
extern unsigned int fn_82A1F470(void);
extern void fn_82A1F728(void);
extern void fn_82A21368(int a, Obj_82A24480 *o);
extern void fn_82A1CFC8(void);
extern int lbl_83219B90[];

unsigned int fn_82A24480(Obj_82A24480 *o)
{
  char buf[256];
  HR_82A24480 h;

  if ((o->flags & 0x40) != 0) {
    fn_82A23B20(o, 1, buf, 0x100);
    if (fn_82A2A958(buf) == 0) {
      h.sev = 1;
      h.code = 0;
      h.fac = (unsigned)fn_82A1F728;
      return fn_82A1F470() | *(unsigned *)&h;
    }
    o->m14 = 0;
    o->flags = o->flags & 0xffffffbf;
    fn_82A21368(lbl_83219B90[1], o);
    fn_82A1CFC8();
  }
  return 0;
}
