typedef struct Obj_828D2E80 {
    int pad[3];
    int type;
} Obj_828D2E80;

int fn_828D2E80(Obj_828D2E80 *self)
{
    switch (self->type) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
        return 0;
    case 9:
        return 1;
    }
    return 0;
}
