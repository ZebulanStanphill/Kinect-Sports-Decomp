typedef struct Node_82881EE8 {
    int pad[4];
    char *value;            /* +0x10 */
} Node_82881EE8;

typedef struct Map_82881EE8 {
    int head;
    Node_82881EE8 *end;     /* +0x4 */
} Map_82881EE8;

extern Map_82881EE8 lbl_83212A00;
extern void fn_8289F160(Node_82881EE8 **out, Map_82881EE8 *map, unsigned int *key);

char *fn_82881EE8(unsigned int key)
{
    unsigned int k;
    Node_82881EE8 *it;
    char *v;

    k = key;
    fn_8289F160(&it, &lbl_83212A00, &k);
    if (it == lbl_83212A00.end) {
        return 0;
    }
    v = it->value;
    if (v != 0) {
        return v + 0x34;
    }
    return 0;
}
