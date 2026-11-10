typedef struct { char pad0[0x90]; void *owner; } Obj_8284FDF0;
typedef struct { int pad0; int value; } Src_8284FDF0;

void fn_8284FDF0(Obj_8284FDF0 *self, Src_8284FDF0 *src, int *out)
{
  *out = self->owner != 0 ? src->value : 0;
}
