typedef struct Entry_82775B80 {
    unsigned isShort : 1;
    unsigned pad : 31;
    unsigned int length;
    unsigned int id;
} Entry_82775B80;

extern int fn_82756F70(void *self, Entry_82775B80 *entry);
extern unsigned int fn_827A84D0(void *entry);
extern void fn_82775520(void *self, char *name, unsigned int length, unsigned int data, unsigned int flag, int id);

void *fn_82775B80(void *self, Entry_82775B80 *entry, unsigned int flag)
{
    if (flag != 0) {
        unsigned int length;
        char *name;
        int id;
        unsigned int isShort = entry->isShort;
        if (isShort) {
            unsigned int v = entry->id & 0xffffff;
            if (v == 0xffffff)
                id = -1;
            else
                id = v;
        } else {
            id = entry->id;
        }
        if (isShort)
            length = *((unsigned char *)entry + 0x1c);
        else
            length = entry->length;
        if (isShort != 0) name = (char *)entry + 0x1e; else name = (char *)entry + 0x2a;
        fn_82775520(self, name, length, fn_827A84D0(entry), flag, id);
    } else {
        fn_82756F70(self, entry);
    }
    return self;
}
