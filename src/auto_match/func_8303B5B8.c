typedef struct Req_8303B5B8 {
  int type;
  int value;
  int zero;
  int pad5c;
  int pad60;
  unsigned char b0, b1, b2;
  int id;
} Req_8303B5B8;
typedef struct Obj_8303B5B8 {
  int (**vt)(struct Obj_8303B5B8 *, Req_8303B5B8 *);
} Obj_8303B5B8;
typedef struct A_8303B5B8 { char pad[0x10]; int id; } A_8303B5B8;
typedef struct B_8303B5B8 { char pad[0x34]; int value; } B_8303B5B8;

extern Obj_8303B5B8 *fn_82FAB9C0(int, int);
extern int fn_83010FE0(int, int, int);
extern int lbl_832642E0;
extern int lbl_832642E4;

int fn_8303B5B8(A_8303B5B8 *a, B_8303B5B8 *b)
{
  Obj_8303B5B8 *o;
  Req_8303B5B8 r;
  int hr;

  o = fn_82FAB9C0(lbl_832642E0 + 4, a->id);
  if (o == 0) return 0xf;
  r.id = a->id;
  r.value = b->value;
  r.zero = 0;
  r.type = 3;
  r.b0 = 0;
  r.b1 = 0;
  r.b2 = 0;
  hr = ((int (*)(Obj_8303B5B8 *, Req_8303B5B8 *))o->vt[7])(o, &r);
  if (hr == 1) {
    hr = fn_83010FE0(lbl_832642E4, a->id, b->value);
  }
  ((void (*)(Obj_8303B5B8 *))o->vt[2])(o);
  return hr;
}
