typedef struct Layout_82CBC3B8 {
    char pad0[0xd4];
    int size; // 0xd4
    char pad1[0xc68];
    unsigned int parts; // 0xd40
    char pad2[0x2e74];
    int offsets[3]; // 0x3bb8
} Layout_82CBC3B8;

void fn_82CBC3B8(Layout_82CBC3B8 *layout)
{
    unsigned int parts = layout->parts;
    int size = layout->size;
    int groups;
    int partSize;
    int remainder;

    if (parts == 1) {
        layout->offsets[0] = size;
        return;
    }

    groups = size / 4;
    if (parts == 2) {
        layout->offsets[1] = size;
        layout->offsets[0] = ((groups + 1) / 2) * 4;
    } else if (parts == 4) {
        partSize = groups / 4;
        remainder = groups - partSize * 4;
        layout->offsets[2] = partSize;
        layout->offsets[1] = partSize;
        layout->offsets[0] = partSize;

        switch (remainder) {
        case 3:
            layout->offsets[1] = partSize + 1;
            layout->offsets[2] = partSize + 1;
            layout->offsets[0] = partSize + 1;
            break;
        case 2:
            layout->offsets[1] = partSize + 1;
            layout->offsets[0] = partSize + 1;
            break;
        case 1:
            layout->offsets[0] = partSize + 1;
            break;
        }

        layout->offsets[0] *= 4;
        layout->offsets[1] = layout->offsets[1] * 4 + layout->offsets[0];
        layout->offsets[2] = layout->offsets[2] * 4 + layout->offsets[1];
    }
}
