extern int fn_82817AE0(const void *, const void *);
extern int fn_82F6DEF0(const void *, const void *);
extern void *fn_82F6DDE0(const void *, const void *, unsigned int, unsigned int,
                         int (*)(const void *, const void *));
extern int strcmp(const char *, const char *);

typedef struct Entry_828180A8 {
    unsigned int hash;  /* 0x00 */
    unsigned int zero;  /* 0x04 */
    const char **names; /* 0x08 */
} Entry_828180A8;

typedef struct Table_828180A8 {
    unsigned int count; /* 0x00 */
    int reserved04;
    Entry_828180A8 *first;  /* 0x08 */
    Entry_828180A8 *second; /* 0x0c */
} Table_828180A8;

extern int fn_82817CA8(Table_828180A8 *, const char *, int, unsigned int, const char ***,
                       int (*)(const void *, const void *));

int fn_828180A8(Table_828180A8 *self, unsigned int hash, const char *name, int occurrence, unsigned int which,
                const char ***out)
{
    const char *candidate = 0;
    Entry_828180A8 *base;
    Entry_828180A8 *entry;
    Entry_828180A8 *end;
    unsigned int key[4];
    int count;
    if (self != 0 && out != 0) {
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
        if (base != 0) {
            key[0] = hash;
            key[1] = 0;
            entry = (Entry_828180A8 *)fn_82F6DDE0(key, base, self->count, 12, fn_82817AE0);
            count = 0;
            if (entry != 0) {
                end = base + self->count;
                do {
                    if (entry >= end || entry->hash != key[0]) {
                        break;
                    }
                    if (name != 0) {
                        if (*name != 0) {
                            const char **names = entry->names;
                            switch (which) {
                            case 1:
                                candidate = names[0];
                                break;
                            case 0:
                                candidate = names[1];
                                break;
                            default:
                                candidate = 0;
                                goto next;
                            }
                        }
                        if (*name != 0 && strcmp(candidate, name) != 0) {
                            goto next;
                        }
                    }
                    if (count == occurrence) {
                        *out = entry->names;
                        return 1;
                    }
                    ++count;
                next:
                    ++entry;
                } while (entry != 0);
            }
        } else {
            return fn_82817CA8(self, name, occurrence, which, out, fn_82F6DEF0);
        }
    }
    *out = 0;
    return 0;
}
