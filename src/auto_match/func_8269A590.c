typedef struct { char pad[0x5c]; float x; float y; unsigned char pad2[2]; unsigned char flags; } Obj;

unsigned char fn_8269A590(Obj *o, float x, float y)
{
    return (o->flags & 0xc) != 0 && x == o->x && y == o->y;
}
