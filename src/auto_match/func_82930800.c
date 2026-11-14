#include <string.h>

typedef struct Value_82930800 {
    int type;
    int pad4;
    union {
        unsigned int u;
        double d;
        char text[1];
        const char *str;
    } v;
} Value_82930800;

int fn_82930800(const Value_82930800 *a, const Value_82930800 *b)
{
    if (a->type != b->type)
        return 0;
    switch (a->type) {
    case 0:
    case 2:
    case 3:
    case 4:
        if (a->v.u != b->v.u)
            return 0;
        break;
    case 1:
        if (strcmp(a->v.text, b->v.text) != 0)
            return 0;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        if (a->v.d != b->v.d)
            return 0;
        break;
    case 9:
        if (strcmp(a->v.str, b->v.str) != 0)
            return 0;
        break;
    case 10:
        if (strcmp(a->v.str, b->v.str) != 0)
            return 0;
        break;
    }
    return 1;
}
