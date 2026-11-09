/* NOTE: symbols.txt splits this function in two: fn_8281A5C0 (size 0x8) is
   its loop-closing `bne` + `blr`. This source is the whole function; only
   the symbol boundary keeps it below 100%. */
typedef struct Entry8281A5A8 {
    char pad[0x30];
    short next;
    char pad32[0xe];
} Entry8281A5A8;

void fn_8281A5A8(Entry8281A5A8 *entries, short i)
{
    while (i != -1) {
        i = entries[i].next;
    }
}
