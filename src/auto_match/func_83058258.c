typedef struct Data_83058258 { char pad[0x3c]; float a; float b; int pad44[2]; float d; float c; int pad54[2]; float e; } Data_83058258;
typedef struct Obj_83058258 { int pad[2]; Data_83058258 *data; } Obj_83058258;
typedef struct Out_83058258 { int kind; float v[5]; } Out_83058258;
void fn_83058258(Obj_83058258 *o, Out_83058258 *out)
{
  Data_83058258 *d = o->data;
  float *p = out->v;
  out->kind = 2;
  *p++ = d->a;
  *p++ = d->b * 3.98107171f;
  *p++ = d->c * 3.98107171f;
  *p++ = d->d;
  *p = d->e;
}
