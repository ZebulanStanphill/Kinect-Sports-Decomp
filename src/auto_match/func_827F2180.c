/* Returns the distance from b to a modulo 4, plus 1 (1..4). */
typedef struct Obj_827F2180 { char pad[0x53]; unsigned char a; unsigned char b; } Obj_827F2180;
int fn_827F2180(Obj_827F2180 *o)
{
    return ((o->a - o->b) & 3) + 1;
}
