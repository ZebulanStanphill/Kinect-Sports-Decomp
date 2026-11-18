extern unsigned char fn_826DF4E8(char *stream);
extern unsigned short fn_826A6A38(char *stream);
extern void fn_826A9280(void *log, const char *format, ...);
extern void fn_826DFA28(void *log, const char *format, ...);
extern void fn_826EBB60(unsigned int *array, unsigned int *allocator, unsigned int count);
extern void fn_827601F0(void *entries, unsigned int count);
extern void fn_8275B020(void *entry, char *stream, int version);

unsigned int fn_82764DC0(unsigned int *array, char *stream, int version)
{
    unsigned int count;
    unsigned int oldCount;
    unsigned int newCount;
    unsigned int index;
    unsigned int position;
    char *state;

    count = fn_826DF4E8(stream);
    if (version > 2 && count == 0xff) {
        count = fn_826A6A38(stream);
    }
    state = *(char **)(stream + 0x314);
    if (state == 0) {
        state = stream + 0x28;
    }
    position =
        *(unsigned int *)(state + 0x34) - *(unsigned int *)(state + 0x30) + *(unsigned int *)(state + 0x2c);
    if (array != 0) {
        fn_826A9280(stream + 0x14, "  GFx_ReadFillStyles: count = %d\n", count);
        oldCount = array[1];
        if (count != 0) {
            newCount = oldCount + count;
            fn_826EBB60(array, array, newCount);
            if (newCount > oldCount) {
                fn_827601F0((char *)array[0] + oldCount * 0x28, newCount - oldCount);
            }
            for (index = 0; index < count; index++) {
                state = *(char **)(stream + 0x314);
                if (state == 0) {
                    state = stream + 0x28;
                }
                state[0x15] = 0;
                fn_8275B020((char *)array[0] + (oldCount + index) * 0x28, stream, version);
            }
        }
    } else if (count != 0) {
        fn_826DFA28(stream + 0x14,
                    "Error: GFx_ReadFillStyles, trying to read %d fillstyles into no-style shape\n", count);
    }
    return position;
}
