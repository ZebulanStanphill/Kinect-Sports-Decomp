typedef struct Entry_82EEE390 {
    char pad0[0x14];
    unsigned short kind; /* 0x14 */
    char pad16[2];
    const char *name;       /* 0x18 */
    unsigned int field1C;   /* 0x1c */
    const char *alias1;     /* 0x20 */
    unsigned int field24;   /* 0x24 */
    const char *alias2;     /* 0x28 */
    unsigned int field2C;   /* 0x2c */
    const char *alias3;     /* 0x30 */
    unsigned int field34;   /* 0x34 */
    const char *alias4;     /* 0x38 */
    unsigned int field3C;   /* 0x3c */
    unsigned short variant; /* 0x40 */
} Entry_82EEE390;

typedef struct Context_82EEE390 {
    char pad0[0x70];
    unsigned int count; /* 0x70 */
} Context_82EEE390;

extern int fn_82EEDD00(Context_82EEE390 *self, unsigned int index, Entry_82EEE390 **out);
extern int fn_82F41CE0(const char *first, const char *second);

/* Looks for an entry of this kind and variant whose name or one of its aliases matches:
   0 when found, 1 when not, or a failure code. */
int fn_82EEE390(Context_82EEE390 *self, unsigned short kind, const char *name, unsigned short variant)
{
    unsigned int count = self->count;
    unsigned int index;
    int result;

    if (kind == 0xffff || name == 0) {
        result = 0x80070057;
    } else {
        index = 0;
        if (count != 0) {
            do {
                Entry_82EEE390 *entry = 0;

                result = fn_82EEDD00(self, index, &entry);
                if (result < 0) {
                    goto done;
                }
                if (entry == 0) {
                    result = 0xc00d36bb;
                    break;
                }
                if (kind == entry->kind && variant == entry->variant) {
                    if (fn_82F41CE0(name, entry->name) != 0 ||
                        (entry->alias1 != 0 && fn_82F41CE0(name, entry->alias1) != 0) ||
                        (entry->alias2 != 0 && fn_82F41CE0(name, entry->alias2) != 0) ||
                        (entry->alias3 != 0 && fn_82F41CE0(name, entry->alias3) != 0) ||
                        (entry->alias4 != 0 && fn_82F41CE0(name, entry->alias4) != 0)) {
                        break;
                    }
                }
                index++;
            } while (count > index);
            if (result < 0 || count > index) {
                goto done;
            }
        }
        result = 1;
    }
done:
    return result;
}
