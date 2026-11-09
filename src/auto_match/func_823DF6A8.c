typedef struct Inner_823DF6A8 { int *pair; } Inner_823DF6A8;
typedef struct Inner2_823DF6A8 { int pad[3]; int *pair; } Inner2_823DF6A8;
typedef struct Obj_823DF6A8 { int pad[2]; Inner2_823DF6A8 *inner; } Obj_823DF6A8;
extern void fn_822AF138(int, int);

void fn_823DF6A8(Obj_823DF6A8 *self)
{
  fn_822AF138(self->inner->pair[0], 5);
  fn_822AF138(self->inner->pair[1], 5);
}
