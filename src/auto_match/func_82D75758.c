typedef struct { unsigned short id; unsigned short pad[3]; } E;
typedef struct { char pad[0x32]; unsigned char count; char pad2[3]; E e[1]; } Obj;

void fn_82D75758(Obj *o, unsigned short id)
{
  int i;

  for (i = 0; i < o->count; i++) {
    if (o->e[i].id == 0xffff) {
      o->e[i].id = id;
      return;
    }
  }
}
