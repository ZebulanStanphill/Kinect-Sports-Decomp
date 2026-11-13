int strcmp(const char *a, const char *b);

typedef struct Entry_828142D8 {
    char name[0x18];
} Entry_828142D8;

typedef struct Table_828142D8 {
    Entry_828142D8 entries[8];
    unsigned char count;
} Table_828142D8;

extern Table_828142D8 lbl_8320A500;

void fn_828142D8(const char *name, Entry_828142D8 **out)
{
    unsigned char i;
    *out = 0;
    for (i = 0; i < lbl_8320A500.count; i++) {
        Entry_828142D8 *e = &lbl_8320A500.entries[i];
        if (e != 0 && strcmp(e->name, name) == 0) {
            *out = e;
            return;
        }
    }
}
