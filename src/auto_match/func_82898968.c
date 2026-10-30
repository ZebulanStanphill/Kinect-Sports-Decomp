typedef struct Iface_82898968 { struct IfaceVt_82898968 *vt; } Iface_82898968;
typedef struct IfaceVt_82898968 {
  char pad[4];
  unsigned (*s4)(Iface_82898968 *);
  char pad8[4];
  unsigned (*sc)(Iface_82898968 *);
  char pad10[4];
  unsigned (*s14)(Iface_82898968 *);
} IfaceVt_82898968;
typedef struct Obj_82898968 { char pad[0x20]; unsigned f20; } Obj_82898968;
typedef struct Arg_82898968 { char pad[0xb0]; unsigned fb0; } Arg_82898968;
extern void fn_82898770(Obj_82898968 *, unsigned, int);
extern void fn_82898878(Obj_82898968 *, int);

#define C(o) ((Iface_82898968 *)(o)->f20)

void fn_82898968(Obj_82898968 *o, Arg_82898968 *a)
{
  if (o->f20 == 0 || C(o)->vt->s4(C(o)) == 0) {
    if (o->f20 != 0 && C(o)->vt->sc(C(o)) != 0) {
      fn_82898878(o, 0);
      return;
    }
    if (o->f20 == 0)
      return;
    if (C(o)->vt->s14(C(o)) == 0)
      return;
  }
  fn_82898770(o, a->fb0, 0);
}
