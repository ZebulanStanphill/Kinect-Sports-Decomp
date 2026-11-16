extern unsigned int fn_828183C0(const char *);
extern int fn_82817AE0(const void *, const void *);
extern void *fn_82F6DDE0(const void *, const void *, unsigned int, unsigned int,
                         int (*)(const void *, const void *));
extern int strcmp(const char *, const char *);

typedef struct Entry_82817FA0 {
    unsigned int hash;  /* 0x00 */
    unsigned int zero;  /* 0x04 */
    const char **names; /* 0x08 */
} Entry_82817FA0;

typedef struct Table_82817FA0 {
    unsigned int count; /* 0x00 */
    int pad4;
    Entry_82817FA0 *first;  /* 0x08 */
    Entry_82817FA0 *second; /* 0x0c */
} Table_82817FA0;

int fn_82817FA0(Table_82817FA0 *self, const char *name, unsigned int which)
{
    int count = 0;
    Entry_82817FA0 *base;
    Entry_82817FA0 *entry;
    Entry_82817FA0 *end;
    unsigned int key[2];
    if (self != 0 && name != 0) {
        switch (which) {
        case 1:
            base = self->second;
            break;
        case 0:
            base = self->first;
            break;
        default:
            return 0;
        }
        key[0] = fn_828183C0(name);
        key[1] = 0;
        entry = (Entry_82817FA0 *)fn_82F6DDE0(key, base, self->count, 12, fn_82817AE0);
        if (entry != 0) {
            end = base + self->count;
            do {
                const char *candidate;
                const char **names; /* 0x08 */
                if (entry >= end || entry->hash != key[0]) {
                    break;
                }
                names = entry->names;
                switch (which) {
                case 1:
                    candidate = names[0];
                    break;
                case 0:
                    candidate = names[1];
                    break;
                default:
                    goto next;
                }
                if (strcmp(candidate, name) == 0) {
                    ++count;
                }
            next:
                ++entry;
            } while (entry != 0);
        }
    }
    return count;
}
