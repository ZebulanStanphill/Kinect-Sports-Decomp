typedef struct Source_82A84D98 {
    int words[8];
} Source_82A84D98;

typedef struct Decoder_82A84D98 {
    int words[9];
} Decoder_82A84D98;

typedef struct Package_82A84D98 {
    unsigned int headerSize; /* 0x00 */
    unsigned int dataSize;   /* 0x04 */
    int pad08[3];
    unsigned int entryCount; /* 0x14 */
    int pad18;
    void *header; /* 0x1c */
    void *data;   /* 0x20 */
} Package_82A84D98;

extern char lbl_820BCB20[];

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_82A84B20(Package_82A84D98 *package);
extern unsigned char fn_82A873E0(Decoder_82A84D98 *decoder, unsigned int *size);
extern unsigned char fn_82A87490(Decoder_82A84D98 *decoder, unsigned int *headerSize, unsigned int *dataSize);
extern unsigned char fn_82A8ACB0(Package_82A84D98 *package, Decoder_82A84D98 *decoder, unsigned int size,
                                 const char *data);
extern void fn_82A8B030(Decoder_82A84D98 *decoder);
extern void fn_82A8B0B0(Decoder_82A84D98 *decoder, Source_82A84D98 *source, unsigned int size,
                        const char *data);
extern void fn_82A8B5F8(Source_82A84D98 *source, const char *table, int size, int flags);

long fn_82A84D98(Package_82A84D98 *package, unsigned int size, const char *data)
{
    Decoder_82A84D98 decoder;
    Source_82A84D98 source;
    unsigned int payloadSize;
    const char *payload;

    if (size < 0x1ca0f) {
        return 0x8007000e;
    }
    fn_82A8B5F8(&source, lbl_820BCB20, 0xfa5a, 0);
    fn_82A8B0B0(&decoder, &source, 0x1ca0f, data);
    payload = data + 0x1ca0f;
    if (!fn_82A873E0(&decoder, &payloadSize) || payloadSize > size - 0x1ca0f) {
        fn_82A8B030(&decoder);
        return 0x8007000e;
    }
    if (!fn_82A87490(&decoder, &package->headerSize, &package->dataSize)) {
        fn_82A8B030(&decoder);
        return 0x80004005;
    }
    if (package->headerSize != 0) {
        package->header = fn_8265C940(package->headerSize, 0x20980000);
    }
    if (package->dataSize != 0) {
        package->data = fn_8265C940(package->dataSize, 0xb0980000);
    }
    if (package->header == 0 || package->data == 0) {
        fn_82A84B20(package);
        fn_82A8B030(&decoder);
        return 0x8007000e;
    }
    if (!fn_82A8ACB0(package, &decoder, payloadSize, payload)) {
        fn_82A84B20(package);
        fn_82A8B030(&decoder);
        return 0x80004005;
    }
    if (package->entryCount <= 0) {
        fn_82A84B20(package);
        fn_82A8B030(&decoder);
        return 0x80004005;
    }
    fn_82A8B030(&decoder);
    return 0;
}
