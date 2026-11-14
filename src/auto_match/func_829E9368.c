int memcmp(const void *a, const void *b, unsigned int n);

typedef struct Entry_829E9368 {
    unsigned int f00;
    unsigned int f04;
    unsigned int f08;
    unsigned int size;
} Entry_829E9368;

typedef struct Header_829E9368 {
    unsigned char digest[16];
    unsigned int version;
    unsigned int size;
    unsigned int f18;
    unsigned int f1c;
    unsigned int f20;
    unsigned int count;
    unsigned char pad28[0x20];
    Entry_829E9368 entries[1];
} Header_829E9368;

extern int fn_829E92B8(Header_829E9368 *h, unsigned int size, unsigned char *digest, unsigned int digestSize);

int fn_829E9368(Header_829E9368 *h, unsigned int size)
{
    unsigned char digest[16];
    unsigned int count;
    unsigned int total;
    unsigned int i;
    int ok = 0;

    if (h == 0) return 0;
    if (size < sizeof(Header_829E9368)) return 0;
    if (fn_829E92B8(h, size, digest, 0x10) < 0) return 0;
    if (memcmp(h, digest, 0x10) != 0) return 0;
    if (size != h->size) return 0;
    if (h->version != 100) return 0;
    count = h->count;
    if (count < 1) return 0;
    total = sizeof(Header_829E9368) + (count - 1) * sizeof(Entry_829E9368);
    for (i = 0; i < count; i++) {
        total += h->entries[i].size;
        if (total > size) return 0;
    }
    if (total == size) ok = 1;
    return ok;
}
