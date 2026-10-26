typedef struct Dev Dev;
typedef struct { void *f[6]; int (*present)(Dev *d, int a, int b, int c); } DevVtbl;
struct Dev { DevVtbl *vtbl; };
typedef struct { char pad[0x80]; int a; Dev *dev; int pad2; int x; int pad3; int y; int fails; } Obj;
void fn_82A76730(Obj *o)
{
  int b = o->x == 0;
  int c = o->y == 0;
  int hr = o->dev->vtbl->present(o->dev, o->a, b, c);
  if (hr == 0x8880666) o->fails++;
}

