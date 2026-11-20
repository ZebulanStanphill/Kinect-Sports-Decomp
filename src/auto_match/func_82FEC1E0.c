typedef struct Pair_82FEC1E0 {
    unsigned int id; /* 0x0 */
    float value;     /* 0x4 */
} Pair_82FEC1E0;

typedef struct Entry_82FEC1E0 {
    Pair_82FEC1E0 pair; /* 0x0 */
    float other;        /* 0x8 */
} Entry_82FEC1E0;

void fn_82FEC1E0(const Pair_82FEC1E0 *added, const Pair_82FEC1E0 *base, Entry_82FEC1E0 *out)
{
    unsigned int count;
    unsigned int i;
    unsigned int j;
    unsigned int id;
    float value;
    unsigned char found;

    for (count = 0; count < 4; count++) {
        if (base[count].id == 0) {
            break;
        }
        out[count].pair = base[count];
        out[count].other = 0.0f;
    }
    for (i = 0; i < 4; i++) {
        id = added[i].id;
        if (id == 0) {
            break;
        }
        found = 0;
        for (j = 0; j < count; j++) {
            if (out[j].pair.id == id) {
                out[j].other = added[i].value;
                found = 1;
                break;
            }
        }
        if (!found && count < 4) {
            value = added[i].value;
            out[count].pair.id = id;
            out[count].pair.value = 0.0f;
            out[count].other = value;
            count++;
        }
    }
    if (count < 4) {
        out[count].pair.id = 0;
    }
}
