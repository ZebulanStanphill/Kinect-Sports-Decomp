typedef struct Name_82483740 {
    char bytes[1000];
} Name_82483740;

typedef struct Record_82483740 {
    int type;           /* 0x000 */
    int reserved[2];    /* 0x004 */
    Name_82483740 name; /* 0x00c */
    char pad3f4[0xc];
    unsigned int text[7]; /* 0x400 */
    unsigned char valid;  /* 0x41c */
} Record_82483740;

typedef struct Storage_82483740 {
    char pad0[0xc58];
    Record_82483740 normal;
    Record_82483740 alternate;
    Record_82483740 replacement;
    unsigned int mode;
} Storage_82483740;

typedef struct State_82483740 {
    char pad0[0x48];
    Storage_82483740 *storage;
} State_82483740;

extern Record_82483740 *fn_82486B08(Record_82483740 *);
extern void fn_8247F240(State_82483740 *, int);
extern void fn_82230300(unsigned int *, char, int);
extern void XMemCpy(void *, const void *, unsigned int);

void fn_82483740(State_82483740 *self)
{
    Record_82483740 first;
    Record_82483740 second;
    Name_82483740 name = {{0}};
    Storage_82483740 *storage = self->storage;
    unsigned int mode = storage->mode;

    switch (mode) {
    case 0:
    case 2:
        if (!storage->normal.valid) {
            fn_82486B08(&second);
            second.valid = 1;
            second.type = 3;
            second.name = name;
            XMemCpy(&self->storage->normal, &second, sizeof(second));
            fn_8247F240(self, 1);
            fn_82230300(second.text, 1, 0);
        }
        break;
    case 1:
        if (!storage->alternate.valid) {
            fn_82486B08(&first);
            first.valid = 1;
            first.type = 3;
            first.name = name;
            XMemCpy(&self->storage->alternate, &first, sizeof(first));
            storage = self->storage;
            if (storage->replacement.type == 3) {
                XMemCpy(&storage->replacement, &first, sizeof(first));
            } else {
                first.type = 4;
                XMemCpy(&storage->normal, &first, sizeof(first));
            }
            fn_8247F240(self, 1);
            fn_82230300(first.text, 1, 0);
        }
        break;
    }
}
