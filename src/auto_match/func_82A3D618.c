typedef struct Huffman_82A3D618 {
    char pad0[0x990];
    unsigned short *freq; /* 0x990 */
    char pad1[0x99c - 0x994];
    short heap[(0x251c - 0x99c) / 2]; /* 0x99c */
    short heapLength;                 /* 0x251c */
} Huffman_82A3D618;

void fn_82A3D618(Huffman_82A3D618 *s, short k)
{
    short v = s->heap[k];
    short j = k << 1;

    while (j <= s->heapLength) {
        if (j < s->heapLength && s->freq[s->heap[j]] > s->freq[s->heap[j + 1]]) {
            j++;
        }
        if (s->freq[v] <= s->freq[s->heap[j]]) {
            break;
        }
        s->heap[k] = s->heap[j];
        k = j;
        j <<= 1;
    }
    s->heap[k] = v;
}
