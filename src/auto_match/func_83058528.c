typedef struct Data_83058528 { char pad[0x3c]; float a; float b; int pad44[2]; float d; float c; int pad54[2]; float e; } Data_83058528;
typedef struct Inner_83058528 { int pad[2]; Data_83058528 *data; } Inner_83058528;
typedef struct Obj_83058528 { Inner_83058528 *inner; } Obj_83058528;
typedef struct Out_83058528 { int kind; float v[5]; } Out_83058528;
void fn_83058528(Obj_83058528 *o, Out_83058528 *out)
{
  Data_83058528 *d = o->inner->data;
  float *p = out->v;
  out->kind = 2;
  *p++ = d->a;
  *p++ = d->b * 3.98107171f;
  *p++ = d->c * 3.98107171f;
  *p++ = d->d;
  *p = d->e;
}
