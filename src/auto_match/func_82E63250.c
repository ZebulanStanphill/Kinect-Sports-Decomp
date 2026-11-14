typedef struct Guid_82E63250 {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82E63250;

int memcmp(const void *a, const void *b, unsigned int n);

int fn_82E63250(void *self, Guid_82E63250 id, const Guid_82E63250 *ids, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        if (memcmp(&id, &ids[i], sizeof(Guid_82E63250)) == 0) {
            return 1;
        }
    }
    return 0;
}
