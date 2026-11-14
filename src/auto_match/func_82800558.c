int strcmp(const char *a, const char *b);

typedef struct Entry_82800558 {
    char name[0x18];
    int value;
} Entry_82800558;

extern Entry_82800558 lbl_83156AF0[];
extern const char lbl_8201DECC[1];   /* "" */

int fn_82800558(const char *name)
{
    Entry_82800558 *e = lbl_83156AF0;
    while (strcmp(e->name, name) != 0) {
    }
    e->value = 0;
    e->name[0] = lbl_8201DECC[0];
    return 0;
}
