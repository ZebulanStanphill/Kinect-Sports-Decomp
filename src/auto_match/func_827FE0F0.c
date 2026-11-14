typedef struct Obj_827FE0F0 {
    char pad0[0x98];
    int object; /* 0x98 */
} Obj_827FE0F0;

extern void fn_827F9450(int object, unsigned short index, int *out);

void fn_827FE0F0(Obj_827FE0F0 *self, int index, int *out)
{
    fn_827F9450(self->object, index, out);
}
