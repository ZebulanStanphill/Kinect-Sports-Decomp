typedef struct ThrowInfo_82F80590 {
    unsigned int attributes;
    void (*unwind)(void *object);
} ThrowInfo_82F80590;

typedef struct Record_82F80590 {
    unsigned int code;
    char pad[0x14];
    void *object;
    ThrowInfo_82F80590 *info;
} Record_82F80590;

void terminate();

extern "C" void fn_82F80590(Record_82F80590 *record, unsigned char noThrow)
{
    if (record != 0 && record->code == 0xe06d7363 && record->info != 0 && record->info->unwind != 0) {
        __try {
            record->info->unwind(record->object);
        } __except (noThrow != 0) {
            terminate();
        }
    }
}
