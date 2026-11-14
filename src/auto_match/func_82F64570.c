/* Name comparator: compares the names at offset 9 of two records (strcmp(b, a) != 0). */
int strcmp(const char *a, const char *b);

typedef struct Rec_82F64570 {
    char pad0[9];
    char name[1];   /* 0x09 */
} Rec_82F64570;

int fn_82F64570(const Rec_82F64570 *a, const Rec_82F64570 *b)
{
    return strcmp(b->name, a->name) != 0;
}
