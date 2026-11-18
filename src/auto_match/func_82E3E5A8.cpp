struct Key_82E3E5A8 {
    unsigned int id;      /* 0x0 */
    unsigned int data[3]; /* 0x4 */
    unsigned short tag;   /* 0x10 */
    unsigned short pad12;
};

struct Node_82E3E5A8 {
    Key_82E3E5A8 key;    /* 0x0 */
    int value;           /* 0x14 */
    Node_82E3E5A8 *next; /* 0x18 */
};

extern "C" long fn_82E3C8C0(void *pool, Node_82E3E5A8 **node);

class HashTable_82E3E5A8
{
  public:
    long Insert(const Key_82E3E5A8 *key, const int *value);

  private:
    Node_82E3E5A8 **buckets; /* 0x0 */
    unsigned int bucketBits; /* 0x4 */
    int count;               /* 0x8 */
    int padc;
    char pool[0x10]; /* 0x10 */
};

long HashTable_82E3E5A8::Insert(const Key_82E3E5A8 *key, const int *value)
{
    Node_82E3E5A8 *allocated;
    Node_82E3E5A8 *node;
    unsigned int index;

    if (fn_82E3C8C0(pool, &allocated) < 0) {
        return 0x8007000e;
    }
    node = allocated;
    node->key = *key;
    node->value = *value;
    index = (key->tag ^ key->id) % (bucketBits >> 1);
    node->next = buckets[index];
    buckets[index] = node;
    count++;
    return 0;
}
