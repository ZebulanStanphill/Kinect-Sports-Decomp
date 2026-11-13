/* Writes a 4-byte value through fn_82F41C68; E_UNEXPECTED when the object is not open. */
typedef struct { char pad0[0x5c]; int open; int f60; int f64; } Obj_82F41820;
extern int fn_82F41C68(const void *data, unsigned int size, int a, int b);

int fn_82F41820(Obj_82F41820 *o, unsigned int value)
{
    if (o->open != 0) {
        return fn_82F41C68(&value, 4, o->f60, o->f64);
    }
    return 0x8000ffff;
}
