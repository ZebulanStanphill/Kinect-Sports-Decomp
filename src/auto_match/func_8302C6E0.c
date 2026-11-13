typedef struct Obj_8302C6E0 { char pad[0x120]; unsigned short mode; } Obj_8302C6E0;

void fn_8302C6E0(Obj_8302C6E0 *o, unsigned char enabled, unsigned char reset, unsigned short mode)
{
  if (enabled) {
    if (reset) o->mode = 0;
    else o->mode = mode;
  } else {
    o->mode = 1;
  }
}
