typedef struct Entry_82E1DF00 {
    const char *name;  /* 0x00 */
    const char *value; /* 0x04 */
} Entry_82E1DF00;

extern Entry_82E1DF00 *fn_82E1D978(void *, const char *);
extern int stricmp(const char *, const char *);
extern int strcmp(const char *, const char *);
extern const char lbl_82196F18[];
extern const char lbl_821C5500[];

unsigned int fn_82E1DF00(void *self, const char *name, unsigned int fallback)
{
    Entry_82E1DF00 *entry = fn_82E1D978(self, name);
    if (entry == 0) {
        return fallback;
    }
    if (stricmp(lbl_82196F18, entry->value) == 0) {
        return 1;
    }
    return 0 == strcmp(lbl_821C5500, entry->value);
}
