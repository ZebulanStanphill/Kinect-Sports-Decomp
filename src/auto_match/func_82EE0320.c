int memcmp(const void *a, const void *b, unsigned int n);

typedef struct Guid_82EE0320 {
    unsigned char bytes[16];
} Guid_82EE0320;

typedef struct Format_82EE0320 {
    char pad0[0x10];
    Guid_82EE0320 subFormat; /* 0x10 */
} Format_82EE0320;

extern const Guid_82EE0320 lbl_820ED0B8;
extern const Guid_82EE0320 lbl_82154A38;

int fn_82EE0320(Format_82EE0320 *format, int type, unsigned int expectedSize)
{
    unsigned int size = 0;

    switch (type) {
    case 0:
    case 1:
    case 0x8000:
    case 0x8001:
        size = expectedSize;
        break;
    case 2:
    case 0x8002:
        if (memcmp(&lbl_820ED0B8, &format->subFormat, 16) == 0 ||
            memcmp(&lbl_82154A38, &format->subFormat, 16) == 0) {
            size = 2;
        } else {
            size = 4;
        }
        break;
    case 3:
    case 0x8003:
        size = 4;
        break;
    case 4:
    case 0x8004:
        size = 8;
        break;
    case 5:
    case 0x8005:
        size = 2;
        break;
    case 6:
    case 0x8006:
        size = 0x10;
        break;
    }
    if (expectedSize != 0 && expectedSize != size) {
        return 0x80004005;
    }
    return 0;
}
