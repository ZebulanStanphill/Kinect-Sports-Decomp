typedef struct Obj_83007888 {
    char pad[0x3d];
    unsigned char flags;
} Obj_83007888;

extern void *fn_83006E68(Obj_83007888 *self);
extern int fn_8302AF48(void);
extern int fn_8302AFF8(void);
extern int fn_8302B0A8(void);
extern int fn_8302B158(void);

unsigned char fn_83007888(Obj_83007888 *self, int kind)
{
    int result;

    if (fn_83006E68(self) != 0 && (self->flags & 4) != 0) {
        switch (kind) {
        case 1:
            result = fn_8302AF48();
            break;
        case 2:
            result = fn_8302AFF8();
            break;
        case 8:
            result = fn_8302B158();
            break;
        case 4:
            result = fn_8302B0A8();
            break;
        }
        if (result == 1)
            return 0;
    }
    return 1;
}
