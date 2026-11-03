typedef struct { char pad[4]; int a4; void *p8; } Obj;
extern unsigned char fn_828ACCB0(void *);
extern unsigned char fn_828ACCE8(void *);
extern void fn_828AE818(void *, int);
extern void *fn_82511928(void);
extern void fn_82513D20(void *, int, int);
extern void *lbl_83297810;

void fn_82246748(Obj *o, int p2)
{
  int a4;
  if (fn_828ACCE8(o->p8) != 0 || fn_828ACCB0(o->p8) != 0) {
    fn_828AE818(o->p8, p2);
    a4 = o->a4;
    fn_82513D20(lbl_83297810 != 0 ? lbl_83297810 : fn_82511928(), a4, p2);
  }
}
