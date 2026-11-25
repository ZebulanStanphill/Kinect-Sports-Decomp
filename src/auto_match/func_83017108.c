typedef struct Key_83017108 {
    unsigned int id;      /* 0x00 */
    unsigned int variant; /* 0x04 */
} Key_83017108;

typedef struct Table_83017108 {
    int pad0;
    char buckets[4]; /* 0x04 */
} Table_83017108;

extern float *fn_83016E90(void *buckets, Key_83017108 key, unsigned int hash);

unsigned char fn_83017108(Table_83017108 *table, unsigned int id, unsigned int variant, float *out,
                unsigned char *exact)
{
    Key_83017108 key;
    float *value;

    key.variant = variant;
    key.id = id;
    value = fn_83016E90(table->buckets, key, (id + variant) % 193);
    if (value != 0) {
        *out = *value;
        *exact = variant != 0;
        return 1;
    }
    if (variant != 0) {
        key.variant = 0;
        *exact = 0;
        value = fn_83016E90(table->buckets, key, id % 193);
        if (value != 0) {
            *out = *value;
            return 1;
        }
    }
    return 0;
}
