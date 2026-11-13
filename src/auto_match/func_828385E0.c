typedef struct Obj_828385E0 {
    char pad0[0x1c];
    unsigned int format;   /* 0x1c */
} Obj_828385E0;

int fn_828385E0(const Obj_828385E0 *self)
{
    unsigned int format = self->format;

    switch (format) {
    case 0:
    case 2:
        return 0x3c;
    case 3:
        return 0x40;
    case 4:
        return 0x54;
    }
    return format == 5 ? 0x3c : 0;
}
