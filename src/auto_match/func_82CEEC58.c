typedef struct Shape_82CEEC58 {
    char pad0[0xc];
    unsigned char type;
    char padd[3];
    unsigned short flags;
} Shape_82CEEC58;

extern Shape_82CEEC58 *fn_82CFD5A8(Shape_82CEEC58 *shape);
extern unsigned char *fn_82CEEDF8(unsigned char *out, Shape_82CEEC58 *shape);

unsigned char *fn_82CEEC58(unsigned char *out, Shape_82CEEC58 *shape)
{
    unsigned char result;

    if ((unsigned char)((shape->flags >> 9) & 1) != 0) {
        result = 1;
    } else {
        switch (shape->type) {
        case 1:
            result = 1;
            break;
        case 2:
            result = 1;
            break;
        case 3:
            result = 1;
            break;
        case 4:
            result = 1;
            break;
        case 5:
            result = 1;
            break;
        case 6:
            result = 1;
            break;
        case 7:
            result = 1;
            break;
        case 8:
            result = 1;
            break;
        case 9:
            result = 1;
            break;
        case 10:
            result = 1;
            break;
        case 11:
            result = 1;
            break;
        case 12:
            result = 1;
            break;
        case 13:
            result = 1;
            break;
        case 14:
            result = 1;
            break;
        case 15:
            result = 1;
            break;
        case 16:
            result = 1;
            break;
        case 17:
            result = 1;
            break;
        case 18:
            result = 1;
            break;
        case 21:
            result = 1;
            break;
        case 24:
            result = 1;
            break;
        case 30:
            result = 1;
            break;
        case 31:
            result = 1;
            break;
        case 32:
            result = 1;
            break;
        case 25:
            fn_82CEEDF8(out, fn_82CFD5A8(shape));
            return out;
        case 33:
            result = 0;
            break;
        default:
            result = 0;
            break;
        }
    }
    *out = result;
    return out;
}
