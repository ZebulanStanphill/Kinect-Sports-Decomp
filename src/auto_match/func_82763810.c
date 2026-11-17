extern unsigned char fn_826DF4E8(char *stream);
extern unsigned short fn_826A6A38(char *stream);
extern void fn_826A9280(void *log, const char *format, ...);
extern void fn_826DFA28(void *log, const char *format, ...);
extern void fn_82761138(unsigned int *array, unsigned int *allocator, unsigned int count);
extern void fn_82760248(void *entries, unsigned int count);
extern void fn_8275B958(void *entry, char *stream, int version);

unsigned int fn_82763810(unsigned int *array, char *stream, int version)
{
    unsigned int count;
    unsigned int oldCount;
    unsigned int newCount;
    unsigned int remaining;
    unsigned int offset;
    unsigned int position;
    char *state;
    void *log;

    count = fn_826DF4E8(stream);
    log = stream + 0x14;
    fn_826A9280(log, "  GFx_ReadLineStyles: count = %d\n", count);
    if (count == 0xff) {
        count = fn_826A6A38(stream);
        fn_826A9280(log, "  GFx_ReadLineStyles: count2 = %d\n", count);
    }
    state = *(char **)(stream + 0x314);
    if (state == 0) {
        state = stream + 0x28;
    }
    position =
        *(unsigned int *)(state + 0x34) - *(unsigned int *)(state + 0x30) + *(unsigned int *)(state + 0x2c);
    if (array != 0) {
        oldCount = array[1];
        newCount = oldCount + count;
        fn_82761138(array, array, newCount);
        if (newCount > oldCount) {
            fn_82760248((char *)array[0] + oldCount * 0x18, newCount - oldCount);
        }
        if (count != 0) {
            offset = oldCount * 0x18;
            remaining = count;
            do {
                state = *(char **)(stream + 0x314);
                if (state == 0) {
                    state = stream + 0x28;
                }
                state[0x15] = 0;
                fn_8275B958((char *)array[0] + offset, stream, version);
                --remaining;
                offset += 0x18;
            } while (remaining != 0);
        }
    } else if (count != 0) {
        fn_826DFA28(log, "Error: GFx_ReadLineStyles, trying to read %d linestyles into no-style shape\n",
                    count);
    }
    return position;
}
