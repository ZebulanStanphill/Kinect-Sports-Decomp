typedef struct Key_82EEDF48 {
    int id;               /* 0x0 */
    unsigned short index; /* 0x4 */
} Key_82EEDF48;

typedef struct Entry_82EEDF48 {
    int id;               /* 0x0 */
    unsigned short index; /* 0x4 */
    char pad6[2];
    int linked; /* 0x8 */
    char padC[8];
    unsigned short kind; /* 0x14 */
    char pad16[2];
    const char *name; /* 0x18 */
} Entry_82EEDF48;

typedef struct Context_82EEDF48 {
    char pad0[0x70];
    unsigned int count; /* 0x70 */
} Context_82EEDF48;

extern int fn_82EEDD00(Context_82EEDF48 *self, unsigned int index, Entry_82EEDF48 **out);
extern int fn_82F41CE0(const char *first, const char *second);

int fn_82EEDF48(Context_82EEDF48 *self, Key_82EEDF48 *key)
{
    unsigned int count = self->count;
    Entry_82EEDF48 *entry = 0;
    Entry_82EEDF48 *other = 0;
    int result = 0;
    unsigned int index;
    unsigned int previous;

    for (index = 0; index < count; index++) {
        result = fn_82EEDD00(self, index, &entry);
        if (result < 0) {
            goto done;
        }
        if (entry == 0) {
            result = 0xc00d36bb;
            goto done;
        }
        if ((key == 0 || (entry->id == key->id && entry->index == key->index)) && entry->linked == 0) {
            for (previous = 0; previous < index; previous++) {
                result = fn_82EEDD00(self, previous, &other);
                if (result < 0) {
                    goto done;
                }
                if (other == 0) {
                    result = 0xc00d36bb;
                    goto done;
                }
                if (other->linked == 0 && other->kind == entry->kind &&
                    fn_82F41CE0(other->name, entry->name) != 0) {
                    entry->linked = 1;
                    break;
                }
            }
        }
    }
done:
    return result;
}
