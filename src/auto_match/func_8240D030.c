typedef struct Value_8240D030 {
    int field00;  /* 0x00 */
    int field04;  /* 0x04 */
    float weight; /* 0x08 */
    int field0C;  /* 0x0c */
    int type;     /* 0x10 */
} Value_8240D030;

typedef struct Entry_8240D030 {
    unsigned int key;     /* 0x00 */
    Value_8240D030 value; /* 0x04 */
} Entry_8240D030;

typedef struct Pair_8240D030 {
    int pad;               /* 0x00 */
    Entry_8240D030 first;  /* 0x04 */
    Entry_8240D030 second; /* 0x1c */
} Pair_8240D030;

static __forceinline void InitEntry(Entry_8240D030 *entry, unsigned int key)
{
    Value_8240D030 value;

    value.field00 = 0;
    value.field04 = 0;
    value.weight = 0.0f;
    value.field0C = 0;
    value.type = 4;
    entry->key = key;
    entry->value = value;
}

void fn_8240D030(Pair_8240D030 *self, unsigned int firstKey, unsigned int secondKey)
{
    InitEntry(&self->first, firstKey);
    InitEntry(&self->second, secondKey);
}
