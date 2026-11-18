#include <string.h>

typedef struct Table_82FFA510 {
    int count;         /* 0x00 */
    void *buckets[31]; /* 0x04 */
} Table_82FFA510;

typedef struct Owner_82FFA510 {
    char pad0[0x41c];     /* 0x000 */
    Table_82FFA510 names; /* 0x41c */
} Owner_82FFA510;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *block);
extern char **fn_82FFE0F0(Table_82FFA510 *table, unsigned int key);
extern char **fn_82FFE158(Table_82FFA510 *table, unsigned int key);

/* Remembers "<name>.bnk" under the key unless the key already has a name. */
void fn_82FFA510(Owner_82FFA510 *self, unsigned int key, const char *name)
{
    Table_82FFA510 *table = &self->names;

    if (fn_82FFE0F0(table, key) == 0) {
        unsigned int length = strlen(name);
        char *path = (char *)fn_82FA5060(lbl_831BC768, length + 5);

        if (path != 0) {
            char **slot;

            memcpy(path, name, length);
            path[length] = '.';
            path[length + 1] = 'b';
            path[length + 2] = 'n';
            path[length + 3] = 'k';
            path[length + 4] = 0;
            slot = fn_82FFE158(table, key);
            if (slot != 0) {
                *slot = path;
            } else {
                fn_82FA5190(lbl_831BC768, path);
            }
        }
    }
}
