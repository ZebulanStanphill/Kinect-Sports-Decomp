typedef struct Entry_82FEDA18 {
    struct Entry_82FEDA18 *next;
    unsigned int key;
    char *value;
} Entry_82FEDA18;

extern Entry_82FEDA18 *lbl_831BC774;
extern unsigned int lbl_831BC770;
extern void *fn_82FEF800(unsigned int *, void *);
extern char *fn_82FED500(unsigned int, unsigned int);
extern int fn_830245B0(char *, unsigned int);
extern void fn_83024E30(char *);
extern void fn_830245A0(char *);
extern void fn_83024AD8(char *);
extern void fn_82FB36E8(Entry_82FEDA18 **, Entry_82FEDA18 *, Entry_82FEDA18 *);
extern void fn_83024470(char *);
extern void fn_830224E8(void *);
extern void fn_82FA5190(unsigned int, void *);

static __forceinline char **Find_82FEDA18(unsigned int key)
{
    Entry_82FEDA18 *entry;
    for (entry = lbl_831BC774; entry != 0; entry = entry->next) {
        if (entry->key == key) {
            return &entry->value;
        }
    }
    return 0;
}

char *fn_82FEDA18(unsigned int key, void *context)
{
    Entry_82FEDA18 *entry;
    Entry_82FEDA18 *previous;
    unsigned int allocator;
    char *result;
    char **value = Find_82FEDA18(key);
    unsigned int resultKey;
    if (value == 0) {
        fn_82FEF800(&allocator, context);
        result = fn_82FED500(key, allocator);
        if (result != 0) {
            if (fn_830245B0(result, key) != 1) {
                fn_83024AD8(result);
                resultKey = *(unsigned int *)(result + 0x16c);
                previous = 0;
                for (entry = lbl_831BC774; entry != 0; entry = entry->next) {
                    if (entry->key == resultKey) {
                        fn_82FB36E8(&lbl_831BC774, entry, previous);
                        break;
                    }
                    previous = entry;
                }
                fn_83024470(result);
                fn_830224E8(result + 0x80);
                fn_82FA5190(lbl_831BC770, result);
                return 0;
            }
            fn_83024E30(result);
            fn_830245A0(result);
        }
        return result;
    }
    return *value;
}
