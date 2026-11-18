typedef struct Data_82766690 {
    const unsigned char *bytes;
} Data_82766690;

typedef struct Reader_82766690 {
    Data_82766690 *data;
} Reader_82766690;

int fn_82766690(Reader_82766690 *reader, int offset, unsigned int *out)
{
    const unsigned char *p = reader->data->bytes + offset;
    unsigned int first = p[0];
    unsigned int value;
    int size;

    switch (first & 3) {
    default:
        value = (((((p[3] << 8) | p[2]) << 8) | p[1]) << 6) | (first >> 2);
        size = 4;
        break;
    case 2:
        value = (((p[2] << 8) | p[1]) << 6) | (first >> 2);
        size = 3;
        break;
    case 1:
        value = (p[1] << 6) | (first >> 2);
        size = 2;
        break;
    case 0:
        value = first >> 2;
        size = 1;
        break;
    }
    *out = value;
    return size;
}
