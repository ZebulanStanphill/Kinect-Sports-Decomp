typedef struct Data_83059730 { char pad[0x34]; float a; float b; int pad3c[2]; float c; } Data_83059730;
typedef struct Inner_83059730 { int pad[2]; Data_83059730 *data; } Inner_83059730;
typedef struct Obj_83059730 { Inner_83059730 *inner; } Obj_83059730;
typedef struct Out_83059730 { int kind; float a; float b; float c; } Out_83059730;

extern const float lbl_8217E3C8;

void fn_83059730(Obj_83059730 *o, Out_83059730 *out)
{
  Data_83059730 *d = o->inner->data;
  float k = lbl_8217E3C8;
  out->kind = 1;
  out->a = d->a;
  out->b = d->b * k;
  out->c = d->c;
}
