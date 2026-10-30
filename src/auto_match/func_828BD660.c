typedef struct VT_828BD660 {
  char pad0[0x54]; void (*f54)(void *, int);
  char pad1[0x18]; unsigned char (*f70)(void *);
} VT_828BD660;
typedef struct Obj_828BD660 { VT_828BD660 *vt; char pad[0x68]; int f6c; } Obj_828BD660;
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55C0();
extern int fn_828B5608();
extern int fn_828B57E8();

void fn_828BD660(Obj_828BD660 *p, int param_2)
{
  int uVar1;
  char a[8];
  char b[8];

  if (p->vt->f70(p) != 0) {
    fn_828B5608(a);
    fn_828B57E8(a, p->f6c, param_2);
    uVar1 = fn_828B5580(b, a);
    fn_828B55C0((char *)p + 0x60, uVar1);
    fn_828B55B0(uVar1);
    fn_828B55B0(a);
  }
  p->vt->f54(p, param_2);
}
