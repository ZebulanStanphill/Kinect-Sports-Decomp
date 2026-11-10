typedef unsigned char bool;
typedef struct { char pad0[0x20]; unsigned int id; } Obj_82D058C8;

void fn_82D058C8(bool *out, Obj_82D058C8 *obj)
{
  *out = obj->id != 0xffffffff;
}
