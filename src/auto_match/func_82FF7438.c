typedef struct Key_82FF7438 {
    void *id;
    int value;
} Key_82FF7438;

extern void *fn_82FF82A8(void *table, Key_82FF7438 *key);

int fn_82FF7438(char *self, void *id, int value)
{
    Key_82FF7438 key;
    int result = 1;

    if (id != 0) {
        key.id = id;
        key.value = value;
        if (fn_82FF82A8(self + 0x10, &key) == 0) {
            result = 2;
        }
    } else {
        result = 0x1f;
    }
    return result;
}
