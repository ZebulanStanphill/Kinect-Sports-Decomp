typedef struct State_8227C0A8 {
    char pad[0xa6c];
    int a;
    int b;
    int c;
    char pad2[0xa84 - 0xa78];
    int mode;
} State_8227C0A8;

int fn_8227C0A8(State_8227C0A8 *self)
{
    switch (self->mode) {
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        return self->a;
    case 3:
        if (self->a != 0 && (self->b != 0 || self->c != 0)) {
            return 1;
        }
        return 0;
    case 15:
        return self->c;
    default:
        return 0;
    }
}
