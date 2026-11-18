#define ALIGN16(x) (((x) + 15) & ~15)

class Layout_82E01000
{
  public:
    int getBufferSize(int extra);

    char pad0[0xc];
    int baseSize; /* 0xc */
    int unk10;
    unsigned short count; /* 0x14 */
};

// Size of a buffer holding two per-item tables, the 16-byte extra entries and the base block,
// each rounded up to 16 bytes.
int Layout_82E01000::getBufferSize(int extra)
{
    return ALIGN16(count * 0x60) + ALIGN16(count * 0x50) + ALIGN16(extra * 16) + ALIGN16(baseSize);
}
