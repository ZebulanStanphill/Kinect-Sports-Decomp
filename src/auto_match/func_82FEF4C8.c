typedef struct Obj_82FEF4C8 {
    char pad[0xd4];
    unsigned short state;
} Obj_82FEF4C8;

extern int fn_82FECEE8(int, void *);

int fn_82FEF4C8(Obj_82FEF4C8 *o)
{
    o->state = 1;
    return fn_82FECEE8(5, o);
}
