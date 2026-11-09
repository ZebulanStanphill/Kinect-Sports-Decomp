extern unsigned int fn_82359558(int, int);

typedef struct Obj_82402CA0 {
    char pad0[0x10];
    int id;               /* +0x10 */
    char pad14[0x240 - 0x14];
    int table;            /* +0x240 */
    char pad244[0x288 - 0x244];
    int matchA;           /* +0x288 */
    int matchB;           /* +0x28c */
} Obj_82402CA0;

void fn_82402CA0(Obj_82402CA0 *self, unsigned int value)
{
    if (value == fn_82359558(self->table, self->id)) {
        self->matchA = 0;
    } else {
        self->matchB = 0;
    }
}
