typedef struct Data_8261C1B8 {
    char name[0x100];
    char path[0x100];
    char text[0x100];
    void *parent; /* 0x300 */
    int unused;
    unsigned int flags; /* 0x308 */
    char pad[0x18];
} Data_8261C1B8;

extern Data_8261C1B8 *fn_82522DF8(unsigned int size);
extern int fn_82526C70(char *out, unsigned int size, const char *format, ...);

void fn_8261C1B8(Data_8261C1B8 **out, char *parent, const char *name)
{
    char *destination;
    char *end;
    const char *source;
    unsigned char value;
    *out = fn_82522DF8(0x324);
    (*out)->parent = parent;
    source = name - 1;
    (*out)->flags = 0;
    destination = (*out)->name;
    end = destination + 0x100;
    do {
        if (destination >= end) {
            break;
        }
        value = *++source;
        *destination++ = value;
    } while (value != 0);
    if (destination == end) {
        destination[-1] = 0;
    }
    if (parent) {
        fn_82526C70((*out)->path, 0x100, "%s:\\%s", parent + 0x138, name);
    } else {
        fn_82526C70((*out)->path, 0x100, "GAME:\\%s", name);
    }
    (*out)->text[0] = 0;
}
