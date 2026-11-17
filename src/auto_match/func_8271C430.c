extern long _InterlockedExchangeAdd(volatile long *value, long amount);

typedef struct Text_8271C430 {
    unsigned int length; /* 0x00 */
    long refs;           /* 0x04 */
    char text[1];        /* 0x08 */
} Text_8271C430;

typedef struct Buffer_8271C430 {
    char *data;          /* 0x00 */
    int size;            /* 0x04 */
    int used;            /* 0x08 */
    int capacity;        /* 0x0c */
    unsigned char flags; /* 0x10 */
    void *heap;          /* 0x14 */
    char local[8];       /* 0x18 */
} Buffer_8271C430;

extern void *lbl_831E7E64;
extern void fn_8268AFB0(Buffer_8271C430 *buffer, void *heap);
extern void fn_8268AFD8(Buffer_8271C430 *buffer);
extern void fn_8268B330(unsigned int *text);
extern void fn_826A70B0(void *source, unsigned int value, unsigned int *text);
extern void fn_8268B1F0(Buffer_8271C430 *buffer, const char *text, int length);
extern void fn_8268BEA8(unsigned int *text);
extern void fn_82696D38(unsigned int **out, void *request, void *source, int length, int flags);
extern void fn_8268BB68(void *out, Buffer_8271C430 *buffer);
extern void fn_826944C8(unsigned int *object);
extern void fn_8267BE38(void *data);

void fn_8271C430(void **self, unsigned int **source, void *request)
{
    unsigned int text;
    unsigned int *object;
    Buffer_8271C430 buffer;
    Text_8271C430 *data;
    unsigned int *released;

    fn_8268AFB0(&buffer, lbl_831E7E64);
    fn_8268B330(&text);
    fn_826A70B0((void *)(*source)[0], (*source)[4], &text);
    data = (Text_8271C430 *)(text & ~3u);
    fn_8268B1F0(&buffer, data->text, data->length & 0x7fffffff);
    fn_8268B1F0(&buffer, "=", -1);
    fn_8268BEA8(&text);
    fn_82696D38(&object, request, self[1], -1, 0);
    fn_826A70B0((void *)object[0], object[4], &text);
    data = (Text_8271C430 *)(text & ~3u);
    fn_8268B1F0(&buffer, data->text, data->length & 0x7fffffff);
    fn_8268B1F0(&buffer, "&", -1);
    fn_8268BB68(self[2], &buffer);
    released = object;
    if (--released[2] == 0) {
        fn_826944C8(released);
    }
    data = (Text_8271C430 *)(text & ~3u);
    if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
    fn_8268AFD8(&buffer);
}
