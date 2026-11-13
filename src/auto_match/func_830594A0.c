typedef struct Data_830594A0 { char pad[0x34]; float a; float b; int pad3c[2]; float c; } Data_830594A0;
typedef struct Obj_830594A0 { int pad[2]; Data_830594A0 *data; } Obj_830594A0;
typedef struct Out_830594A0 { int kind; float a; float b; float c; } Out_830594A0;

void fn_830594A0(Obj_830594A0 *o, Out_830594A0 *out)
{
  Data_830594A0 *d = o->data;
  out->kind = 1;
  out->a = d->a;
  out->b = d->b * 3.98107171f;
  out->c = d->c;
}
