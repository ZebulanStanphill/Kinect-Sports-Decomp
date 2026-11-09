/* Returns the singleton lbl_8327658C, creating it on first use: allocates 0x24 bytes with the global
   operator new (fn_8265C9E0) and runs the inlined constructor (vtable lbl_821BAC2C). */
typedef struct {
    void *vtable;
    int pad4[2];
    int fC;
    int f10;
    int f14;
    unsigned char f18;
    unsigned char f19;
    unsigned char pad1A[6];
    int f20;
} Object_8245AE18;

extern char lbl_821BAC2C[];
extern Object_8245AE18 *lbl_8327658C;
extern void *fn_8265C9E0(unsigned int size);

Object_8245AE18 *fn_8245AE18(void)
{
    if (lbl_8327658C == 0) {
        Object_8245AE18 *object = (Object_8245AE18 *)fn_8265C9E0(0x24);
        if (object != 0) {
            object->fC = 0;
            object->vtable = lbl_821BAC2C;
            object->f10 = 0;
            object->f14 = 0;
            object->f18 = 0;
            object->f19 = 0;
            object->f20 = 0;
        } else {
            object = 0;
        }
        lbl_8327658C = object;
    }
    return lbl_8327658C;
}
