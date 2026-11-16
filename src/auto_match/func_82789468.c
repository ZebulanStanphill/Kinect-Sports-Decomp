typedef struct Entry_82789468 {
    unsigned int key;
    unsigned int subkey;
    int value;
} Entry_82789468;

typedef struct Table_82789468 {
    int padding[3];
    Entry_82789468 **pages;
} Table_82789468;

typedef struct Predicate_82789468 {
    int unused;
    Table_82789468 *table;
} Predicate_82789468;

int fn_82789468(unsigned int **self, int first, int last, Entry_82789468 *key, Predicate_82789468 predicate)
{
    int firstCopy = first;
    int count = last - firstCopy;
    while (count > 0) {
        int half = count >> 1;
        int middle = firstCopy + half;
        unsigned int handle = (*self)[middle];
        Entry_82789468 *entry = &predicate.table->pages[handle >> 10][handle & 1023];
        unsigned char less;
        if (entry->key != key->key) {
            less = entry->key < key->key;
        } else {
            less = entry->subkey < key->subkey;
        }
        if (less) {
            firstCopy = middle + 1;
            count = count - half - 1;
        } else {
            count = half;
        }
    }
    return firstCopy;
}
