/* Maps a position to a byte offset through a table of block offsets, either with per-block strides
 * or by interpolating between consecutive block offsets. */
typedef struct BlockMap_82C37940 {
    int f0;
    int *offsets;            /* 0x4 */
    int *strides;            /* 0x8 */
    int base;                /* 0xc */
    unsigned int blockMask;  /* 0x10 */
    unsigned int blockShift; /* 0x14 */
    unsigned int innerMask;  /* 0x18 */
    int hasStrides;          /* 0x1c */
} BlockMap_82C37940;

int fn_82C37940(BlockMap_82C37940 *map, int position)
{
    unsigned int relative = position - map->base;
    unsigned int block = (map->blockMask & relative) >> map->blockShift;
    unsigned int inner = map->innerMask & relative;
    int *offsets;

    if (map->hasStrides != 0) {
        return map->strides[block] * inner + map->offsets[block];
    }
    offsets = &map->offsets[block];
    return (int)((offsets[1] - offsets[0]) * inner) / (1 << map->blockShift) + offsets[0];
}
