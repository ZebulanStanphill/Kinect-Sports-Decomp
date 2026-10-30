extern unsigned int lbl_821AC59C;
typedef struct Src_822AF2C8 { char pad[0x2c]; int f2c; } Src_822AF2C8;
typedef struct Obj_822AF2C8 { void *vt; char pad[0x4c]; int f50; } Obj_822AF2C8;
extern void *fn_8265C9E0(unsigned n);
extern void fn_822AF0A8(Obj_822AF2C8 *o, Src_822AF2C8 *s);

Obj_822AF2C8 *fn_822AF2C8(Src_822AF2C8 *s)
{
  Obj_822AF2C8 *o = (Obj_822AF2C8 *)fn_8265C9E0(0x54);
  if (o != 0) {
    fn_822AF0A8(o, s);
    o->vt = &lbl_821AC59C;
    o->f50 = s->f2c;
    return o;
  }
  return 0;
}
