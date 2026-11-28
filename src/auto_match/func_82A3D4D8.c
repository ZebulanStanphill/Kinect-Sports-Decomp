typedef struct Encoder_82A3D4D8 {
    char pad0[0x994];
    unsigned short *sortPtr; /* 0x994 */
    unsigned char *len;      /* 0x998 */
    char pad99C[0x127a * 2 - 0x99c];
    unsigned short lenCount[17]; /* 0x24f4 */
} Encoder_82A3D4D8;

extern void fn_82A3D430(Encoder_82A3D4D8 *s, short n);

void fn_82A3D4D8(Encoder_82A3D4D8 *s, short root)
{
    unsigned char i;
    short k;
    unsigned short cum;

    for (i = 0; i <= 16; i++) {
        s->lenCount[i] = 0;
    }
    fn_82A3D430(s, root);
    cum = 0;
    for (i = 16; i > 0; i--) {
        cum += s->lenCount[i] << (16 - i);
    }
    while (cum != 0) {
        s->lenCount[16]--;
        for (i = 15; i > 0; i--) {
            if (s->lenCount[i] != 0) {
                s->lenCount[i]--;
                s->lenCount[i + 1] += 2;
                break;
            }
        }
        cum--;
    }
    for (i = 16; i > 0; i--) {
        k = s->lenCount[i];
        while (--k >= 0) {
            s->len[*s->sortPtr++] = i;
        }
    }
}
