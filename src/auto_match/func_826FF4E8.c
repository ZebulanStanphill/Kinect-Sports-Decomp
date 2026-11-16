extern void *memset(void *, int, unsigned int);
extern void fn_82793058(void *, const char *, int *);
extern int *fn_82694700(void *, const char *);

typedef struct Buffer_826FF4E8 {
    int type;          /* 0x00 */
    char *data;        /* 0x04 */
    unsigned int size; /* 0x08 */
} Buffer_826FF4E8;

int **fn_826FF4E8(int **out, char *self)
{
    char name[0x30];
    Buffer_826FF4E8 buffer;
    int *result;
    int *instance;
    ++*(int *)(self + 0xa04);
    name[0] = 0;
    memset(name + 1, 0, sizeof(name) - 1);
    buffer.type = 2;
    buffer.data = name;
    instance = (int *)(self + 0xa04);
    buffer.size = sizeof(name);
    fn_82793058(&buffer, "instance{0}", instance);
    result = fn_82694700(0x254 + *(char **)(self + 0x9e4), name);
    *out = result;
    ++result[2];
    return out;
}
