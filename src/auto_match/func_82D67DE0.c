typedef struct { unsigned short id; unsigned short v; } E;
typedef struct { char pad[2]; E e[7]; char pad2[3]; unsigned char count; } Obj;

void fn_82D67DE0(int unused, Obj *o, unsigned short id)
{
  int i;

  for (i = 0; i < o->count; i++) {
    if (o->e[i].id == 0xffff) {
      o->e[i].id = id;
      return;
    }
  }
}
