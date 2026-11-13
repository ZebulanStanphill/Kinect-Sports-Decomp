/* Writes a wide string (null -> the empty string) including its terminator through fn_82F41C68;
   E_UNEXPECTED when the object is not open. */
typedef struct Obj_82F417A0 {
    char pad00[0x5c];
    int open;
    int f60;
    int f64;
} Obj_82F417A0;

extern unsigned int fn_82F64CE0(const unsigned short *s);
extern int fn_82F41C68(const unsigned short *s, unsigned int size, int a, int b);
extern unsigned short lbl_820E975C[];

int fn_82F417A0(Obj_82F417A0 *o, const unsigned short *s)
{
    unsigned int size;

    if (s == 0) {
        s = lbl_820E975C;
    }
    size = (fn_82F64CE0(s) + 1) * 2;
    if (o->open != 0) {
        return fn_82F41C68(s, size, o->f60, o->f64);
    }
    return 0x8000ffff;
}
