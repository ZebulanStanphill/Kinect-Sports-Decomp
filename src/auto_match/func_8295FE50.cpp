// Device setup sequence: each step returns an HRESULT and the first failure is returned. The
// calls through the vtable are virtual member calls (this is set up after the slot load).
typedef struct { int pad[2]; unsigned int *index; } Sel_8295FE50;

struct Obj_8295FE50 {
  virtual void v000(); virtual void v004(); virtual void v008(); virtual void v00c();
  virtual void v010(); virtual void v014(); virtual void v018(); virtual void v01c();
  virtual void v020(); virtual void v024(); virtual void v028(); virtual void v02c();
  virtual void v030(); virtual void v034(); virtual void v038(); virtual void v03c();
  virtual void v040(); virtual void v044(); virtual void v048(); virtual void v04c();
  virtual void v050(); virtual void v054(); virtual void v058(); virtual void v05c();
  virtual void v060(); virtual void v064(); virtual void v068(); virtual void v06c();
  virtual void v070(); virtual void v074(); virtual void v078(); virtual void v07c();
  virtual void v080(); virtual void v084(); virtual void v088(); virtual void v08c();
  virtual void v090(); virtual void v094(); virtual void v098(); virtual void v09c();
  virtual void v0a0(); virtual void v0a4(); virtual void v0a8(); virtual void v0ac();
  virtual void v0b0(); virtual void v0b4(); virtual void v0b8(); virtual void v0bc();
  virtual void v0c0(); virtual void v0c4(); virtual void v0c8(); virtual void v0cc();
  virtual void v0d0(); virtual void v0d4(); virtual void v0d8(); virtual void v0dc();
  virtual void v0e0(); virtual void v0e4(); virtual void v0e8(); virtual void v0ec();
  virtual void v0f0(); virtual void v0f4(); virtual void v0f8(); virtual void v0fc();
  virtual void v100(); virtual void v104(); virtual void v108(); virtual void v10c();
  virtual void v110(); virtual void v114(); virtual void v118(); virtual void v11c();
  virtual void v120(); virtual void v124(); virtual void v128(); virtual void v12c();
  virtual void v130();
  virtual int f134();
  virtual void v138();
  virtual int f13c(unsigned int, unsigned int, unsigned int);
  virtual void v140(); virtual void v144();
  virtual int f148(unsigned int, unsigned int *, unsigned int *);
  int pad4[4];
  unsigned int *table;      /* 0x14 */
  char pad18[0x104 - 0x18];
  Sel_8295FE50 *sel;        /* 0x104 */
};

extern "C" int fn_8295D0A8(Obj_8295FE50 *, int);
extern "C" int fn_829548C8(Obj_8295FE50 *);

extern "C" int fn_8295FE50(Obj_8295FE50 *o)
{
  unsigned int a, b;
  int hr = fn_8295D0A8(o, 0x1b);
  if (hr >= 0) {
    a = 0;
    hr = o->f13c(0xf0000800, 0xe40000, 0);
    if (hr >= 0) {
      hr = o->f148(o->table[*o->sel->index], &a, &b);
      if (hr >= 0) {
        hr = o->f13c(a, 0xe40000, b);
        if (hr >= 0) {
          hr = o->f134();
          if (hr >= 0) {
            hr = fn_829548C8(o);
            if (hr >= 0) return 0;
          }
        }
      }
    }
  }
  return hr;
}
