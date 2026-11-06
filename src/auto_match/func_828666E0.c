typedef struct Iface_83265044 Iface_83265044;
typedef struct IfaceVtbl_83265044 {
  void (*f0)(Iface_83265044 *);
  void (*f4)(Iface_83265044 *);
} IfaceVtbl_83265044;
struct Iface_83265044 { IfaceVtbl_83265044 *vt; };
typedef struct Sub_828666E0 {
  char pad[0x424];
  int state;
} Sub_828666E0;
typedef struct Obj_828666E0 {
  char pad0[0x5a];
  unsigned char active;
  char pad5b[0x60 - 0x5b];
  int handle;
  Sub_828666E0 sub;
} Obj_828666E0;
extern void fn_8286A108(void *sub);
extern void fn_828763C0(void *sub);
extern Iface_83265044 *lbl_83265044;

int fn_828666E0(Obj_828666E0 *o)
{
  Sub_828666E0 *sub = &o->sub;
  fn_828763C0(sub);
  fn_8286A108(sub);
  sub->state = 0;
  if (o->active) {
    if (lbl_83265044 != 0) {
      lbl_83265044->vt->f4(lbl_83265044);
      o->handle = 0;
    }
    o->active = 0;
    return 0x200a0000;
  }
  return 0xa00a0000;
}
